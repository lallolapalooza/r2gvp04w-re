#!/usr/bin/env python3
"""PE baseline dump for the 10 NPU-package DLL targets."""
import hashlib
import os
import sys

import pefile

TARGETS = [
    "code$GetExtractPath$/Driver/npu_dml_compiler.dll",
    "code$GetExtractPath$/Driver/vpux_driver_compiler.dll",
    "code$GetExtractPath$/Driver/MVC_DEPEND/bin/moviCompile64.dll",
    "code$GetExtractPath$/Driver/MVC_DEPEND/bin/moviLLD64.dll",
    "code$GetExtractPath$/Driver/MVC_DEPEND/bin/moviAsm64.dll",
    "code$GetExtractPath$/Driver/shavedxilvecz64.dll",
    "code$GetExtractPath$/Driver/npu_dxil_frontend.dll",
    "code$GetExtractPath$/Driver/npu_d3d12_umd.dll",
    "code$GetExtractPath$/Driver/npu_blob_parser.dll",
    "code$GetExtractPath$/Driver/npu_level_zero_umd.dll",
]
ROOT = "/home/asdf/projects/r2gvp04w-re/extracted"
OUT = "/home/asdf/projects/r2gvp04w-re/re_baseline.txt"


def ent(data: bytes) -> float:
    if not data:
        return 0.0
    import math
    counts = [0] * 256
    for b in data:
        counts[b] += 1
    n = len(data)
    return -sum((c / n) * math.log2(c / n) for c in counts if c)


def main() -> None:
    lines = []
    for rel in TARGETS:
        path = os.path.join(ROOT, rel)
        if not os.path.exists(path):
            lines.append(f"!! MISSING {rel}")
            continue
        size = os.path.getsize(path)
        with open(path, "rb") as fh:
            data = fh.read()
        sha = hashlib.sha256(data).hexdigest()
        pe = pefile.PE(data=data, fast_load=False)
        lines.append(f"### {os.path.basename(path)}")
        lines.append(f"path: {rel}")
        lines.append(f"size: {size} sha256: {sha}")
        m = pe.FILE_HEADER
        lines.append(
            f"machine: 0x{m.Machine:04x} sections: {m.NumberOfSections} "
            f"timestamp: {m.TimeDateStamp} chars: 0x{m.Characteristics:04x}"
        )
        opt = pe.OPTIONAL_HEADER
        lines.append(
            f"magic: 0x{opt.Magic:04x} imagebase: 0x{opt.ImageBase:x} entry: 0x{opt.AddressOfEntryPoint:x} "
            f"subsystem: {opt.Subsystem} dllchars: 0x{opt.DllCharacteristics:04x}"
        )
        lines.append(f"pdb: {pe.get_debug_data().decode(errors='replace') if False else ''}")
        # debug / pdb path
        if hasattr(pe, "DIRECTORY_ENTRY_DEBUG"):
            for dbg in pe.DIRECTORY_ENTRY_DEBUG:
                if hasattr(dbg, "entry") and hasattr(dbg.entry, "PdbFileName"):
                    lines.append(
                        "pdb: " + dbg.entry.PdbFileName.rstrip(b"\x00").decode(errors="replace")
                    )
        lines.append("sections:")
        for s in pe.sections:
            raw = s.get_data()
            lines.append(
                f"  {s.Name.rstrip(chr(0).encode()).decode(errors='replace'):8s} "
                f"vsize=0x{s.Misc_VirtualSize:x} rawsize=0x{s.SizeOfRawData:x} "
                f"vaddr=0x{s.VirtualAddress:x} chars=0x{s.Characteristics:08x} entropy={ent(raw):.2f}"
            )
        if hasattr(pe, "DIRECTORY_ENTRY_EXPORT"):
            exps = pe.DIRECTORY_ENTRY_EXPORT.symbols
            lines.append(f"exports: {len(exps)}")
            for e in exps[:4000]:
                nm = e.name.decode(errors="replace") if e.name else f"ordinal_{e.ordinal}"
                lines.append(f"  0x{e.address:x} ord={e.ordinal} {nm}")
            if len(exps) > 4000:
                lines.append(f"  ... {len(exps) - 4000} more")
        else:
            exports = []
            for e in getattr(pe, "DIRECTORY_ENTRY_EXPORT", []):
                exports.append(e)
            lines.append("exports: 0")
        if hasattr(pe, "DIRECTORY_ENTRY_IMPORT"):
            lines.append(f"import dlls: {len(pe.DIRECTORY_ENTRY_IMPORT)}")
            total_imp = 0
            for entry in pe.DIRECTORY_ENTRY_IMPORT:
                dll = entry.dll.decode(errors="replace")
                names = []
                for imp in entry.imports:
                    names.append(
                        imp.name.decode(errors="replace") if imp.name else f"#{imp.ordinal}"
                    )
                total_imp += len(names)
                lines.append(f"  {dll} ({len(names)}): " + ", ".join(names[:60]) + (" ..." if len(names) > 60 else ""))
            lines.append(f"total imports: {total_imp}")
        else:
            lines.append("import dlls: 0")
        # version info
        if hasattr(pe, "VS_VERSIONINFO") or hasattr(pe, "FileInfo"):
            try:
                for fi in pe.FileInfo:
                    for e in fi:
                        if e.Key == b"StringFileInfo":
                            for st in e.StringTable:
                                for k, v in st.entries.items():
                                    lines.append(
                                        f"ver {k.decode(errors='replace')} = {v.decode(errors='replace')}"
                                    )
            except Exception as exc:  # noqa: BLE001
                lines.append(f"ver parse error: {exc}")
        # resources quick scan
        if hasattr(pe, "DIRECTORY_ENTRY_RESOURCE"):
            names = []
            for rtype in pe.DIRECTORY_ENTRY_RESOURCE.entries:
                rn = rtype.name if rtype.name else rtype.struct.Id
                names.append(str(rn))
            lines.append("resource types: " + ", ".join(names))
        lines.append("")
        print(f"done {os.path.basename(path)}", file=sys.stderr)
    with open(OUT, "w") as fh:
        fh.write("\n".join(lines))
    print(f"wrote {OUT}")


if __name__ == "__main__":
    main()

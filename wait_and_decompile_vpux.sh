#!/bin/bash
while kill -0 70732 2>/dev/null; do sleep 20; done
if ! grep -q "Analysis succeeded" /tmp/opencode/an_vpux.log; then
  echo "ANALYSIS FAILED for vpux - not running decompile" >> /tmp/opencode/dec_vpux.log
  exit 1
fi
GHIDRA_HEADLESS_MAXMEM=10G "/var/tmp/asdf-ghidra/ghidra_12.1.4_PUBLIC/support/analyzeHeadless" "/home/asdf/projects/r2gvp04w-re/ghidra-dlls/vpux" "vpux_proj" \
  -process "vpux_driver_compiler.dll" -noanalysis \
  -scriptPath "/home/asdf/projects/r2gvp04w-re" -postScript DecompileBatch.java "/home/asdf/projects/r2gvp04w-re/re_decompiled/vpux" \
  >> /tmp/opencode/dec_vpux.log 2>&1
echo "WRAPPER_EXIT=$? name=vpux" >> /tmp/opencode/dec_vpux.log

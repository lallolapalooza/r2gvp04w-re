#!/bin/bash
while kill -0 70731 2>/dev/null; do sleep 20; done
if ! grep -q "Analysis succeeded" /tmp/opencode/an_dml.log; then
  echo "ANALYSIS FAILED for dml - not running decompile" >> /tmp/opencode/dec_dml.log
  exit 1
fi
GHIDRA_HEADLESS_MAXMEM=10G "/var/tmp/user-ghidra/ghidra_12.1.4_PUBLIC/support/analyzeHeadless" "/home/user/projects/r2gvp04w-re/ghidra-dlls/dml" "dml_proj" \
  -process "npu_dml_compiler.dll" -noanalysis \
  -scriptPath "/home/user/projects/r2gvp04w-re" -postScript DecompileBatch.java "/home/user/projects/r2gvp04w-re/re_decompiled/dml" \
  >> /tmp/opencode/dec_dml.log 2>&1
echo "WRAPPER_EXIT=$? name=dml" >> /tmp/opencode/dec_dml.log

#!/bin/bash
while kill -0 70733 2>/dev/null; do sleep 20; done
if ! grep -q "Analysis succeeded" /tmp/opencode/an_movicomp.log; then
  echo "ANALYSIS FAILED for movicomp - not running decompile" >> /tmp/opencode/dec_movicomp.log
  exit 1
fi
GHIDRA_HEADLESS_MAXMEM=10G "/var/tmp/user-ghidra/ghidra_12.1.4_PUBLIC/support/analyzeHeadless" "/home/user/projects/r2gvp04w-re/ghidra-dlls/movicomp" "movicomp_proj" \
  -process "moviCompile64.dll" -noanalysis \
  -scriptPath "/home/user/projects/r2gvp04w-re" -postScript DecompileBatch.java "/home/user/projects/r2gvp04w-re/re_decompiled/movicomp" \
  >> /tmp/opencode/dec_movicomp.log 2>&1
echo "WRAPPER_EXIT=$? name=movicomp" >> /tmp/opencode/dec_movicomp.log

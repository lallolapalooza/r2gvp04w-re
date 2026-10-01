// DecompileBatch.java - decompile all functions of current program into one big
// C file + a summary index. Args: <outputDir>
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolType;
import ghidra.program.model.mem.MemoryBlock;

import java.io.FileWriter;
import java.io.PrintWriter;
import java.io.File;
import java.io.BufferedWriter;

public class DecompileBatch extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outputDir = args.length > 0 ? args[0]
                : "/home/asdf/projects/r2gvp04w-re/re_decompiled/" + currentProgram.getName();
        File outDir = new File(outputDir);
        if (!outDir.exists()) outDir.mkdirs();

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        // binary info
        PrintWriter infoWriter = new PrintWriter(new FileWriter(outputDir + "/00_binary_info.txt"));
        infoWriter.println("Name: " + currentProgram.getName());
        infoWriter.println("Executable: " + currentProgram.getExecutablePath());
        infoWriter.println("Format: " + currentProgram.getExecutableFormat());
        infoWriter.println("Language: " + currentProgram.getLanguageID());
        infoWriter.println("CompilerSpec: " + currentProgram.getCompilerSpec().getCompilerSpecID());
        infoWriter.println("ImageBase: " + currentProgram.getImageBase());
        infoWriter.println("MinAddress: " + currentProgram.getMinAddress());
        infoWriter.println("MaxAddress: " + currentProgram.getMaxAddress());
        infoWriter.println("PointerSize: " + currentProgram.getDefaultPointerSize());
        infoWriter.println("\nMemory Blocks:");
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            infoWriter.println("  " + block.getName() + ": " + block.getStart() + " - " + block.getEnd() +
                " (size=" + block.getSize() + ", init=" + block.isInitialized() +
                ", exec=" + block.isExecute() + ", r=" + block.isRead() + ", w=" + block.isWrite() + ")");
        }
        infoWriter.close();

        // exports
        PrintWriter expWriter = new PrintWriter(new FileWriter(outputDir + "/02_exports.txt"));
        int expCount = 0;
        ghidra.program.model.address.AddressIterator entryPts =
                currentProgram.getSymbolTable().getExternalEntryPointIterator();
        while (entryPts.hasNext()) {
            ghidra.program.model.address.Address a = entryPts.next();
            Symbol s = currentProgram.getSymbolTable().getPrimarySymbol(a);
            expWriter.println(a + "  " + (s != null ? s.getName() : "?"));
            expCount++;
        }
        expWriter.println("total: " + expCount);
        expWriter.close();

        // imports
        PrintWriter importWriter = new PrintWriter(new FileWriter(outputDir + "/01_imports.txt"));
        SymbolIterator extSyms = currentProgram.getSymbolTable().getExternalSymbols();
        int importCount = 0;
        while (extSyms.hasNext()) {
            Symbol sym = extSyms.next();
            if (sym.getSymbolType() == SymbolType.FUNCTION) {
                importWriter.println(sym.getName() + " @ " + sym.getAddress());
                importCount++;
            }
        }
        importWriter.println("total: " + importCount);
        importWriter.close();

        // decompile all functions into one concatenated file + index
        BufferedWriter allOut = new BufferedWriter(new FileWriter(outputDir + "/decompiled_all.c"));
        PrintWriter indexWriter = new PrintWriter(new FileWriter(outputDir + "/03_function_index.tsv"));
        indexWriter.println("seq\tname\taddress\tsize_bytes\tstatus\tc_offset");

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        int funcCount = 0, successCount = 0, failCount = 0;
        long cOffset = 0;
        long startTime = System.currentTimeMillis();

        while (functions.hasNext()) {
            Function func = functions.next();
            funcCount++;
            String funcName = func.getName();
            String status;
            String header = "\n/* ===== Function " + funcCount + ": " + funcName +
                    " @ " + func.getEntryPoint() +
                    " size=" + func.getBody().getNumAddresses() +
                    " conv=" + func.getCallingConventionName() + " ===== */\n";
            try {
                DecompileResults result = decomp.decompileFunction(func, 30, monitor);
                if (result != null && result.decompileCompleted()) {
                    String c = result.getDecompiledFunction().getC();
                    allOut.write(header);
                    allOut.write(c);
                    allOut.write("\n");
                    cOffset += header.length() + c.length() + 1;
                    status = "OK";
                    successCount++;
                } else {
                    allOut.write(header);
                    allOut.write("/* DECOMPILE_FAILED */\n");
                    cOffset += header.length() + 25;
                    status = "FAILED";
                    failCount++;
                }
            } catch (Exception e) {
                allOut.write(header);
                allOut.write("/* ERROR: " + e.getMessage() + " */\n");
                status = "ERROR";
                failCount++;
            }
            indexWriter.println(funcCount + "\t" + funcName.replaceAll("\t", " ") + "\t" +
                    func.getEntryPoint() + "\t" + func.getBody().getNumAddresses() + "\t" +
                    status + "\t" + cOffset);

            if (funcCount % 1000 == 0) {
                long elapsed = (System.currentTimeMillis() - startTime) / 1000;
                println("PROGRESS " + currentProgram.getName() + ": " + funcCount +
                        " funcs, " + successCount + " ok, " + failCount + " fail, " + elapsed + "s");
                indexWriter.flush();
                allOut.flush();
            }
        }

        allOut.close();
        indexWriter.close();

        PrintWriter sumWriter = new PrintWriter(new FileWriter(outputDir + "/00_summary.txt"));
        sumWriter.println("program: " + currentProgram.getName());
        sumWriter.println("total_functions: " + funcCount);
        sumWriter.println("decompiled_ok: " + successCount);
        sumWriter.println("decompile_failed: " + failCount);
        sumWriter.println("exports: " + expCount);
        sumWriter.println("imports: " + importCount);
        sumWriter.println("elapsed_sec: " + (System.currentTimeMillis() - startTime) / 1000);
        sumWriter.close();

        decomp.dispose();
        println("DONE " + currentProgram.getName() + ": " + funcCount + " functions, " +
                successCount + " ok, " + failCount + " fail -> " + outputDir);
    }
}

// DecompileAll.java - Ghidra script to decompile all functions and export to files
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
import ghidra.program.model.mem.Memory;
import ghidra.program.flatapi.FlatProgramAPI;

import java.io.FileWriter;
import java.io.PrintWriter;
import java.io.File;

public class DecompileAll extends GhidraScript {

    @Override
    public void run() throws Exception {
        String outputDir = "/home/asdf/projects/r2gvp04w-re/decompiled";
        File outDir = new File(outputDir);
        if (!outDir.exists()) outDir.mkdirs();

        // Setup decompiler
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        // Write binary info header
        PrintWriter infoWriter = new PrintWriter(new FileWriter(outputDir + "/00_binary_info.txt"));
        infoWriter.println("=== Binary Info ===");
        infoWriter.println("Name: " + currentProgram.getName());
        infoWriter.println("Executable: " + currentProgram.getExecutablePath());
        infoWriter.println("Format: " + currentProgram.getExecutableFormat());
        infoWriter.println("Language: " + currentProgram.getLanguageID());
        infoWriter.println("Compiler: " + currentProgram.getCompilerSpec().getCompilerSpecID());
        infoWriter.println("Image Base: " + currentProgram.getImageBase());
        infoWriter.println("Min Address: " + currentProgram.getMinAddress());
        infoWriter.println("Max Address: " + currentProgram.getMaxAddress());
        infoWriter.println("Default Pointer Size: " + currentProgram.getDefaultPointerSize());
        
        // Memory blocks
        Memory memory = currentProgram.getMemory();
        infoWriter.println("\n=== Memory Blocks ===");
        for (MemoryBlock block : memory.getBlocks()) {
            infoWriter.println(block.getName() + ": " + block.getStart() + " - " + block.getEnd() + 
                " (size=" + block.getSize() + ", initialized=" + block.isInitialized() + 
                ", exec=" + block.isExecute() + ", read=" + block.isRead() + ", write=" + block.isWrite() + ")");
        }
        
        infoWriter.close();

        // Write imports (external functions)
        PrintWriter importWriter = new PrintWriter(new FileWriter(outputDir + "/01_imports.txt"));
        importWriter.println("=== Imports (External Functions) ===");
        SymbolIterator extSyms = currentProgram.getSymbolTable().getExternalSymbols();
        int importCount = 0;
        while (extSyms.hasNext()) {
            Symbol sym = extSyms.next();
            if (sym.getSymbolType() == SymbolType.FUNCTION) {
                importWriter.println(sym.getName() + " @ " + sym.getAddress());
                importCount++;
            }
        }
        importWriter.println("\nTotal imports: " + importCount);
        importWriter.close();

        // Decompile all functions
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        int funcCount = 0;
        int successCount = 0;
        int failCount = 0;

        PrintWriter summaryWriter = new PrintWriter(new FileWriter(outputDir + "/00_function_summary.txt"));
        summaryWriter.println("=== Function Summary ===");
        
        while (functions.hasNext()) {
            Function func = functions.next();
            funcCount++;
            
            String funcName = func.getName();
            String safeName = funcName.replaceAll("[^a-zA-Z0-9_]", "_");
            String fileName = String.format("%04d_%s.c", funcCount, safeName);
            
            try {
                DecompileResults result = decomp.decompileFunction(func, 30, monitor);
                if (result != null && result.decompileCompleted()) {
                    String decompiled = result.getDecompiledFunction().getC();
                    PrintWriter funcWriter = new PrintWriter(new FileWriter(outputDir + "/" + fileName));
                    funcWriter.println("/*");
                    funcWriter.println(" * Function: " + funcName);
                    funcWriter.println(" * Address: " + func.getEntryPoint());
                    funcWriter.println(" * Size: " + func.getBody().getNumAddresses() + " bytes");
                    funcWriter.println(" * Calling Convention: " + func.getCallingConventionName());
                    funcWriter.println(" */");
                    funcWriter.println(decompiled);
                    funcWriter.close();
                    successCount++;
                    summaryWriter.println(funcCount + ": " + funcName + " @ " + func.getEntryPoint() + " -> " + fileName + " [OK]");
                } else {
                    failCount++;
                    summaryWriter.println(funcCount + ": " + funcName + " @ " + func.getEntryPoint() + " [DECOMPILE_FAILED]");
                }
            } catch (Exception e) {
                failCount++;
                summaryWriter.println(funcCount + ": " + funcName + " @ " + func.getEntryPoint() + " [ERROR: " + e.getMessage() + "]");
            }
            
            if (funcCount % 500 == 0) {
                println("Progress: " + funcCount + " functions processed...");
            }
        }
        
        summaryWriter.println("\n=== Summary ===");
        summaryWriter.println("Total functions: " + funcCount);
        summaryWriter.println("Successfully decompiled: " + successCount);
        summaryWriter.println("Failed: " + failCount);
        summaryWriter.close();
        
        decomp.dispose();
        
        println("=== Decompilation Complete ===");
        println("Total functions: " + funcCount);
        println("Successful: " + successCount);
        println("Failed: " + failCount);
        println("Output directory: " + outputDir);
    }
}

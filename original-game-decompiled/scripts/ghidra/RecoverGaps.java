// Second-pass function discovery after auto-analysis. Every function added here is logged with its method.
// Args: <output_dir> <fragments:0|1> [seeds.tsv]   seeds.tsv columns: address<TAB>name<TAB>method (for example Delphi VMT scan results)
// Methods: seed, orphan-instructions (decoded code outside any function), prologue-in-gap (undefined bytes after
// padding or a terminator that begin with a common x86 prologue and decode cleanly to a terminator),
// clean-gap-fragment (a whole undefined run that decodes linearly to its exact end, is not mostly text and is not padding;
// typically SEH filter or handler blocks reached only through scope tables). Fragments are heuristic: filter on this log.
// Code right after a call to a function that truly never returns (for example a fatal-error routine ending in ExitProcess)
// is compiled but unreachable. It is decoded for the listing and logged in unreachable_after_noreturn.csv with its parent
// function. It never becomes a function of its own. noreturn_functions.csv lists every no-return function for review.
// One-byte padding "functions" created by signature matching are removed and logged.
// @category A2Racer4.Decompile
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.app.cmd.function.CreateFunctionCmd;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

public class RecoverGaps extends GhidraScript {
    private static final int[][] PROLOGUES = {
        {0x55, 0x8B, 0xEC}, {0x55, 0x89, 0xE5}, {0x6A, 0xFF, 0x68}, {0x64, 0xA1, 0x00, 0x00, 0x00, 0x00},
        {0x83, 0xEC}, {0x81, 0xEC}, {0x53, 0x56, 0x57}, {0x56, 0x8B, 0xF1}, {0x53, 0x8B, 0xD8}, {0x56, 0x8B, 0xF0},
        {0x53, 0x56, 0x8B}, {0x56, 0x57, 0x8B}, {0x8B, 0x44, 0x24}, {0x8B, 0x4C, 0x24}, {0x55, 0x8B, 0x6C, 0x24}};

    private boolean matchesPrologue(Address a) {
        Memory mem = currentProgram.getMemory();
        byte[] b = new byte[8];
        try { if (mem.getBytes(a, b) < 8) return false; } catch (Exception e) { return false; }
        for (int[] p : PROLOGUES) {
            boolean ok = true;
            for (int i = 0; i < p.length; i++) if ((b[i] & 255) != p[i]) { ok = false; break; }
            if (ok) return true;
        }
        return false;
    }

    private final AddressSet dead = new AddressSet();

    private boolean callsNoReturn(Instruction i) {
        if (!i.getFlowType().isCall()) return false;
        FunctionManager fm = currentProgram.getFunctionManager();
        for (Address t : i.getFlows()) {
            Function f = fm.getFunctionAt(t);
            if (f != null) {
                if (f.hasNoReturn()) return true;
                Function th = f.isThunk() ? f.getThunkedFunction(true) : null;
                if (th != null && th.hasNoReturn()) return true;
            }
        }
        for (Reference r : i.getReferencesFrom()) {
            Function f = fm.getReferencedFunction(r.getToAddress());
            if (f != null && f.hasNoReturn()) return true;
        }
        return false;
    }

    private String callTargetName(Instruction i) {
        FunctionManager fm = currentProgram.getFunctionManager();
        for (Address t : i.getFlows()) { Function f = fm.getFunctionAt(t); if (f != null) return f.getName(true); }
        for (Reference r : i.getReferencesFrom()) { Function f = fm.getReferencedFunction(r.getToAddress()); if (f != null) return f.getName(true); }
        return "";
    }

    /** Decode code following calls that never return. Returns the number of new regions. */
    private int unreachablePass(PrintWriter w) throws Exception {
        int regions = 0;
        Listing listing = currentProgram.getListing();
        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        List<Instruction> sites = new ArrayList<>();
        InstructionIterator it = listing.getInstructions(true);
        while (it.hasNext()) { Instruction i = it.next(); if (callsNoReturn(i)) sites.add(i); }
        for (Instruction i : sites) {
            Address next = i.getMaxAddress().next();
            if (next == null || !currentProgram.getMemory().getExecuteSet().contains(next)) continue;
            if (listing.getInstructionAt(next) != null || listing.getDefinedDataAt(next) != null) continue;
            if (!mem.getAllInitializedAddressSet().contains(next)) continue;
            int v = mem.getByte(next) & 255;
            if (v == 0xCC || v == 0x90 || v == 0x00) continue;
            if (!plausibleCode(next, currentProgram.getMemory().getBlock(next).getEnd())) continue;
            DisassembleCommand cmd = new DisassembleCommand(next, null, true);
            cmd.applyTo(currentProgram, monitor);
            AddressSetView got = cmd.getDisassembledAddressSet();
            if (got == null || got.isEmpty()) continue;
            dead.add(got);
            Function parent = fm.getFunctionContaining(i.getAddress());
            for (AddressRange r : got) {
                w.println(r.getMinAddress() + "," + r.getMaxAddress() + "," + r.getLength() + "," + (parent == null ? "" : parent.getEntryPoint()) + "," + i.getAddress() + ",\"" + callTargetName(i).replace("\"", "'") + "\"");
            }
            regions++;
        }
        w.flush();
        return regions;
    }

    private int removePaddingFunctions(PrintWriter w) throws Exception {
        int removed = 0;
        FunctionManager fm = currentProgram.getFunctionManager();
        Memory mem = currentProgram.getMemory();
        List<Function> gone = new ArrayList<>();
        FunctionIterator it = fm.getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            if (f.isExternal() || f.isThunk() || f.getBody().getNumAddresses() != 1) continue;
            int v = mem.getByte(f.getEntryPoint()) & 255;
            if ((v == 0xCC || v == 0x90) && f.getSymbol().getSource() != SourceType.IMPORTED) gone.add(f);
        }
        for (Function f : gone) {
            Address a = f.getEntryPoint();
            w.println(a + "\tremoved-padding-function:" + f.getName());
            fm.removeFunction(a);
            currentProgram.getListing().clearCodeUnits(a, a, false);
            removed++;
        }
        w.flush();
        return removed;
    }

    /** Reattach orphan switch-case blocks to the function that owns the jump table. */
    private int fixSwitchParents() throws Exception {
        int fixed = 0;
        FunctionManager fm = currentProgram.getFunctionManager();
        SymbolTable st = currentProgram.getSymbolTable();
        java.util.Set<Function> parents = new java.util.HashSet<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(true);
        while (it.hasNext()) {
            Instruction i = it.next();
            if (fm.getFunctionContaining(i.getAddress()) != null) continue;
            Symbol s = st.getPrimarySymbol(i.getAddress());
            if (s == null) continue;
            String ns = s.getParentNamespace().getName();
            if (ns.startsWith("switchD_")) {
                try {
                    Address j = toAddr(Long.parseUnsignedLong(ns.substring(8), 16));
                    Function p = fm.getFunctionContaining(j);
                    if (p != null) parents.add(p);
                } catch (Exception e) { /* name without an address */ }
            }
        }
        for (Function p : parents) if (CreateFunctionCmd.fixupFunctionBody(currentProgram, p, monitor)) fixed++;
        return fixed;
    }

    private void writeNoReturnReport(Path out) throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        try (PrintWriter w = new PrintWriter(Files.newBufferedWriter(out.resolve("noreturn_functions.csv"), StandardCharsets.UTF_8))) {
            w.println("address,name,body_bytes,external,has_ret_instruction,caller_count");
            FunctionIterator it = fm.getFunctions(true);
            while (it.hasNext()) {
                Function f = it.next();
                if (!f.hasNoReturn()) continue;
                boolean ret = false;
                if (!f.isExternal()) {
                    InstructionIterator ii = currentProgram.getListing().getInstructions(f.getBody(), true);
                    while (ii.hasNext()) if (ii.next().getMnemonicString().toUpperCase().startsWith("RET")) { ret = true; break; }
                }
                w.println(f.getEntryPoint() + ",\"" + f.getName(true).replace("\"", "'") + "\"," + f.getBody().getNumAddresses() + "," + f.isExternal() + "," + ret + "," + f.getSymbol().getReferenceCount());
            }
        }
    }

    private static final java.util.Set<String> ODD = new java.util.HashSet<>(java.util.Arrays.asList(
        "HLT", "IN", "INS", "INSB", "INSW", "INSD", "OUT", "OUTS", "OUTSB", "OUTSW", "OUTSD", "ARPL", "BOUND", "AAM", "AAD", "AAA", "AAS", "DAA", "DAS", "SALC",
        "LES", "LDS", "INTO", "ENTER", "IRET", "IRETD", "RETF", "CLI", "STI", "PUSHA", "PUSHAD", "POPA", "POPAD", "XLAT", "LOOP", "LOOPE", "LOOPNE", "CALLF", "JMPF", "UD2", "WAIT"));

    /** Instructions that compilers rarely emit, or whose direct flow leaves memory: signs that data is being decoded as code. */
    private boolean suspicious(Instruction ins) {
        if (ODD.contains(ins.getMnemonicString().toUpperCase())) return true;
        for (Address t : ins.getFlows()) if (!currentProgram.getMemory().getExecuteSet().contains(t)) return true;
        return false;
    }

    /** Linear decode check: all instructions decode until an unconditional terminator within the undefined run. */
    private boolean plausibleCode(Address start, Address limit) {
        Address cur = start;
        int n = 0;
        ghidra.program.disassemble.Disassembler dis = ghidra.program.disassemble.Disassembler.getDisassembler(currentProgram, monitor, null);
        try {
            while (cur != null && cur.compareTo(limit) <= 0 && n < 4000) {
                ghidra.program.model.lang.InstructionBlock blk = dis.pseudoDisassembleBlock(cur, null, 1);
                if (blk == null || blk.isEmpty() || blk.hasInstructionError()) return false;
                Instruction ins = blk.getInstructionAt(cur);
                if (ins == null) return false;
                if (suspicious(ins)) return false;
                String m = ins.getMnemonicString().toUpperCase();
                n++;
                if (m.startsWith("RET") || m.equals("JMP")) return n >= 2 || m.startsWith("RET");
                cur = ins.getMaxAddress().next();
            }
        } catch (Exception e) { return false; }
        return false;
    }

    private void log(PrintWriter w, Address a, String method) { w.println(a + "\t" + method); w.flush(); }

    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        Path out = Paths.get(args[0]);
        Files.createDirectories(out);
        boolean fragments = args.length > 1 && args[1].equals("1");
        String seedsPath = args.length > 2 ? args[2] : null;
        FunctionManager fm = currentProgram.getFunctionManager();
        AddressSetView exec = currentProgram.getMemory().getExecuteSet();
        int seeds = 0, orphan = 0, prologue = 0, fragment = 0;
        try (PrintWriter w = new PrintWriter(Files.newBufferedWriter(out.resolve("recovered_functions.tsv"), StandardCharsets.UTF_8))) {
            w.println("address\tmethod");
            if (seedsPath != null && Files.exists(Paths.get(seedsPath))) {
                for (String line : Files.readAllLines(Paths.get(seedsPath), StandardCharsets.UTF_8)) {
                    if (line.isBlank() || line.startsWith("address")) continue;
                    String[] c = line.split("\t");
                    Address a = toAddr(Long.parseUnsignedLong(c[0].replace("0x", ""), 16));
                    if (!exec.contains(a)) continue;
                    if (currentProgram.getListing().getInstructionAt(a) == null) {
                        if (currentProgram.getListing().getDefinedDataAt(a) != null) currentProgram.getListing().clearCodeUnits(a, a, false);
                        new DisassembleCommand(a, null, true).applyTo(currentProgram, monitor);
                    }
                    if (currentProgram.getListing().getInstructionAt(a) == null) continue;
                    Function f = fm.getFunctionAt(a);
                    boolean added = false;
                    if (f == null) { Function g = fm.getFunctionContaining(a); if (g != null && !g.getEntryPoint().equals(a)) { /* split via new function */ } f = createFunction(a, null); added = f != null; }
                    if (f != null && c.length > 1 && !c[1].isEmpty()) {
                        try { createLabel(a, c[1].replaceAll("[^A-Za-z0-9_.@$]", "_"), true, SourceType.IMPORTED); f.setName(c[1].replaceAll("[^A-Za-z0-9_.@$]", "_"), SourceType.IMPORTED); } catch (Exception e) { /* name collision keeps the label */ }
                        if (c.length > 2) f.setComment("Name source: " + c[2]);
                    }
                    if (added) { seeds++; log(w, a, c.length > 2 ? "seed:" + c[2] : "seed"); }
                }
            }
            int removed = removePaddingFunctions(w);
            int switchFixed = fixSwitchParents();
            int unreachable = 0;
            try (PrintWriter un = new PrintWriter(Files.newBufferedWriter(out.resolve("unreachable_after_noreturn.csv"), StandardCharsets.UTF_8))) {
                un.println("region_start,region_end,bytes,parent_function,call_site,noreturn_target");
                for (int k = 0; k < 16; k++) { int n = unreachablePass(un); unreachable += n; if (n == 0) break; }
            }
            println("RECOVERGAPS prepass removed_padding=" + removed + " switch_parents_fixed=" + switchFixed + " unreachable_regions=" + unreachable);
            for (int pass = 0; pass < 8; pass++) {
                monitor.checkCancelled();
                int before = orphan + prologue + fragment;
                // orphan decoded instructions: entry = first instruction of a run outside any function
                InstructionIterator it = currentProgram.getListing().getInstructions(true);
                List<Address> starts = new ArrayList<>();
                Instruction prev = null;
                while (it.hasNext()) {
                    Instruction i = it.next();
                    if (fm.getFunctionContaining(i.getAddress()) == null && !dead.contains(i.getAddress())) {
                        boolean first = prev == null || !prev.getMaxAddress().next().equals(i.getAddress()) || fm.getFunctionContaining(prev.getAddress()) != null || !prev.getFlowType().isFallthrough();
                        if (first) starts.add(i.getAddress());
                    }
                    prev = i;
                }
                for (Address a : starts) {
                    if (fm.getFunctionContaining(a) == null && createFunction(a, null) != null) { orphan++; log(w, a, "orphan-instructions"); }
                }
                // undefined executable bytes beginning with a prologue, reached after padding or a terminator
                AddressSet undefinedBytes = new AddressSet();
                AddressSetView instrSet = new AddressSet();
                AddressSet insn = new AddressSet();
                InstructionIterator ii = currentProgram.getListing().getInstructions(true);
                while (ii.hasNext()) { Instruction i = ii.next(); insn.add(i.getMinAddress(), i.getMaxAddress()); }
                AddressSet dat = new AddressSet();
                DataIterator di = currentProgram.getListing().getDefinedData(true);
                while (di.hasNext()) { Data d = di.next(); dat.add(d.getMinAddress(), d.getMaxAddress()); }
                undefinedBytes.add(exec.subtract(insn).subtract(dat));
                for (AddressRange r : undefinedBytes) {
                    Address a = r.getMinAddress();
                    Memory mem = currentProgram.getMemory();
                    if (!mem.getAllInitializedAddressSet().contains(a)) continue;
                    // skip leading padding inside the run
                    while (a.compareTo(r.getMaxAddress()) < 0) {
                        int v = mem.getByte(a) & 255;
                        if (v == 0xCC || v == 0x90 || v == 0x00) a = a.next(); else break;
                    }
                    if (matchesPrologue(a) && plausibleCode(a, r.getMaxAddress())) {
                        new DisassembleCommand(a, null, true).applyTo(currentProgram, monitor);
                        if (currentProgram.getListing().getInstructionAt(a) != null && fm.getFunctionContaining(a) == null && createFunction(a, null) != null) { prologue++; log(w, a, "prologue-in-gap"); }
                    }
                }
                if (fragments) fragment += fragmentPass(w, undefinedBytes);
                // a new function can expose more calls that never return
                try (PrintWriter un = new PrintWriter(new FileWriter(out.resolve("unreachable_after_noreturn.csv").toFile(), true))) { unreachablePass(un); }
                if (orphan + prologue + fragment == before) break;
            }
        }
        writeNoReturnReport(out);
        println("RECOVERGAPS seeds=" + seeds + " orphan=" + orphan + " prologue=" + prologue + " fragment=" + fragment);
    }

    private int fragmentPass(PrintWriter w, AddressSet undefinedBytes) throws Exception {
        int made = 0;
        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        for (AddressRange r : undefinedBytes) {
            Address a = r.getMinAddress();
            if (!mem.getAllInitializedAddressSet().contains(a) || currentProgram.getListing().getInstructionAt(a) != null) continue;
            Address end = r.getMaxAddress();
            while (a.compareTo(end) < 0) { int v = mem.getByte(a) & 255; if (v == 0xCC || v == 0x90 || v == 0x00) a = a.next(); else break; }
            { int v0 = mem.getByte(a) & 255; if (v0 == 0xCC || v0 == 0x90 || v0 == 0x00) continue; }
            long len = end.subtract(a) + 1;
            if (len < 1 || len > 4096) continue;
            byte[] b = new byte[(int) len];
            mem.getBytes(a, b);
            // reject address tables: a run of aligned dwords that mostly point into this image
            if (len >= 8) {
                int dwords = (int) (len / 4), inside = 0;
                for (int k = 0; k + 4 <= len; k += 4) {
                    long v = (b[k] & 255L) | (b[k + 1] & 255L) << 8 | (b[k + 2] & 255L) << 16 | (b[k + 3] & 255L) << 24;
                    if (currentProgram.getMemory().contains(toAddr(v))) inside++;
                }
                if (inside * 2 >= dwords) continue;
            }
            int printable = 0, zero = 0;
            for (byte x : b) { int v = x & 255; if (v >= 0x20 && v < 0x7f) printable++; if (v == 0) zero++; }
            if (len >= 4 && printable * 10 >= len * 7) continue;
            if (len >= 4 && zero * 10 >= len * 5) continue;
            if (linearDecodeReachesEnd(a, end)) {
                new DisassembleCommand(new AddressSet(a, end), null, false).applyTo(currentProgram, monitor);
                if (currentProgram.getListing().getInstructionAt(a) != null && fm.getFunctionContaining(a) == null && createFunction(a, null) != null) { made++; log(w, a, "clean-gap-fragment"); }
            }
        }
        return made;
    }

    private boolean linearDecodeReachesEnd(Address start, Address end) {
        ghidra.program.disassemble.Disassembler dis = ghidra.program.disassemble.Disassembler.getDisassembler(currentProgram, monitor, null);
        Address cur = start;
        try {
            while (cur != null && cur.compareTo(end) <= 0) {
                ghidra.program.model.lang.InstructionBlock blk = dis.pseudoDisassembleBlock(cur, null, 1);
                if (blk == null || blk.isEmpty() || blk.hasInstructionError()) return false;
                Instruction ins = blk.getInstructionAt(cur);
                if (ins == null) return false;
                if (suspicious(ins)) return false;
                if (ins.getMaxAddress().compareTo(end) > 0) return false;
                if (ins.getMaxAddress().equals(end)) return true;
                cur = ins.getMaxAddress().next();
            }
        } catch (Exception e) { return false; }
        return false;
    }
}

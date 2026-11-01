// Exports every function and address-keyed evidence for one program. All C here is generated pseudocode.
// Args: <output_dir> <per_function:0|1> <decompile_threads>
// Outputs: decompiled.c, functions.csv, [functions/*.c], disassembly.asm, strings.csv, symbols.csv, imports.csv,
// exports.csv, sections.csv, calls.csv, data_refs.csv, code_gaps.csv, instructions_outside_functions.csv, failed_functions.csv, summary.json
// @category A2Racer4.Decompile
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.StringDataInstance;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;
import java.util.concurrent.*;

public class ExportModule extends GhidraScript {
    private Path out;
    private static String csv(Object x) {
        String s = String.valueOf(x);
        if (s.indexOf(',') >= 0 || s.indexOf('"') >= 0 || s.indexOf('\n') >= 0 || s.indexOf('\r') >= 0) return "\"" + s.replace("\"", "\"\"") + "\"";
        return s;
    }
    private static String row(Object... xs) { StringJoiner j = new StringJoiner(","); for (Object x : xs) j.add(csv(x)); return j.toString(); }
    private static String jstr(String x) { return "\"" + x.replace("\\", "\\\\").replace("\"", "\\\"").replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t") + "\""; }
    private static String safe(String x) { x = x.replaceAll("[^A-Za-z0-9_.-]", "_"); return x.substring(0, Math.min(100, x.length())); }
    private PrintWriter writer(String name) throws IOException { return new PrintWriter(new BufferedWriter(Files.newBufferedWriter(out.resolve(name), StandardCharsets.UTF_8), 1 << 20)); }
    private String ranges(AddressSetView body) { StringJoiner r = new StringJoiner(";"); for (AddressRange x : body) r.add(x.getMinAddress() + "-" + x.getMaxAddress()); return r.toString(); }
    private String hexBytes(CodeUnit c) { StringBuilder b = new StringBuilder(); try { for (byte v : c.getBytes()) b.append(String.format("%02x", v & 255)); } catch (Exception e) { b.append("?"); } return b.toString(); }

    static class Res { Function f; String code = ""; String error = ""; boolean ok; int attempts; String style = "decompile"; }

    private Res decompile(DecompInterface d, Function f) {
        Res r = new Res(); r.f = f;
        int[] budget = {60, 120};
        for (int t : budget) {
            r.attempts++;
            try {
                DecompileResults x = d.decompileFunction(f, t, monitor);
                r.error = x.getErrorMessage() == null ? "" : x.getErrorMessage().trim();
                if (x.decompileCompleted() && x.getDecompiledFunction() != null) {
                    r.code = x.getDecompiledFunction().getC();
                    r.ok = r.code != null && !r.code.isBlank();
                    if (r.ok) return r;
                }
            } catch (Exception e) { r.error = e.toString(); }
        }
        return r;
    }

    private DecompInterface newDecomp(String style) throws IOException {
        DecompInterface d = new DecompInterface();
        DecompileOptions o = new DecompileOptions();
        o.grabFromProgram(currentProgram);
        d.setOptions(o); d.toggleCCode(true); d.toggleSyntaxTree(false); d.setSimplificationStyle(style);
        if (!d.openProgram(currentProgram)) throw new IOException("decompiler openProgram failed: " + d.getLastMessage());
        return d;
    }

    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        out = Paths.get(args[0]);
        boolean perFunction = args.length > 1 && args[1].equals("1");
        int threads = args.length > 2 ? Integer.parseInt(args[2]) : 4;
        Files.createDirectories(out);
        Listing listing = currentProgram.getListing();
        SymbolTable st = currentProgram.getSymbolTable();
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();

        AddressSet executable = new AddressSet();
        try (PrintWriter w = writer("sections.csv")) {
            w.println("name,start,end,size,read,write,execute,initialized");
            for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
                w.println(row(b.getName(), b.getStart(), b.getEnd(), b.getSize(), b.isRead(), b.isWrite(), b.isExecute(), b.isInitialized()));
                if (b.isExecute() && b.isInitialized()) executable.add(b.getStart(), b.getEnd());
            }
        }
        try (PrintWriter w = writer("symbols.csv")) {
            w.println("address,name,type,source,external");
            SymbolIterator it = st.getAllSymbols(true);
            while (it.hasNext()) { Symbol s = it.next(); w.println(row(s.getAddress(), s.getName(true), s.getSymbolType(), s.getSource(), s.isExternal())); }
        }
        try (PrintWriter w = writer("imports.csv")) {
            w.println("library,name,external_address,iat_references");
            SymbolIterator it = st.getExternalSymbols();
            while (it.hasNext()) {
                Symbol s = it.next(); StringJoiner refs = new StringJoiner(";");
                for (Reference r : s.getReferences()) refs.add(r.getFromAddress().toString());
                w.println(row(s.getParentNamespace().getName(), s.getName(), s.getAddress(), refs));
            }
        }
        try (PrintWriter w = writer("exports.csv")) {
            w.println("address,name");
            AddressIterator it = st.getExternalEntryPointIterator();
            while (it.hasNext()) { Address a = it.next(); Symbol s = st.getPrimarySymbol(a); w.println(row(a, s == null ? "" : s.getName(true))); }
        }
        long stringCount = 0;
        try (PrintWriter w = writer("strings.csv")) {
            w.println("address,length,type,value,referenced_from_functions");
            DataIterator it = listing.getDefinedData(true);
            while (it.hasNext()) {
                Data d = it.next();
                if (StringDataInstance.isString(d)) {
                    StringDataInstance s = StringDataInstance.getStringDataInstance(d);
                    TreeSet<String> from = new TreeSet<>();
                    for (Reference r : rm.getReferencesTo(d.getAddress())) { Function f = fm.getFunctionContaining(r.getFromAddress()); from.add(f == null ? r.getFromAddress().toString() : f.getEntryPoint().toString()); }
                    w.println(row(d.getAddress(), d.getLength(), d.getDataType().getName(), s.getStringValue(), String.join(";", from)));
                    stringCount++;
                }
            }
        }
        // disassembly plus call and data reference tables
        AddressSet instructionSet = new AddressSet(); long instructionCount = 0;
        Map<Address, Long> perFunc = new HashMap<>();
        try (PrintWriter a = writer("disassembly.asm"); PrintWriter calls = writer("calls.csv"); PrintWriter drefs = writer("data_refs.csv")) {
            a.println("; Ghidra listing for " + currentProgram.getName() + " (" + currentProgram.getLanguageID() + "). Labels and types are tool-generated unless they came from the binary.");
            calls.println("caller,call_site,target,target_name,flow_type");
            drefs.println("from_address,from_function,to_address,ref_type,to_symbol");
            CodeUnitIterator it = listing.getCodeUnits(true);
            Address undefStart = null; long undefLen = 0;
            while (it.hasNext()) {
                CodeUnit cu = it.next();
                if (cu instanceof Data && !((Data) cu).isDefined()) {
                    if (undefStart == null) { undefStart = cu.getAddress(); undefLen = 0; }
                    undefLen += cu.getLength();
                    continue;
                }
                if (undefStart != null) { a.println("; undefined " + undefLen + " bytes at " + undefStart); undefStart = null; }
                Address addr = cu.getAddress();
                Function fe = fm.getFunctionAt(addr);
                if (fe != null) a.println("\n; ==== FUNCTION " + fe.getName(true) + " entry=" + addr + " sig=" + fe.getSignature());
                Symbol ps = st.getPrimarySymbol(addr);
                if (ps != null && fe == null && ps.getSource() != SourceType.DEFAULT) a.println(ps.getName(true) + ":");
                if (cu instanceof Instruction) {
                    Instruction i = (Instruction) cu;
                    instructionCount++; instructionSet.add(i.getMinAddress(), i.getMaxAddress());
                    Function f = fm.getFunctionContaining(addr);
                    String fa = f == null ? "" : f.getEntryPoint().toString();
                    if (f != null) perFunc.merge(f.getEntryPoint(), 1L, Long::sum);
                    String cm = i.getComment(CodeUnit.EOL_COMMENT);
                    a.println(addr + "  " + String.format("%-20s", hexBytes(i)) + " " + i + (cm == null ? "" : "  ; " + cm.replace("\n", " ")));
                    if (i.getFlowType().isCall()) {
                        Address[] t = i.getFlows();
                        if (t.length == 0) calls.println(row(fa, addr, "", "<indirect or unresolved>", i.getFlowType()));
                        for (Address x : t) { Symbol s = st.getPrimarySymbol(x); calls.println(row(fa, addr, x, s == null ? "" : s.getName(true), i.getFlowType())); }
                    }
                    for (Reference r : i.getReferencesFrom()) {
                        if (r.getReferenceType().isData() && r.getToAddress().isMemoryAddress()) {
                            Symbol s = st.getPrimarySymbol(r.getToAddress());
                            drefs.println(row(addr, fa, r.getToAddress(), r.getReferenceType(), s == null ? "" : s.getName(true)));
                        }
                    }
                } else {
                    String v = cu.toString();
                    if (v.length() > 160) v = v.substring(0, 160) + "...";
                    a.println(addr + "  " + v.replace("\n", " "));
                }
            }
            if (undefStart != null) a.println("; undefined " + undefLen + " bytes at " + undefStart);
        }
        AddressSet dataSet = new AddressSet();
        DataIterator di = listing.getDefinedData(true);
        while (di.hasNext()) { Data d = di.next(); dataSet.add(d.getMinAddress(), d.getMaxAddress()); }
        AddressSet noInstructions = executable.subtract(instructionSet);
        long paddingBytes = 0, dataBytes = 0, ambiguousBytes = 0;
        try (PrintWriter w = writer("code_gaps.csv")) {
            w.println("start,end_inclusive,length,classification,first_bytes_hex");
            Memory mem = currentProgram.getMemory();
            for (AddressRange r : noInstructions) {
                long len = r.getLength();
                byte[] b = new byte[(int) Math.min(len, 1 << 20)];
                int got = 0; try { got = mem.getBytes(r.getMinAddress(), b); } catch (Exception e) { }
                boolean pad = got > 0;
                for (int i = 0; i < got && pad; i++) { int v = b[i] & 255; if (v != 0 && v != 0xCC && v != 0x90) pad = false; }
                long inData = dataSet.intersect(new AddressSet(r.getMinAddress(), r.getMaxAddress())).getNumAddresses();
                String cls = pad ? "padding" : inData == len ? "defined_data" : inData > 0 ? "partly_defined_data" : "undefined_bytes_ambiguous";
                if (pad) paddingBytes += len; else if (inData == len) dataBytes += len; else ambiguousBytes += len - inData;
                StringBuilder h = new StringBuilder(); for (int i = 0; i < Math.min(got, 16); i++) h.append(String.format("%02x", b[i] & 255));
                w.println(row(r.getMinAddress(), r.getMaxAddress(), len, cls, h));
            }
        }
        // unreachable code after no-return calls, keyed by parent function, noted in each parent's header
        Map<String, List<String>> deadByParent = new HashMap<>();
        Path deadFile = out.resolve("unreachable_after_noreturn.csv");
        long deadBytes = 0, deadRegions = 0;
        if (Files.exists(deadFile)) {
            for (String l : Files.readAllLines(deadFile, StandardCharsets.UTF_8)) {
                if (l.isBlank() || l.startsWith("region_start")) continue;
                String[] c = l.split(",", 6);
                deadByParent.computeIfAbsent(c[3], k -> new ArrayList<>()).add(c[0] + "-" + c[1]);
                deadBytes += Long.parseLong(c[2]); deadRegions++;
            }
        }
        // decompile every non-external function; identical thread pool pattern to Ghidra's ParallelDecompiler
        List<Function> funcs = new ArrayList<>();
        FunctionIterator fit = fm.getFunctions(true);
        AddressSet bodies = new AddressSet();
        while (fit.hasNext()) { Function f = fit.next(); if (!f.isExternal()) { funcs.add(f); bodies.add(f.getBody()); } }
        BlockingQueue<DecompInterface> pool = new LinkedBlockingQueue<>();
        for (int i = 0; i < threads; i++) pool.add(newDecomp("decompile"));
        ExecutorService ex = Executors.newFixedThreadPool(threads);
        List<Future<Res>> fut = new ArrayList<>();
        for (Function f : funcs) fut.add(ex.submit(() -> { DecompInterface d = pool.take(); try { return decompile(d, f); } finally { pool.put(d); } }));
        ex.shutdown();
        if (perFunction) Files.createDirectories(out.resolve("functions"));
        int ok = 0, failed = 0, retried = 0, fallbackStyle = 0; long line = 1; int done = 0;
        DecompInterface styleD = null;
        try (PrintWriter idx = writer("functions.csv"); PrintWriter all = writer("decompiled.c"); PrintWriter fails = writer("failed_functions.csv")) {
            idx.println("address,end_address,body_bytes,instruction_count,name,namespace,signature,calling_convention,is_thunk,thunk_target,source,caller_count,callee_count,status,attempts,c_file,c_line_start,c_line_end,per_function_file,body_ranges,error");
            fails.println("address,name,body_bytes,error,fallback");
            String banner = "/* Ghidra " + ghidra.framework.Application.getApplicationVersion() + " generated C-like pseudocode for " + currentProgram.getName() + ".\n * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */\n";
            all.print(banner); line += banner.split("\n", -1).length - 1;
            for (int n = 0; n < funcs.size(); n++) {
                monitor.checkCancelled();
                Res r = fut.get(n).get();
                Function f = funcs.get(n);
                if (r.attempts > 1) retried++;
                String status = "decompiled";
                String fallback = "";
                if (!r.ok) {
                    // retry with the coarser simplification styles before falling back to assembly
                    for (String s : new String[] {"normalize", "register"}) {
                        if (styleD != null) styleD.dispose();
                        styleD = newDecomp(s);
                        DecompileResults x = styleD.decompileFunction(f, 60, monitor);
                        if (x.decompileCompleted() && x.getDecompiledFunction() != null && !x.getDecompiledFunction().getC().isBlank()) {
                            r.code = x.getDecompiledFunction().getC(); r.ok = true; status = "decompiled_style_" + s; fallbackStyle++; fallback = s; break;
                        }
                    }
                }
                StringBuilder h = new StringBuilder();
                h.append("\n/* ==== ").append(f.getName(true)).append(" @ ").append(f.getEntryPoint()).append(" ==== \n * signature: ").append(f.getSignature()).append("\n * body: ").append(ranges(f.getBody())).append("\n");
                if (f.isThunk() && f.getThunkedFunction(true) != null) h.append(" * thunk to: ").append(f.getThunkedFunction(true).getName(true)).append("\n");
                String c = f.getComment();
                if (c != null && !c.isBlank()) h.append(" * note: ").append(c.replace("*/", "* /").replace("\n", " ")).append("\n");
                List<String> deadHere = deadByParent.get(f.getEntryPoint().toString());
                if (deadHere != null) h.append(" * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): ").append(String.join(" ", deadHere)).append("\n");
                if (!r.error.isBlank()) h.append(" * decompiler message: ").append(r.error.replace("*/", "* /").replace("\n", " ")).append("\n");
                h.append(" */\n");
                String code = r.code == null ? "" : r.code;
                if (!r.ok) {
                    status = "assembly_only"; failed++;
                    StringBuilder asmb = new StringBuilder("/* Decompilation failed. Instructions follow.\n");
                    InstructionIterator ii = listing.getInstructions(f.getBody(), true);
                    while (ii.hasNext()) { Instruction i = ii.next(); asmb.append(i.getAddress()).append("  ").append(i.toString().replace("*/", "* /")).append("\n"); }
                    asmb.append("*/\n"); code = asmb.toString();
                    fails.println(row(f.getEntryPoint(), f.getName(true), f.getBody().getNumAddresses(), r.error, "assembly_in_decompiled_c"));
                } else ok++;
                String text = h + code + "\n";
                long start = line + 1;
                long nl = text.chars().filter(ch -> ch == '\n').count();
                all.print(text);
                line += nl;
                String pf = "";
                if (perFunction) { pf = "functions/" + safe(f.getEntryPoint().toString()) + "_" + safe(f.getName()) + ".c"; Files.writeString(out.resolve(pf), text, StandardCharsets.UTF_8); }
                Address end = f.getBody().getMaxAddress();
                Function th = f.isThunk() ? f.getThunkedFunction(true) : null;
                idx.println(row(f.getEntryPoint(), end, f.getBody().getNumAddresses(), perFunc.getOrDefault(f.getEntryPoint(), 0L), f.getName(), f.getParentNamespace().getName(), f.getSignature(), f.getCallingConventionName(), f.isThunk(), th == null ? "" : th.getName(true), f.getSymbol().getSource(), f.getCallingFunctions(monitor).size(), f.getCalledFunctions(monitor).size(), status, r.attempts, "decompiled.c", start, line, pf, ranges(f.getBody()), r.error));
                if (++done % 1000 == 0) { println("exported " + done + "/" + funcs.size()); idx.flush(); all.flush(); }
                fut.set(n, null);
            }
        } finally {
            for (DecompInterface d : pool) d.dispose();
            if (styleD != null) styleD.dispose();
        }
        AddressSet outside = instructionSet.subtract(bodies);
        try (PrintWriter w = writer("instructions_outside_functions.csv")) {
            w.println("start,end_inclusive,length");
            for (AddressRange r : outside) w.println(row(r.getMinAddress(), r.getMaxAddress(), r.getLength()));
        }
        // analysis bookmarks that flag disassembly problems
        long errBookmarks = 0;
        try (PrintWriter w = writer("analysis_errors.csv")) {
            w.println("address,category,comment");
            Iterator<Bookmark> bm = currentProgram.getBookmarkManager().getBookmarksIterator(BookmarkType.ERROR);
            while (bm.hasNext()) { Bookmark b = bm.next(); w.println(row(b.getAddress(), b.getCategory(), b.getComment())); errBookmarks++; }
        }
        try (PrintWriter w = writer("summary.json")) {
            w.println("{\n \"program\": " + jstr(currentProgram.getName()) + ",\n \"language\": " + jstr(currentProgram.getLanguageID().toString()) + ",\n \"compiler_spec\": " + jstr(currentProgram.getCompilerSpec().getCompilerSpecID().toString()) + ",\n \"image_base\": " + jstr(currentProgram.getImageBase().toString()) + ",\n \"ghidra_version\": " + jstr(ghidra.framework.Application.getApplicationVersion()) +
                ",\n \"functions\": " + funcs.size() + ",\n \"decompiled\": " + ok + ",\n \"assembly_only\": " + failed + ",\n \"retried\": " + retried + ",\n \"decompiled_with_fallback_style\": " + fallbackStyle + ",\n \"strings\": " + stringCount + ",\n \"instructions\": " + instructionCount + ",\n \"executable_bytes\": " + executable.getNumAddresses() + ",\n \"executable_bytes_without_instructions\": " + noInstructions.getNumAddresses() + ",\n \"gap_padding_bytes\": " + paddingBytes + ",\n \"gap_defined_data_bytes\": " + dataBytes + ",\n \"gap_ambiguous_bytes\": " + ambiguousBytes + ",\n \"instruction_bytes_outside_functions\": " + outside.getNumAddresses() + ",\n \"unreachable_after_noreturn_regions\": " + deadRegions + ",\n \"unreachable_after_noreturn_bytes\": " + deadBytes + ",\n \"error_bookmarks\": " + errBookmarks + "\n}");
        }
        println("EXPORT COMPLETE functions=" + funcs.size() + " decompiled=" + ok + " assembly_only=" + failed + " out=" + out);
    }
}

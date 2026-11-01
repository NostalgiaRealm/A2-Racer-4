// preScript: split a range out of an executable PE section and mark it non-executable, before auto-analysis.
// Used only where inspection shows the range is not code. Args: <start_hex> <end_hex> <block_name>
// @category A2Racer4.Decompile
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
public class SplitNonCode extends GhidraScript {
    @Override public void run() throws Exception {
        String[] a = getScriptArgs();
        Address s = toAddr(Long.parseUnsignedLong(a[0], 16));
        Address e = toAddr(Long.parseUnsignedLong(a[1], 16));
        Memory mem = currentProgram.getMemory();
        MemoryBlock b = mem.getBlock(s);
        if (!b.getStart().equals(s)) { mem.split(b, s); b = mem.getBlock(s); }
        if (e.next() != null && e.compareTo(b.getEnd()) < 0) mem.split(b, e.next());
        b = mem.getBlock(s);
        b.setName(a[2]); b.setExecute(false);
        println("SPLITNONCODE " + b.getName() + " " + b.getStart() + "-" + b.getEnd());
    }
}

// Applies analyst names and comments to a working copy of a program. Machine code is not changed.
// Args: <annotations.csv>  columns: address,kind,name,comment,confidence,evidence
// kind: function | global | comment. Confidence and evidence are repeated into the plate comment.
// @category A2Racer4.Decompile
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

public class ApplyAnnotations extends GhidraScript {
    static List<String> parse(String line) {
        List<String> out = new ArrayList<>(); StringBuilder c = new StringBuilder(); boolean q = false;
        for (int i = 0; i < line.length(); i++) {
            char ch = line.charAt(i);
            if (q) { if (ch == '"') { if (i + 1 < line.length() && line.charAt(i + 1) == '"') { c.append('"'); i++; } else q = false; } else c.append(ch); }
            else if (ch == '"') q = true;
            else if (ch == ',') { out.add(c.toString()); c.setLength(0); }
            else c.append(ch);
        }
        out.add(c.toString()); return out;
    }
    @Override public void run() throws Exception {
        int fn = 0, gl = 0, cm = 0, miss = 0; List<String> rejects = new ArrayList<>();
        for (String line : Files.readAllLines(Paths.get(getScriptArgs()[0]), StandardCharsets.UTF_8)) {
            if (line.isBlank() || line.startsWith("address,")) continue;
            List<String> c = parse(line);
            while (c.size() < 6) c.add("");
            Address a = toAddr(Long.parseUnsignedLong(c.get(0).replace("0x", ""), 16));
            String name = c.get(2).replaceAll("[^A-Za-z0-9_:~$@.]", "_");
            String note = c.get(3) + (c.get(4).isEmpty() ? "" : " [confidence: " + c.get(4) + "]") + (c.get(5).isEmpty() ? "" : " [evidence: " + c.get(5) + "]");
            if (c.get(1).equals("function")) {
                Function f = getFunctionAt(a);
                if (f == null) { miss++; rejects.add(line); continue; }
                try {
                    if (!name.isEmpty()) f.setName(name.replace("::", "__"), SourceType.USER_DEFINED);
                } catch (Exception e) { try { f.setName(name.replace("::", "__") + "_" + a, SourceType.USER_DEFINED); } catch (Exception e2) { rejects.add(line); } }
                f.setComment((f.getComment() == null ? "" : f.getComment() + " | ") + "ANALYST: " + note);
                fn++;
            } else if (c.get(1).equals("global")) {
                try { createLabel(a, name, true, SourceType.USER_DEFINED); } catch (Exception e) { rejects.add(line); }
                if (!note.isBlank()) setPlateComment(a, "ANALYST: " + note);
                gl++;
            } else {
                setPreComment(a, "ANALYST: " + note); cm++;
            }
        }
        println("ANNOTATIONS functions=" + fn + " globals=" + gl + " comments=" + cm + " missing=" + miss + " rejected=" + rejects.size());
        for (String r : rejects) println("REJECTED " + r);
    }
}

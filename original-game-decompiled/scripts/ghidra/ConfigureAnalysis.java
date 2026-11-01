// Sets analyzer options before auto-analysis. Args: deep|standard
// @category A2Racer4.Decompile
import ghidra.app.script.GhidraScript;
public class ConfigureAnalysis extends GhidraScript {
    @Override public void run() throws Exception {
        String mode = getScriptArgs().length > 0 ? getScriptArgs()[0] : "standard";
        if (mode.equals("deep")) {
            setAnalysisOption(currentProgram, "Decompiler Parameter ID", "true");
        }
        println("CONFIGURED analysis mode=" + mode);
    }
}

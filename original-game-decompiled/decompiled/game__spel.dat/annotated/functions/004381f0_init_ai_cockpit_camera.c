
/* ==== init_ai_cockpit_camera @ 004381f0 ==== 
 * signature: undefined __cdecl init_ai_cockpit_camera(int param_1)
 * body: 004381f0-0043820d;00438211-00438281
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(init_ai_cockpit_camera) illegal camera index(%d) max. (%d)\n']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043820e-00438210
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(init_ai_cockpit_camera) illegal camera index(%d) max. (%d)\n'] */

void __cdecl init_ai_cockpit_camera(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0xb)) {
    iVar1 = FUN_004b0a60();
    (&DAT_006c3518)[param_1] = iVar1;
    FUN_004b1190((void *)(DAT_00719b50 + iVar1 * 0x178),
                 *(undefined4 *)(DAT_005d3318 * 0xf0 + 0x24 + DAT_00715e50),0,0x41580000,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__init_ai_cockpit_camera__illegal_00599bc8);
}



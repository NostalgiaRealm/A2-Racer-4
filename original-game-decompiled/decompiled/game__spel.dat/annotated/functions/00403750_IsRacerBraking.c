
/* ==== IsRacerBraking @ 00403750 ==== 
 * signature: undefined4 __cdecl IsRacerBraking(int param_1)
 * body: 00403750-00403772;00403776-0040379d
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to IsRacerBraking function']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00403773-00403775
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to IsRacerBraking function'] */

undefined4 __cdecl IsRacerBraking(int param_1)

{
  if ((-1 < param_1) && (param_1 < 6)) {
    if (*(float *)(&DAT_005cea84 + param_1 * 0x294) != 100.0) {
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058eab0);
}



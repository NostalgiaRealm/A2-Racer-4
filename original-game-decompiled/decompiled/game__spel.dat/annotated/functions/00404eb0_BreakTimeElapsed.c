
/* ==== BreakTimeElapsed @ 00404eb0 ==== 
 * signature: undefined4 __cdecl BreakTimeElapsed(int param_1)
 * body: 00404eb0-00404ed2;00404ed6-00404f2d
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to BreakTimeElapsed function']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00404ed3-00404ed5
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to BreakTimeElapsed function'] */

undefined4 __cdecl BreakTimeElapsed(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = param_1 * 0x294;
    if (2.5 < *(float *)(&DAT_005cea58 + iVar1)) {
      FUN_00402e40(&DAT_005cea7c + iVar1,0.0);
      FUN_00402ea0(&DAT_005cea7c + iVar1,100.0);
      *(undefined4 *)(&DAT_005cea54 + iVar1) = 0xc0a00000;
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058f724);
}



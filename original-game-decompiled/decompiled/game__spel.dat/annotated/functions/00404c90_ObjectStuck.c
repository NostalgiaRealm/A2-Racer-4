
/* ==== ObjectStuck @ 00404c90 ==== 
 * signature: undefined4 __cdecl ObjectStuck(int param_1)
 * body: 00404c90-00404cb2;00404cb6-00404cdd
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to ObjectStuck function']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00404cb3-00404cb5
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to ObjectStuck function'] */

undefined4 __cdecl ObjectStuck(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x13)) {
    if (2.0 < *(float *)(&DAT_005cea54 + param_1 * 0x294)) {
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058f580);
}



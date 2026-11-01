
/* ==== TargetInReverse @ 00404b61 ==== 
 * signature: undefined4 __cdecl TargetInReverse(int param_1)
 * body: 00404b61-00404b92;00404b96-00404bd3
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to TargetInReverse function']
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to TargetInReverse function'] */

undefined4 __cdecl TargetInReverse(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x13)) {
    if (*(float *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0xc4 + DAT_00715e50) < 0.0) {
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058f4b8);
}




/* ==== ObjectStopped @ 00404a2b ==== 
 * signature: undefined4 __cdecl ObjectStopped(int param_1)
 * body: 00404a2b-00404a52;00404a56-00404ae2
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to ObjectStopped function']
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to ObjectStopped function'] */

undefined4 __cdecl ObjectStopped(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x13)) {
    if (*(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) <= 5.0) {
      *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) = 0;
      *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xbc + DAT_00715e50) = 0;
      *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xcc + DAT_00715e50) = 0;
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058f3e0);
}



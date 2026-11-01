
/* ==== MayRacerBash @ 004041d0 ==== 
 * signature: undefined4 __cdecl MayRacerBash(int param_1)
 * body: 004041d0-0040429e
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to MayRacerBash function']
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to MayRacerBash function'] */

undefined4 __cdecl MayRacerBash(int param_1)

{
  uint uVar1;
  float10 fVar2;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058ef9c);
  }
  if (((&DAT_005973c8)[param_1 * 0x16] == 0) &&
     (30.0 <= *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50))) {
    fVar2 = FUN_004a6800(0x7128b0);
    uVar1 = FUN_00558625();
    if (((float)((int)uVar1 % 100) < (float)(fVar2 * (float10)50.0)) &&
       (*(float *)(&DAT_005cea50 + param_1 * 0x294) < 1.0)) {
      return 1;
    }
    *(undefined4 *)(&DAT_005cea50 + param_1 * 0x294) = 0;
  }
  return 0;
}



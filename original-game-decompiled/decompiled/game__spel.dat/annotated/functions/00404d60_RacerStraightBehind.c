
/* ==== RacerStraightBehind @ 00404d60 ==== 
 * signature: undefined8 __cdecl RacerStraightBehind(int param_1)
 * body: 00404d60-00404d85;00404d89-00404e15
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to RacerStraightBehind functi']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00404d86-00404d88
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to RacerStraightBehind functi'] */

undefined8 __cdecl RacerStraightBehind(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float fStack_4;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058f650);
  }
  iVar1 = *(int *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x24 + DAT_00715e50);
  lVar3 = FUN_00403ea0((&DAT_005ce9e8)[param_1 * 0xa5],
                       *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8),
                       *(undefined4 *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8 + 0x58),fStack_4);
  uVar2 = (uint)((ulonglong)lVar3 >> 0x20);
  if ((0x79c < (int)lVar3) && ((int)lVar3 < 0x864)) {
    return CONCAT44(uVar2,1);
  }
  return (ulonglong)uVar2 << 0x20;
}



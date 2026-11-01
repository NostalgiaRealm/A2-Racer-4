
/* ==== FUN_004053a0 @ 004053a0 ==== 
 * signature: undefined4 __cdecl FUN_004053a0(int param_1)
 * body: 004053a0-004053c2;004053c6-0040542a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004053c3-004053c5
 */

undefined4 __cdecl FUN_004053a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Illegal_FSM_object_inde_0058f850);
  }
  iVar2 = param_1 * 0x294;
  iVar1 = FUN_00407d20(*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50),
                       *(int *)(*(int *)(&DAT_005cea34 + iVar2) * 0xf0 + 0x34 + DAT_00715e50));
  if ((3 < iVar1) &&
     (*(int *)(*(int *)(&DAT_005cea04 + iVar2) + *(int *)(&DAT_005ce9fc + iVar2) * 8) != 6)) {
    return 1;
  }
  return 0;
}



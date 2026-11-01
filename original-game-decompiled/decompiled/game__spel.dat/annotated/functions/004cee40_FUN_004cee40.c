
/* ==== FUN_004cee40 @ 004cee40 ==== 
 * signature: undefined4 __cdecl FUN_004cee40(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004cee40-004ceeab;004ceeaf-004ceeb2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ceeac-004ceeae
 */

undefined4 __cdecl
FUN_004cee40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004ceed0(param_1);
  iVar1 = *(int *)(DAT_0074b358 + 8 + iVar1 * 0x1c);
  if ((iVar1 != -1) && (iVar1 = iVar1 * 0x1c, (&DAT_0074b360)[iVar1] != '\0')) {
    if (*(code **)(&DAT_0074b378 + iVar1) != (code *)0x0) {
      uVar2 = (**(code **)(&DAT_0074b378 + iVar1))(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d_____dispatch_form_message__005b6e44);
}



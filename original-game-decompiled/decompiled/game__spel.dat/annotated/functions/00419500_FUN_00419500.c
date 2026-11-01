
/* ==== FUN_00419500 @ 00419500 ==== 
 * signature: undefined __cdecl FUN_00419500(int param_1)
 * body: 00419500-00419531;00419535-00419567
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00419532-00419534
 */

void __cdecl FUN_00419500(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 * 0xf0 + 0x10 + DAT_00715e50) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Test_requested_for_a_non_00593b8c);
  }
  iVar2 = 4;
  piVar3 = (int *)(*(int *)(param_1 * 0xf0 + 0x10 + DAT_00715e50) + 0x34);
  do {
    iVar1 = *piVar3;
    FUN_004f21c0(*(void **)(iVar1 + 8),1.0);
    FUN_004f21e0(*(int *)(iVar1 + 8));
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



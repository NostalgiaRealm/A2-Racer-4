
/* ==== Catch@00475a7a @ 00475a7a ==== 
 * signature: undefined4 __stdcall Catch@00475a7a(void)
 * body: 00475a7a-00475ae1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00475ae2-00475aea
 */

undefined4 Catch_00475a7a(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  int *piVar3;
  
  iVar1 = *(int *)(unaff_EBP + -0x24);
  piVar2 = *(int **)(iVar1 + 4);
  piVar3 = (int *)*piVar2;
  if (piVar3 != piVar2) {
    do {
      FUN_004c3fa0((byte *)s_Link_error_message___s_in___s____005a8f04);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(iVar1 + 4));
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_There_are__d_link_errors_in__s_005a8f28);
}



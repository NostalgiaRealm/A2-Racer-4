
/* ==== FUN_004d9ccc @ 004d9ccc ==== 
 * signature: undefined __stdcall FUN_004d9ccc(void)
 * body: 004d9ccc-004d9d3e
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_004d9ccc(void)

{
  int unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  void *unaff_retaddr;
  undefined **ppuStack00000028;
  int in_stack_00000030;
  undefined4 in_stack_00000038;
  void *in_stack_00000040;
  undefined4 uStack00000048;
  
  if (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4) {
    do {
      FUN_004d8ff0(unaff_ESI,unaff_retaddr);
    } while (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4);
  }
  *(undefined4 *)(*(int *)((int)unaff_ESI + 4) + *(int *)((int)unaff_ESI + 8)) = in_stack_00000038;
  *(int *)((int)unaff_ESI + 8) = *(int *)((int)unaff_ESI + 8) + 4;
  uStack00000048 = 0xffffffff;
  ppuStack00000028 = &PTR_FUN_005778c0;
  FUN_004cf650(&stack0x00000028);
  if (unaff_EBX + 0x18 == *(int *)(*(int *)(unaff_EBP + 8) + 8)) {
    ExceptionList = in_stack_00000040;
    return;
  }
  FUN_004cef20(&stack0x00000028,unaff_EBX + 0x18);
  ppuStack00000028 = &PTR_FUN_005778c0;
  uStack00000048 = 0;
                    /* WARNING: Could not recover jumptable at 0x004d9c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004d9d40)[in_stack_00000030 + -1])();
  return;
}



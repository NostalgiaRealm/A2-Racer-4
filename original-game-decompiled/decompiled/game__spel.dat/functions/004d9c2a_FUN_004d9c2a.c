
/* ==== FUN_004d9c2a @ 004d9c2a ==== 
 * signature: undefined __stdcall FUN_004d9c2a(void)
 * body: 004d9c2a-004d9c3b
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_004d9c2a(void)

{
  int unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  undefined **ppuStack00000028;
  int in_stack_00000030;
  undefined4 in_stack_00000038;
  void *in_stack_00000040;
  undefined4 uStack00000048;
  
  FUN_004d91d0(unaff_ESI,4);
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



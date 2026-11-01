
/* ==== FUN_004d9c3c @ 004d9c3c ==== 
 * signature: undefined __stdcall FUN_004d9c3c(void)
 * body: 004d9c3c-004d9c74
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_004d9c3c(void)

{
  undefined4 *puVar1;
  int unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined **ppuStack00000028;
  int in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  void *in_stack_00000040;
  undefined4 uStack00000048;
  
  uStack00000010 = in_stack_0000003c;
  uStack0000000c = in_stack_00000038;
  FUN_004d91d0(unaff_ESI,8);
  puVar1 = (undefined4 *)(*(int *)((int)unaff_ESI + 4) + *(int *)((int)unaff_ESI + 8));
  *puVar1 = uStack0000000c;
  puVar1[1] = uStack00000010;
  *(int *)((int)unaff_ESI + 8) = *(int *)((int)unaff_ESI + 8) + 8;
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



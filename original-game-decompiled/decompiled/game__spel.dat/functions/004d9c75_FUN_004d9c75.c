
/* ==== FUN_004d9c75 @ 004d9c75 ==== 
 * signature: undefined __stdcall FUN_004d9c75(void)
 * body: 004d9c75-004d9ccb
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_004d9c75(void)

{
  undefined1 *puVar1;
  uint *puVar2;
  int unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  undefined **ppuStack00000028;
  int in_stack_00000030;
  void *in_stack_00000040;
  undefined1 uStack00000048;
  uint3 uStack00000049;
  
  puVar1 = FUN_00479930(&stack0x00000028,&stack0x00000018);
  puVar2 = *(uint **)(puVar1 + 4);
  uStack00000048 = 1;
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)&DAT_0057629c;
  }
  puVar2 = FUN_005686b8(puVar2);
  FUN_004d91d0(unaff_ESI,4);
  _uStack00000048 = (uint)uStack00000049 << 8;
  *(uint **)(*(int *)((int)unaff_ESI + 4) + *(int *)((int)unaff_ESI + 8)) = puVar2;
  *(int *)((int)unaff_ESI + 8) = *(int *)((int)unaff_ESI + 8) + 4;
  FUN_004028f0(&stack0x00000018,'\x01');
  _uStack00000048 = 0xffffffff;
  ppuStack00000028 = &PTR_FUN_005778c0;
  FUN_004cf650(&stack0x00000028);
  if (unaff_EBX + 0x18 == *(int *)(*(int *)(unaff_EBP + 8) + 8)) {
    ExceptionList = in_stack_00000040;
    return;
  }
  FUN_004cef20(&stack0x00000028,unaff_EBX + 0x18);
  ppuStack00000028 = &PTR_FUN_005778c0;
  _uStack00000048 = 0;
                    /* WARNING: Could not recover jumptable at 0x004d9c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004d9d40)[in_stack_00000030 + -1])();
  return;
}



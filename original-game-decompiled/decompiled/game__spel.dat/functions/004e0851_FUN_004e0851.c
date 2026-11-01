
/* ==== FUN_004e0851 @ 004e0851 ==== 
 * signature: undefined __stdcall FUN_004e0851(void)
 * body: 004e0851-004e0853
 */

void FUN_004e0851(void)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int *piVar6;
  int unaff_EBP;
  undefined6 uVar7;
  code *pcStack00000004;
  undefined4 uStack00000008;
  int in_stack_00000014;
  undefined1 auStack_10 [16];
  
  pcVar2 = (code *)swi(7);
  uVar7 = (*pcVar2)();
  *(char *)(unaff_EBP + -0x26ffb1f9) =
       *(char *)(unaff_EBP + -0x26ffb1f9) + (char)((uint6)uVar7 >> 0x28);
  piVar6 = (int *)CONCAT31((int3)((uint)extraout_ECX >> 8),(char)extraout_ECX + (char)uVar7);
  pcVar1 = (char *)((int)uVar7 + -0x6f6f6f70);
  *pcVar1 = *pcVar1 + (char)((uint6)uVar7 >> 0x20);
  uStack00000008 = 0xffffffff;
  pcStack00000004 = FUN_005712ff;
  uVar4 = 0;
  if (piVar6[0xf] != 0) {
    uVar4 = piVar6[0x10] - piVar6[0xf] >> 4;
  }
  ExceptionList = register0x00000010;
  FUN_004d9aa0(*(void **)(in_stack_00000014 + 8),auStack_10,uVar4);
  uStack00000008 = 1;
  FUN_004e5a30(piVar6 + 0xd,(int)auStack_10);
  cVar3 = (**(code **)(*piVar6 + 0x44))();
  iVar5 = piVar6[0xb];
  if (cVar3 != '\0') {
    iVar5 = iVar5 + *(int *)(in_stack_00000014 + 0xc);
  }
  FUN_004d9290(*(void **)(in_stack_00000014 + 8),iVar5);
  FUN_004e5ab0(piVar6 + 0xd,(int)auStack_10);
                    /* WARNING: Could not recover jumptable at 0x004e08f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004e09ec)[piVar6[8] + -1])();
  return;
}




/* ==== FUN_0040b048 @ 0040b048 ==== 
 * signature: undefined FUN_0040b048(void)
 * body: 0040b048-0040b0ac
 */

void FUN_0040b048(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char *in_stack_00000004;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  byte *pbStack_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  pbStack_8 = (byte *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  for (iVar2 = 1; *(int *)(iVar2 * 4 + 0x4ac5d8) != -1; iVar2 = iVar2 + 1) {
    if (iVar2 == 7) goto LAB_0040b097;
  }
  FUN_00403e14((int *)&pbStack_8,in_stack_00000004);
  uVar1 = FUN_00408654(pbStack_8,0,extraout_ECX);
  *(undefined4 *)(iVar2 * 4 + 0x4ac5d8) = uVar1;
LAB_0040b097:
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0040b0b4;
  pcStack_18 = (code *)0x40b0ac;
  FUN_00403c5c((int *)&pbStack_8);
  return;
}



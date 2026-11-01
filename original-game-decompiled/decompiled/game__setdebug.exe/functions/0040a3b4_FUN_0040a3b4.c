
/* ==== FUN_0040a3b4 @ 0040a3b4 ==== 
 * signature: undefined FUN_0040a3b4(void)
 * body: 0040a3b4-0040a418
 */

void FUN_0040a3b4(void)

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
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  for (iVar2 = 1; *(int *)(iVar2 * 4 + 0x4475d0) != -1; iVar2 = iVar2 + 1) {
    if (iVar2 == 7) goto LAB_0040a403;
  }
  FUN_00403b70((int *)&pbStack_8,in_stack_00000004);
  uVar1 = FUN_00407cdc(pbStack_8,0,extraout_ECX);
  *(undefined4 *)(iVar2 * 4 + 0x4475d0) = uVar1;
LAB_0040a403:
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0040a420;
  pcStack_18 = (code *)0x40a418;
  FUN_004039b8((int *)&pbStack_8);
  return;
}



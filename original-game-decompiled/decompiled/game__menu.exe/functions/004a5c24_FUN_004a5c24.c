
/* ==== FUN_004a5c24 @ 004a5c24 ==== 
 * signature: undefined FUN_004a5c24(void)
 * body: 004a5c24-004a5d06
 */

void FUN_004a5c24(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 unaff_EBX;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  int iStack_18;
  int aiStack_14 [2];
  undefined3 uStack_c;
  char cStack_9;
  undefined4 *puStack_8;
  
  puStack_24 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  uStack_c = 0;
  cStack_9 = 0;
  aiStack_14[1] = 0;
  aiStack_14[0] = 0;
  iStack_18 = 0;
  puStack_28 = &UNK_004a5d07;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00403c5c(param_2);
  iVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),99);
  cVar1 = cStack_9;
  do {
    cStack_9 = cVar1;
    FUN_00403e04(aiStack_14 + 1,iVar4);
    uStack_2c = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x10);
    FUN_00403f9c((int *)&puStack_8,3);
    uVar2 = FUN_004087a4((undefined *)puStack_8);
    cStack_9 = (char)uVar2;
    if (cStack_9 != '\0') {
      FUN_00403cb0(param_2,puStack_8);
      break;
    }
    iVar4 = iVar4 + 1;
    cVar1 = 0;
  } while ((char)iVar4 != '{');
  if (cStack_9 == '\0') {
    FUN_00403e04(&iStack_18,iVar4);
    uStack_48 = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x10);
    FUN_00403f9c(aiStack_14,4);
    iVar4 = aiStack_14[0];
    uVar3 = FUN_0045f46c();
    FUN_0045fe88(uVar3,iVar4);
  }
  *in_FS_OFFSET = uStack_48;
  FUN_00403c80(&iStack_18,3);
  FUN_00403c5c((int *)&puStack_8);
  return;
}



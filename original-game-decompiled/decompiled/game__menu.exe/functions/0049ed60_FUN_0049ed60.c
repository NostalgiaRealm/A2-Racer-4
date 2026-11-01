
/* ==== FUN_0049ed60 @ 0049ed60 ==== 
 * signature: undefined FUN_0049ed60(void)
 * body: 0049ed60-0049eea1
 */

void FUN_0049ed60(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined1 *puStack_3c;
  byte abStack_2c [36];
  undefined4 *puStack_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_3c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  puStack_40 = &UNK_0049eea2;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"CheckIfBestLap",0);
  uVar2 = FUN_0049ed24();
  iVar7 = *(int *)(uVar2 + 0x48);
  if (SBORROW4(iVar7,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < iVar7 + -1) {
    iVar6 = 0;
    do {
      iVar3 = FUN_0048a7f4(*(int *)(*(int *)puVar1 + 200),iVar6);
      iVar4 = FUN_0049ed10();
      iVar4 = FUN_0048f44c(*(int *)(*(int *)puVar1 + 0xc4),iVar4);
      if (iVar3 < *(int *)(iVar4 + 4)) {
        *(byte *)(*(int *)puVar1 + 0xd0) = *(byte *)(*(int *)puVar1 + 0xd0) | 0x20;
        uVar5 = FUN_0048a7f4(*(int *)(*(int *)puVar1 + 200),iVar6);
        iVar3 = FUN_0049ed10();
        iVar3 = FUN_0048f44c(*(int *)(*(int *)puVar1 + 0xc4),iVar3);
        *(undefined4 *)(iVar3 + 4) = uVar5;
        uVar2 = FUN_0045f46c();
        FUN_0045fe88(uVar2,0x49eed8);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((*(byte *)(*(int *)puVar1 + 0xd0) & 0x20) != 0) {
    FUN_0048b2b4(*(int *)(*(int *)puVar1 + 0xc0),abStack_2c);
    FUN_00403e80((int *)&puStack_8,abStack_2c);
    do {
      FUN_004984f0(&puStack_8);
    } while (puStack_8 == (undefined4 *)0x0);
    iVar7 = FUN_0048f44c(*(int *)(*(int *)puVar1 + 0xc4),
                         *(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x14));
    FUN_00403cb0((int *)(iVar7 + 8),puStack_8);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &UNK_0049eea9;
  puStack_40 = (undefined *)0x49eea1;
  FUN_00403c5c((int *)&puStack_8);
  return;
}



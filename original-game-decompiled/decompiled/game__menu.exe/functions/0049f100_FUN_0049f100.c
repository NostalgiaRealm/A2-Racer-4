
/* ==== FUN_0049f100 @ 0049f100 ==== 
 * signature: undefined FUN_0049f100(void)
 * body: 0049f100-0049f221
 */

void FUN_0049f100(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  
  puStack_18 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  puStack_14 = (undefined4 *)0x0;
  puStack_1c = &UNK_0049f222;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,(undefined4 *)"ProcessQualify",0);
  FUN_004085ac(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xa4),(int *)&puStack_c);
  FUN_00403f28(&iStack_8,(undefined4 *)"playerpos: ",puStack_c);
  iVar3 = iStack_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,iVar3);
  uVar2 = FUN_0049ed24();
  iVar3 = *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18);
  uVar2 = FUN_00462070(uVar2,CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(iVar3 + 8)));
  FUN_004085ac(uVar2,(int *)&puStack_14);
  FUN_00403f28(&iStack_10,(undefined4 *)"QualifyPos: ",puStack_14);
  iVar3 = iStack_10;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,iVar3);
  *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) = *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) | 2;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,0x49f284);
  iVar3 = FUN_0049ed44();
  if (*(int *)(iVar3 + 0xc) ==
      *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 0xc)) {
    FUN_0049ed44();
    FUN_0048dd00();
  }
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_0049f229;
  puStack_1c = (undefined *)0x49f221;
  FUN_00403c80((int *)&puStack_14,4);
  return;
}



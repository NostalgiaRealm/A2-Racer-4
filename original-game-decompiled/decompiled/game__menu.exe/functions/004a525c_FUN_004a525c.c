
/* ==== FUN_004a525c @ 004a525c ==== 
 * signature: undefined FUN_004a525c(void)
 * body: 004a525c-004a5312;004a5338-004a5386
 */

void FUN_004a525c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined *puStack_13c;
  undefined4 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  undefined *puStack_12c;
  undefined4 uStack_128;
  undefined *puStack_124;
  undefined1 *puStack_120;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_120 = &stack0xfffffffc;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  puStack_124 = &UNK_004a5387;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puStack_12c = (undefined *)0x4a5291;
  piStack_8 = param_1;
  FUN_00402ee4(*param_1,abStack_110);
  puStack_12c = (undefined *)0x4a529f;
  FUN_00403e80(&iStack_10,abStack_110);
  puStack_12c = (undefined *)iStack_10;
  puStack_130 = &UNK_004a53a0;
  pcStack_134 = "GetPlayer";
  puStack_138 = (undefined4 *)0x4a52b9;
  FUN_00403f9c((int *)&puStack_c,3);
  puStack_138 = puStack_c;
  puStack_13c = (undefined *)0x4a52c2;
  uVar3 = FUN_0045f46c();
  puVar2 = puStack_138;
  puStack_138 = (undefined4 *)0x4a52ce;
  FUN_0045fb90(uVar3,puVar2,0);
  iVar5 = 1;
  iVar1 = *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14);
  if (iVar1 < 0) {
    puStack_138 = (undefined4 *)0x4a5340;
    iVar5 = FUN_004a53d8(piStack_8);
  }
  else {
    puStack_13c = &UNK_004a5313;
    uStack_140 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_140;
    puStack_138 = (undefined4 *)&stack0xfffffffc;
    FUN_0047f840(*(int **)PTR_DAT_004ab694,iVar1);
    *in_FS_OFFSET = uStack_140;
  }
  if (iVar5 == 1) {
    puStack_138 = (undefined4 *)0x4a534f;
    piVar4 = (int *)FUN_0048f760((int)&PTR_TWinControl_vmt_000_0049d4bc);
    puStack_138 = (undefined4 *)0x4a535a;
    piVar4 = (int *)FUN_0040312c(piVar4,(int)&PTR_TWinControl_vmt_000_0049d4bc);
    puStack_138 = (undefined4 *)0x4a5362;
    (**(code **)(*piVar4 + 0xf4))();
  }
  puStack_138 = (undefined4 *)0x4a5367;
  uVar3 = FUN_0045f46c();
  puStack_138 = (undefined4 *)0x4a536c;
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = pcStack_134;
  puStack_12c = &UNK_004a538e;
  puStack_130 = (undefined *)0x4a5386;
  FUN_00403c80(&iStack_10,2);
  return;
}



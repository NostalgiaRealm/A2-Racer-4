
/* ==== FUN_004a58a4 @ 004a58a4 ==== 
 * signature: undefined FUN_004a58a4(void)
 * body: 004a58a4-004a599e
 */

void FUN_004a58a4(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = &UNK_004a599f;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 200) + 0xc) != '\0') {
    iVar4 = FUN_0048c604(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xc0));
    bVar2 = FUN_00461c84(iVar4);
    if (!bVar2) {
      piVar5 = (int *)FUN_0048f760(0x4a0478);
      piVar5 = (int *)FUN_0040312c(piVar5,0x4a0478);
      (**(code **)(*piVar5 + 0xf4))();
      goto LAB_004a597a;
    }
  }
  piVar5 = (int *)FUN_0048f760((int)&PTR_TWinControl_vmt_000_0049ba10);
  piVar5 = (int *)FUN_0040312c(piVar5,(int)&PTR_TWinControl_vmt_000_0049ba10);
  (**(code **)(*piVar5 + 0xf4))();
LAB_004a597a:
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = &UNK_004a59c0;
  FUN_00403c80(&iStack_c,2);
  return;
}



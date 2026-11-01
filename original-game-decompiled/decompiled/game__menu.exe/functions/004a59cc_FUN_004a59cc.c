
/* ==== FUN_004a59cc @ 004a59cc ==== 
 * signature: undefined FUN_004a59cc(void)
 * body: 004a59cc-004a5ba7
 */

void FUN_004a59cc(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
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
  puStack_118 = &UNK_004a5ba8;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 200) + 0xc) == '\0') {
    if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 1) == 0) {
      piVar4 = (int *)FUN_0048f760((int)&PTR_TWinControl_vmt_000_0049999c);
      piVar4 = (int *)FUN_0040312c(piVar4,(int)&PTR_TWinControl_vmt_000_0049999c);
      (**(code **)(*piVar4 + 0xf4))();
    }
    else {
      cVar2 = FUN_0048a6ac(*(int *)(*(int *)PTR_DAT_004ab694 + 200));
      if (cVar2 == '\0') {
        piVar4 = (int *)FUN_0048f760(0x4a0f0c);
        piVar4 = (int *)FUN_0040312c(piVar4,0x4a0f0c);
        (**(code **)(*piVar4 + 0xf4))();
      }
      else {
        piVar4 = (int *)FUN_0048f760((int)&PTR_TWinControl_vmt_000_0049999c);
        piVar4 = (int *)FUN_0040312c(piVar4,(int)&PTR_TWinControl_vmt_000_0049999c);
        (**(code **)(*piVar4 + 0xf4))();
      }
    }
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 1) == 0) {
    piVar4 = (int *)FUN_0048f760(0x4a0478);
    piVar4 = (int *)FUN_0040312c(piVar4,0x4a0478);
    (**(code **)(*piVar4 + 0xf4))();
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 2) == 0) {
    piVar4 = (int *)FUN_0048f760(0x4a0f0c);
    piVar4 = (int *)FUN_0040312c(piVar4,0x4a0f0c);
    (**(code **)(*piVar4 + 0xf4))();
  }
  else if ((*(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) & 4) == 0) {
    piVar4 = (int *)FUN_0048f760(0x4a0c34);
    piVar4 = (int *)FUN_0040312c(piVar4,0x4a0c34);
    (**(code **)(*piVar4 + 0xf4))();
  }
  else {
    piVar4 = (int *)FUN_0048f760(0x4a3cf8);
    piVar4 = (int *)FUN_0040312c(piVar4,0x4a3cf8);
    (**(code **)(*piVar4 + 0xf4))();
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "FlowTour";
  FUN_00403c80(&iStack_c,2);
  return;
}



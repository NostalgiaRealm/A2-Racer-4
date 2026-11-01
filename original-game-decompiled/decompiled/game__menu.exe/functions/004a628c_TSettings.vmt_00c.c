
/* ==== TSettings.vmt_00c @ 004a628c ==== 
 * signature: undefined TSettings.vmt_00c(void)
 * body: 004a628c-004a63c4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSettings_vmt_00c(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_11c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TDataObject_vmt_00c(param_1,param_2);
  iVar3 = FUN_0040312c(param_2,(int)&PTR_TSettings_vmt_000_004a6010);
  param_1[0xb] = *(int *)(iVar3 + 0x2c);
  param_1[4] = *(int *)(iVar3 + 0x10);
  param_1[5] = *(int *)(iVar3 + 0x14);
  param_1[6] = *(int *)(iVar3 + 0x18);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(iVar3 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)(iVar3 + 0x1d);
  *(undefined1 *)((int)param_1 + 0x1e) = *(undefined1 *)(iVar3 + 0x1e);
  *(undefined1 *)((int)param_1 + 0x1f) = *(undefined1 *)(iVar3 + 0x1f);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar3 + 8);
  *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)(iVar3 + 0x35);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(iVar3 + 0x34);
  *(undefined1 *)((int)param_1 + 0x3d) = *(undefined1 *)(iVar3 + 0x3d);
  *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)(iVar3 + 0x36);
  param_1[0xc] = *(int *)(iVar3 + 0x30);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(iVar3 + 0x3c);
  param_1[0xe] = *(int *)(iVar3 + 0x38);
  param_1[9] = *(int *)(iVar3 + 0x24);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(iVar3 + 0x28);
  param_1[8] = *(int *)(iVar3 + 0x20);
  FUN_0040312c(param_2,(int)&PTR_TSettings_vmt_000_004a6010);
  (**(code **)(*(int *)param_1[3] + 0xc))((int *)param_1[3],*(undefined4 *)(iVar3 + 0xc));
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "Assign";
  FUN_00403c80(&iStack_c,2);
  return;
}




/* ==== TfrmDisplaySettings.cboDriverChange @ 004882f4 ==== 
 * signature: undefined TfrmDisplaySettings.cboDriverChange(void)
 * body: 004882f4-00488483
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDisplaySettings_cboDriverChange(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  puStack_118 = &UNK_00488484;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  piStack_8 = param_1;
  FUN_00402ee4(*param_1,abStack_110);
  FUN_00403e80(&iStack_10,abStack_110);
  FUN_00403f9c((int *)&puStack_c,3);
  puVar4 = puStack_c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar4,0);
  (**(code **)(**(int **)(piStack_8[0xb6] + 0x1f0) + 0x40))();
  FUN_00427924((int *)piStack_8[0xb6],0xffffffff);
  iVar3 = FUN_00427908((int *)piStack_8[0xb5]);
  if (-1 < iVar3) {
    FUN_004a70c0(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18),1);
    (**(code **)(*(int *)piStack_8[0xcd] + 0xb8))((int *)piStack_8[0xcd],0);
    iVar3 = FUN_00427908((int *)piStack_8[0xb5]);
    if (iVar3 < 2) {
      bVar1 = FUN_00487514(*(uint *)(piStack_8[0xd8] + 0x2c));
      if (bVar1) {
        FUN_00488248(3);
        FUN_004881d8(3,extraout_EDX_00,puVar5,(int)&stack0xfffffffc);
      }
      else {
        FUN_00488248(1);
        FUN_004881d8(1,extraout_EDX_01,puVar6,(int)&stack0xfffffffc);
      }
      (**(code **)(*(int *)piStack_8[0xb6] + 0x5c))((int *)piStack_8[0xb6],0);
    }
    else {
      FUN_0048813c();
      (**(code **)(*(int *)piStack_8[0xb6] + 0x5c))((int *)piStack_8[0xb6],1);
      FUN_004881d8(*(int *)(piStack_8[0xd8] + 0x2c),extraout_EDX,extraout_ECX,(int)&stack0xfffffffc)
      ;
    }
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "cboDriverChange";
  FUN_00403c80(&iStack_10,2);
  return;
}



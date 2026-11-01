
/* ==== FUN_004884b8 @ 004884b8 ==== 
 * signature: undefined FUN_004884b8(void)
 * body: 004884b8-0048878d
 */

void FUN_004884b8(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  WPARAM WVar5;
  WPARAM extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 *puVar7;
  uint **ppuVar8;
  char *pcVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uStack_160;
  undefined *puStack_15c;
  undefined1 *puStack_158;
  undefined4 uStack_150;
  ushort auStack_148 [4];
  uint uStack_140;
  undefined1 uStack_13c;
  uint uStack_138;
  undefined1 uStack_134;
  uint *puStack_130;
  byte abStack_12c [32];
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_158 = &stack0xfffffffc;
  puStack_130 = (uint *)0x0;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_15c = &UNK_0048878e;
  uStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_160;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  puVar10 = &UNK_004887a4;
  pcVar9 = "CopySettingsToControls";
  iVar11 = iStack_c;
  FUN_00403f9c((int *)&puStack_8,3);
  puVar7 = puStack_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar7,0);
  iVar4 = *(int *)param_1[0xd2];
  (**(code **)(iVar4 + 0xb8))
            ((int *)param_1[0xd2],*(undefined1 *)(param_1[0xd8] + 0x36),iVar4,pcVar9,puVar10,iVar11)
  ;
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xd2] + 0x5c))((int *)param_1[0xd2],uVar2);
  FUN_00488bd8(param_1);
  (**(code **)(*(int *)param_1[0xcb] + 0xb8))
            ((int *)param_1[0xcb],*(undefined1 *)(param_1[0xd8] + 0x34));
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xcb] + 0x5c))((int *)param_1[0xcb],uVar2);
  (**(code **)(*(int *)param_1[0xcc] + 0xb8))
            ((int *)param_1[0xcc],*(undefined1 *)(param_1[0xd8] + 0x35));
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xcc] + 0x5c))((int *)param_1[0xcc],uVar2);
  (**(code **)(*(int *)param_1[0xcd] + 0xb8))
            ((int *)param_1[0xcd],*(int *)(param_1[0xd8] + 0x38) == 0);
  (**(code **)(*(int *)param_1[0xce] + 0xb8))
            ((int *)param_1[0xce],*(undefined1 *)(param_1[0xd8] + 0x3d));
  (**(code **)(*(int *)param_1[0xc9] + 0xb8))
            ((int *)param_1[0xc9],*(int *)(param_1[0xd8] + 0x30) == 0);
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xc9] + 0x5c))((int *)param_1[0xc9],uVar2);
  (**(code **)(*(int *)param_1[0xca] + 0xb8))
            ((int *)param_1[0xca],*(int *)(param_1[0xd8] + 0x30) == 1);
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xca] + 0x5c))((int *)param_1[0xca],uVar2);
  uVar3 = (**(code **)(**(int **)(param_1[0xb5] + 0x1f0) + 0x14))();
  uVar1 = uVar3 - 1;
  if (SBORROW4(uVar3,1)) {
    uVar3 = thunk_FUN_00402808(uVar3);
    uVar1 = extraout_EDX;
  }
  if (0xff < uVar1) {
    thunk_FUN_00402808(uVar3);
    uVar1 = extraout_EDX_00;
  }
  FUN_00402d70(0x2000,uVar1,abStack_12c);
  uVar1 = *(uint *)(param_1[0xd8] + 0x20);
  bVar6 = uVar1 < 0xff;
  if (uVar1 < 0x100) {
    bVar6 = (abStack_12c[(int)uVar1 >> 3] >> (uVar1 & 7) & 1) != 0;
  }
  if (bVar6) {
    iVar4 = *(int *)(param_1[0xd8] + 0x20);
    WVar5 = iVar4 + 1;
    if (SCARRY4(iVar4,1)) {
      thunk_FUN_00402808(param_1[0xd8]);
      WVar5 = extraout_EDX_01;
    }
    FUN_00427924((int *)param_1[0xb5],WVar5);
  }
  TfrmDisplaySettings_cboDriverChange(param_1,param_1[0xb5]);
  iVar4 = FUN_00427908((int *)param_1[0xb5]);
  if (1 < iVar4) {
    ppuVar8 = &puStack_130;
    FUN_00487478(*(uint *)(param_1[0xd8] + 0x2c),(undefined4 *)auStack_148);
    uStack_140 = (uint)auStack_148[0];
    uStack_13c = 0;
    FUN_00487478(*(uint *)(param_1[0xd8] + 0x2c),&uStack_150);
    uStack_138 = (uint)uStack_150._2_2_;
    uStack_134 = 0;
    FUN_00409254(&UNK_004887d4,&uStack_140,1,(int *)ppuVar8);
    TGroupBox_set_Caption(param_1[0xb6],puStack_130);
  }
  uVar2 = FUN_00487b9c((int)param_1);
  (**(code **)(*(int *)param_1[0xb6] + 0x5c))((int *)param_1[0xb6],uVar2);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = pcVar9;
  FUN_00403c5c((int *)&puStack_130);
  FUN_00403c80(&iStack_c,2);
  return;
}



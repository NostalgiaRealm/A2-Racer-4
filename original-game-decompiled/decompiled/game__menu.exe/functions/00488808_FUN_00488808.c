
/* ==== FUN_00488808 @ 00488808 ==== 
 * signature: undefined FUN_00488808(void)
 * body: 00488808-00488af9
 */

void FUN_00488808(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uStack_160;
  undefined *puStack_15c;
  undefined1 *puStack_158;
  undefined4 uStack_148;
  byte bStack_144;
  undefined4 uStack_140;
  ushort auStack_138 [4];
  uint uStack_130;
  undefined1 uStack_12c;
  uint uStack_128;
  undefined1 uStack_124;
  uint uStack_120;
  undefined1 uStack_11c;
  uint uStack_118;
  undefined1 uStack_114;
  int iStack_110;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_158 = &stack0xfffffffc;
  iStack_110 = 0;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_15c = &UNK_00488afa;
  uStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_160;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar6 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar6,0);
  uVar1 = (**(code **)(*(int *)param_1[0xcb] + 0xb4))();
  *(undefined1 *)(param_1[0xd8] + 0x34) = uVar1;
  uVar1 = (**(code **)(*(int *)param_1[0xcc] + 0xb4))();
  *(undefined1 *)(param_1[0xd8] + 0x35) = uVar1;
  cVar2 = (**(code **)(*(int *)param_1[0xcd] + 0xb4))();
  if (cVar2 == '\0') {
    FUN_004a70c0(param_1[0xd8],1);
  }
  else {
    FUN_004a70c0(param_1[0xd8],0);
  }
  uVar1 = (**(code **)(*(int *)param_1[0xce] + 0xb4))();
  *(undefined1 *)(param_1[0xd8] + 0x3d) = uVar1;
  uVar1 = (**(code **)(*(int *)param_1[0xd2] + 0xb4))();
  *(undefined1 *)(param_1[0xd8] + 0x36) = uVar1;
  cVar2 = (**(code **)(*(int *)param_1[0xd7] + 0xb4))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)param_1[0xd6] + 0xb4))();
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1[0xd8] + 0x3c) = 0;
    }
    else {
      *(undefined1 *)(param_1[0xd8] + 0x3c) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1[0xd8] + 0x3c) = 2;
  }
  cVar2 = (**(code **)(*(int *)param_1[0xc9] + 0xb4))();
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1[0xd8] + 0x30) = 1;
  }
  else {
    *(undefined4 *)(param_1[0xd8] + 0x30) = 0;
  }
  iVar4 = FUN_00427908((int *)param_1[0xb5]);
  if (-1 < iVar4) {
    iVar4 = FUN_00427908((int *)param_1[0xb5]);
    uVar3 = iVar4 - 1;
    if (SBORROW4(iVar4,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    iVar4 = param_1[0xd8];
    *(uint *)(iVar4 + 0x20) = uVar3;
    iVar4 = *(int *)(iVar4 + 0x24);
    if (iVar4 != 0) {
      FUN_00402794(iVar4);
    }
    piVar7 = (int *)param_1[0xb5];
    uVar5 = FUN_00427908(piVar7);
    piVar7 = (int *)piVar7[0x7c];
    (**(code **)(*piVar7 + 0x18))(piVar7,uVar5);
    uVar5 = FUN_004887dc();
    iVar4 = param_1[0xd8];
    *(undefined4 *)(iVar4 + 0x24) = uVar5;
    *(undefined1 *)(iVar4 + 0x28) = 1;
  }
  iVar4 = FUN_00427908((int *)param_1[0xb6]);
  if (-1 < iVar4) {
    piVar7 = (int *)param_1[0xb6];
    uVar5 = FUN_00427908(piVar7);
    piVar7 = (int *)piVar7[0x7c];
    uVar5 = (**(code **)(*piVar7 + 0x18))(piVar7,uVar5);
    *(undefined4 *)(param_1[0xd8] + 0x2c) = uVar5;
    piVar7 = &iStack_110;
    uStack_130 = *(uint *)(param_1[0xd8] + 0x2c);
    uStack_12c = 0;
    FUN_00487478(uStack_130,(undefined4 *)auStack_138);
    uStack_128 = (uint)auStack_138[0];
    uStack_124 = 0;
    FUN_00487478(*(uint *)(param_1[0xd8] + 0x2c),&uStack_140);
    uStack_120 = (uint)uStack_140._2_2_;
    uStack_11c = 0;
    FUN_00487478(*(uint *)(param_1[0xd8] + 0x2c),&uStack_148);
    uStack_118 = (uint)bStack_144;
    uStack_114 = 0;
    FUN_00409254((byte *)"Resolution set to %d (%dx%dx%d)",&uStack_130,3,piVar7);
    iVar4 = iStack_110;
    uVar3 = FUN_0045f46c();
    FUN_0045fe88(uVar3,iVar4);
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "CopyControlsToSettings";
  FUN_00403c5c(&iStack_110);
  FUN_00403c80(&iStack_c,2);
  return;
}



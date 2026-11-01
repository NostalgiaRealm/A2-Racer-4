
/* ==== FUN_0048e148 @ 0048e148 ==== 
 * signature: undefined __register FUN_0048e148(int * param_1, undefined4 * param_2)
 * body: 0048e148-0048e393;0048e3b2-0048e3cf
 */

void FUN_0048e148(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 uVar3;
  undefined4 extraout_ECX_05;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_170;
  code *pcStack_16c;
  undefined1 *puStack_168;
  undefined4 uStack_164;
  code *pcStack_160;
  undefined4 *puStack_15c;
  char *pcStack_158;
  undefined *puStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  code *pcStack_148;
  undefined1 *puStack_144;
  undefined4 *local_134;
  undefined4 *local_130;
  byte local_12c [256];
  int local_2c;
  undefined4 *local_28;
  byte local_21;
  int *local_20;
  byte local_19;
  int local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_134 = (undefined4 *)0x0;
  local_130 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_2c = 0;
  local_18 = 0;
  puStack_144 = (undefined1 *)0x48e178;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_148 = thunk_FUN_004036bc;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  iStack_150 = 0x48e193;
  puStack_144 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_12c);
  iStack_150 = 0x48e1a1;
  FUN_00403e80(&local_2c,local_12c);
  iStack_150 = local_2c;
  puStack_154 = &DAT_0048e434;
  pcStack_158 = "LoadFromIniFile";
  puStack_15c = (undefined4 *)0x48e1bb;
  FUN_00403f9c((int *)&local_28,3);
  puStack_15c = local_28;
  pcStack_160 = (code *)0x48e1c4;
  uVar2 = FUN_0045f46c();
  puVar1 = puStack_15c;
  puStack_15c = (undefined4 *)0x48e1d0;
  FUN_0045fb90(uVar2,puVar1,0);
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  pcStack_160 = thunk_FUN_004036bc;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  puStack_168 = (undefined1 *)0x48e1f7;
  puStack_15c = (undefined4 *)&stack0xfffffffc;
  local_c = FUN_00457d38((int *)&PTR_TSafeIniFile_vmt_000_0046004c,'\x01',local_8);
  puStack_168 = (undefined1 *)0x48e206;
  local_10 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
  pcStack_16c = thunk_FUN_00403408;
  uStack_170 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_170;
  puStack_168 = &stack0xfffffffc;
  FUN_0048e784((int *)param_1[0xb],local_c);
  (**(code **)*local_c)(local_c,"GENERAL","DownLoadURL",&local_130);
  FUN_00403cb0(param_1 + 0x10,local_130);
  FUN_0045e860(param_1[0xd]);
  uVar2 = (**(code **)(*local_c + 8))(local_c,"GENERAL","trackcount",0);
  uVar3 = extraout_ECX_00;
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
    uVar3 = extraout_ECX_01;
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar4 = 0;
    do {
      local_14 = TDataObject_vmt_004((int *)&PTR_TTrack_vmt_000_0046196c,'\x01',uVar3);
      FUN_00461c8c(local_14,iVar4);
      FUN_0045e7e4(param_1[0xd],local_14);
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 - 1;
      uVar3 = extraout_ECX_02;
    } while (uVar2 != 0);
  }
  FUN_0045e860(param_1[2]);
  uVar2 = (**(code **)(*local_c + 8))(local_c,"GENERAL","charcount");
  uVar3 = extraout_ECX_03;
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
    uVar3 = extraout_ECX_04;
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar4 = 0;
    do {
      local_20 = TDataObject_vmt_004((int *)FUN_00460678,'\x01',uVar3);
      FUN_004606d0(local_20,local_c,iVar4);
      FUN_0045e7e4(param_1[2],local_20);
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 - 1;
      uVar3 = extraout_ECX_05;
    } while (uVar2 != 0);
  }
  (**(code **)(*(int *)param_1[0xe] + 0x1c))((int *)param_1[0xe],local_c);
  (**(code **)(*(int *)param_1[0xf] + 0x1c))((int *)param_1[0xf],local_c);
  local_19 = 0;
  do {
    uVar2 = (uint)local_19;
    FUN_004085ac(uVar2,(int *)&local_134);
    FUN_00403f28(&local_18,(undefined4 *)"difficulty",local_134);
    iVar4 = (**(code **)(*local_c + 8))(local_c,"CheckPointTime",local_18,0x6e);
    param_1[uVar2 + 3] = iVar4;
    local_19 = local_19 + 1;
  } while (local_19 != 3);
  local_21 = 0;
  local_19 = 3;
  do {
    FUN_00462154(param_1[local_21 + 6],local_c);
    local_21 = local_21 + 1;
  } while (local_21 != 5);
  FUN_004a6de4(param_1[0xc],local_c);
  *in_FS_OFFSET = 0;
  *in_FS_OFFSET = "http//:www.davilex.nl";
  pcStack_16c = FUN_0048e3d7;
  uStack_170 = 0x48e3c7;
  FUN_00402f9c(local_c);
  uStack_170 = 0x48e3cf;
  FUN_00402f9c(local_10);
  return;
}



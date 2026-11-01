
/* ==== FUN_00414754 @ 00414754 ==== 
 * signature: undefined __register FUN_00414754(int * param_1, int * param_2, undefined4 * param_3)
 * body: 00414754-004147b0;004147f5-004149df
 */

void FUN_00414754(int *param_1,int *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 uStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  int local_2c;
  undefined4 *local_28;
  LPCSTR local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  pcStack_34 = (code *)&stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  local_2c = 0;
  local_28 = (undefined4 *)0x0;
  local_24 = (LPCSTR)0x0;
  local_20 = (byte *)0x0;
  local_1c = 0;
  pcStack_38 = thunk_FUN_004036bc;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  pcVar2 = (code *)&stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3[2] == 0) {
    FUN_0041329c((undefined4 *)PTR_PTR_004ab8f8);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
    pcVar2 = pcStack_34;
  }
  pcStack_34 = pcVar2;
  pbVar1 = *(byte **)*local_10;
  switch((uint)*pbVar1) {
  case 1:
    cVar4 = FUN_00413704((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\a') {
      FUN_00413fe4((int)local_8,&local_1c,extraout_ECX_00);
      FUN_004144d4(local_c,local_10,local_1c);
    }
    else {
      iVar6 = FUN_004140e4((int)local_8,extraout_EDX_00,extraout_ECX_00);
      FUN_0040dff4(local_c,local_10,iVar6);
    }
    break;
  case 2:
    bVar3 = FUN_004137bc((int)local_8,param_2,(uint)param_3);
    FUN_0040dff4(local_c,local_10,(uint)bVar3);
    break;
  case 3:
    FUN_00413fe4((int)local_8,(int *)&local_20,(uint)param_3);
    iVar6 = FUN_004132cc((char *)pbVar1,local_20);
    FUN_0040dff4(local_c,local_10,iVar6);
    break;
  case 4:
    FUN_00413ed8((int)local_8,param_2,(uint)param_3);
    FUN_0040e204(local_c,local_10);
    break;
  case 5:
  case 10:
  case 0xb:
    FUN_00414e1c((int)local_8,(int *)&local_24,(uint)param_3);
    FUN_0040e1d8(local_c,local_10,local_24);
    break;
  case 6:
    iVar6 = FUN_00414d00((int)local_8,(int)pbVar1);
    FUN_0040dff4(local_c,local_10,iVar6);
    break;
  case 7:
    cVar4 = FUN_00413704((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\r') {
      FUN_00414ec4((int)local_8,extraout_EDX_01,extraout_ECX_01);
      FUN_0040dff4(local_c,local_10,0);
    }
    else if (cVar4 == '\x0e') {
      FUN_00414ec4((int)local_8,extraout_EDX_01,extraout_ECX_01);
      piVar5 = (int *)FUN_0040df80(local_c,local_10);
      FUN_00413840((int)local_8,piVar5);
    }
    else {
      FUN_00413fe4((int)local_8,(int *)&local_28,extraout_ECX_01);
      FUN_0041451c((int)local_c,(int)local_10,local_28,(int)puVar7);
    }
    break;
  case 8:
    cVar4 = FUN_00413704((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\r') {
      FUN_00414ec4((int)local_8,extraout_EDX_02,extraout_ECX_02);
      FUN_0040e2f0(local_c,(int)local_10,(undefined4 *)&DAT_004aa320);
    }
    else {
      FUN_00413fe4((int)local_8,&local_2c,extraout_ECX_02);
      local_18 = (**(code **)(*local_8 + 0x18))(local_8,local_8[6],local_2c);
      local_14 = local_8[6];
      if (local_18 != 0) {
        FUN_0040e2f0(local_c,(int)local_10,&local_18);
      }
    }
    break;
  case 0xc:
    FUN_0041455c((uint)*pbVar1,param_2,param_3,(int)&stack0xfffffffc);
    break;
  case 0x10:
    iVar6 = FUN_00414150((int)local_8,param_2,(uint)param_3);
    FUN_0040e328(local_c,(int)local_10,extraout_ECX_03,iVar6,extraout_EDX_03);
  }
  *in_FS_OFFSET = uStack_3c;
  pcStack_34 = FUN_004149e7;
  pcStack_38 = (code *)0x4149df;
  FUN_00403c80(&local_2c,5);
  return;
}



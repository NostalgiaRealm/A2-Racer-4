
/* ==== FUN_00412ba0 @ 00412ba0 ==== 
 * signature: undefined __register FUN_00412ba0(int * param_1, int * param_2, undefined4 * param_3)
 * body: 00412ba0-00412bfc;00412c41-00412e2b
 */

void FUN_00412ba0(int *param_1,int *param_2,undefined4 *param_3)

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
  pcStack_38 = thunk_FUN_00403434;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  pcVar2 = (code *)&stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3[2] == 0) {
    FUN_004116e8((undefined4 *)PTR_PTR_00446cb0);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
    pcVar2 = pcStack_34;
  }
  pcStack_34 = pcVar2;
  pbVar1 = *(byte **)*local_10;
  switch((uint)*pbVar1) {
  case 1:
    cVar4 = FUN_00411b50((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\a') {
      FUN_00412430((int)local_8,&local_1c,extraout_ECX_00);
      FUN_00412920(local_c,local_10,local_1c);
    }
    else {
      iVar6 = FUN_00412530((int)local_8,extraout_EDX_00,extraout_ECX_00);
      FUN_0040cf54(local_c,local_10,iVar6);
    }
    break;
  case 2:
    bVar3 = FUN_00411c08((int)local_8,param_2,(uint)param_3);
    FUN_0040cf54(local_c,local_10,(uint)bVar3);
    break;
  case 3:
    FUN_00412430((int)local_8,(int *)&local_20,(uint)param_3);
    iVar6 = FUN_00411718((char *)pbVar1,local_20);
    FUN_0040cf54(local_c,local_10,iVar6);
    break;
  case 4:
    FUN_00412324((int)local_8,param_2,(uint)param_3);
    FUN_0040d164(local_c,local_10);
    break;
  case 5:
  case 10:
  case 0xb:
    FUN_00413268((int)local_8,(int *)&local_24,(uint)param_3);
    FUN_0040d138(local_c,local_10,local_24);
    break;
  case 6:
    iVar6 = FUN_0041314c((int)local_8,(int)pbVar1);
    FUN_0040cf54(local_c,local_10,iVar6);
    break;
  case 7:
    cVar4 = FUN_00411b50((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\r') {
      FUN_00413310((int)local_8,extraout_EDX_01,extraout_ECX_01);
      FUN_0040cf54(local_c,local_10,0);
    }
    else if (cVar4 == '\x0e') {
      FUN_00413310((int)local_8,extraout_EDX_01,extraout_ECX_01);
      piVar5 = (int *)FUN_0040cee0(local_c,local_10);
      FUN_00411c8c((int)local_8,piVar5);
    }
    else {
      FUN_00412430((int)local_8,(int *)&local_28,extraout_ECX_01);
      FUN_00412968((int)local_c,(int)local_10,local_28,(int)puVar7);
    }
    break;
  case 8:
    cVar4 = FUN_00411b50((int)local_8,param_2,(uint)param_3);
    if (cVar4 == '\r') {
      FUN_00413310((int)local_8,extraout_EDX_02,extraout_ECX_02);
      FUN_0040d250(local_c,(int)local_10,(undefined4 *)&DAT_004462fc);
    }
    else {
      FUN_00412430((int)local_8,&local_2c,extraout_ECX_02);
      local_18 = (**(code **)(*local_8 + 0x18))(local_8,local_8[6],local_2c);
      local_14 = local_8[6];
      if (local_18 != 0) {
        FUN_0040d250(local_c,(int)local_10,&local_18);
      }
    }
    break;
  case 0xc:
    FUN_004129a8((uint)*pbVar1,param_2,param_3,(int)&stack0xfffffffc);
    break;
  case 0x10:
    iVar6 = FUN_0041259c((int)local_8,param_2,(uint)param_3);
    FUN_0040d288(local_c,(int)local_10,extraout_ECX_03,iVar6,extraout_EDX_03);
  }
  *in_FS_OFFSET = uStack_3c;
  pcStack_34 = FUN_00412e33;
  pcStack_38 = (code *)0x412e2b;
  FUN_004039dc(&local_2c,5);
  return;
}



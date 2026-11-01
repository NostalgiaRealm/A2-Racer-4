
/* ==== FUN_004bb5a0 @ 004bb5a0 ==== 
 * signature: undefined4 * __fastcall FUN_004bb5a0(undefined4 * param_1)
 * body: 004bb5a0-004bb741
 */

undefined4 * __fastcall FUN_004bb5a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float local_70 [25];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f6a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c0fc0(param_1);
  local_4 = 0;
  local_70[6] = 2.0;
  local_70[7] = 30.0;
  local_70[8] = 30.0;
  local_70[3] = 0.0;
  local_70[4] = 0.0;
  local_70[5] = 0.0;
  local_70[0] = 0.0;
  local_70[1] = 1.0;
  local_70[2] = 0.0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  puVar1 = (undefined4 *)FUN_004b3a60(local_70 + 9,local_70 + 6,local_70 + 3,local_70,0.0);
  puVar3 = param_1 + 0x77;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_004b39d0(local_70 + 9,10.0,12500.0,0.62831855);
  puVar3 = param_1 + 0x67;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = &DAT_0073b538;
  puVar3 = param_1 + 0x87;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0xa1] = 3;
  *(undefined4 *)((int)param_1 + 0x2cd) = 3;
  param_1[0xa6] = 1;
  *(undefined4 *)((int)param_1 + 0x2a5) = 1;
  *(undefined4 *)((int)param_1 + 0x2a9) = 1;
  *(undefined4 *)((int)param_1 + 0x2ad) = 1;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0xffffff;
  param_1[0xa3] = 0x40500000;
  param_1[0xa4] = 0x42480000;
  param_1[0xa2] = 0x3f4ccccd;
  param_1[0xa5] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2c1) = 0;
  *(undefined4 *)((int)param_1 + 0x2bd) = 0;
  *(undefined4 *)((int)param_1 + 0x2c9) = 2;
  *(undefined4 *)((int)param_1 + 0x2b1) = 0;
  *(undefined4 *)((int)param_1 + 0x2b9) = 2;
  *(undefined4 *)((int)param_1 + 0x2b5) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2d1) = 0;
  *(undefined4 *)((int)param_1 + 0x2a1) = 0;
  param_1[0xa7] = 0x40;
  ExceptionList = local_c;
  return param_1;
}



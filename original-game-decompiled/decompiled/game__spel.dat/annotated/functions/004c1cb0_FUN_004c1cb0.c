
/* ==== FUN_004c1cb0 @ 004c1cb0 ==== 
 * signature: int * __fastcall FUN_004c1cb0(int * param_1)
 * body: 004c1cb0-004c1e0e
 */

int * __fastcall FUN_004c1cb0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f7bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  _strncpy((char *)(param_1 + 5),s_m_txf_drv_info_005b3030,0x19);
  _strncpy((char *)((int)param_1 + 0x2d),s_c_txf_drv_info_005b3020,0x19);
  if (param_1[3] != 0) {
    if (param_1[3] == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      iVar4 = *param_1;
      if (iVar4 != 0) {
        FUN_005586c5(iVar4,0xb0,*(int *)(iVar4 + -4),FUN_004d1400);
        FUN_0054b339((LPVOID)(iVar4 + -4));
      }
    }
    if (param_1[3] != 0) {
      FUN_0054b339((LPVOID)param_1[4]);
      param_1[3] = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  puVar1 = operator_new(0x44c4);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 100;
    FUN_00558643(puVar2,0xb0,100,FUN_004c1c60);
  }
  local_4 = 0xffffffff;
  *param_1 = (int)puVar2;
  param_1[1] = 100;
  param_1[2] = 0;
  pvVar3 = operator_new(100);
  param_1[4] = (int)pvVar3;
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  param_1[3] = 1;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    *(undefined1 *)(iVar4 + param_1[4]) = 0;
    iVar4 = iVar5;
  } while (iVar5 < 100);
  *(undefined4 *)((int)param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  ExceptionList = local_c;
  return param_1;
}



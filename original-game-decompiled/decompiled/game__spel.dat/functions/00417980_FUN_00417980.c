
/* ==== FUN_00417980 @ 00417980 ==== 
 * signature: undefined4 * __stdcall FUN_00417980(undefined4 * param_1, int param_2, undefined4 * param_3, int param_4)
 * body: 00417980-00417a8b
 */

undefined4 * FUN_00417980(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined1 *this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_34 [6];
  undefined **local_1c;
  LPVOID local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004166e0((undefined1 *)local_34);
  local_4 = 0;
  local_14 = 0;
  FUN_0040dea0((int)local_34,param_2,param_3);
  FUN_0041db90(local_34,param_2,param_3,param_4);
  puVar2 = local_34;
  puVar3 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[6] = &PTR_FUN_00576460;
  this = operator_new(0x10);
  if (this == (undefined1 *)0x0) {
    this = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(this + 4) = 0;
    *this = (undefined1)param_2;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  param_1[7] = this;
  FUN_00417ba0(this,(int)local_18);
  param_1[8] = local_14;
  param_1[9] = local_10;
  local_1c = &PTR_FUN_00576460;
  if (local_18 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)local_18 + 4));
    *(undefined4 *)((int)local_18 + 4) = 0;
    *(undefined4 *)((int)local_18 + 0xc) = 0;
    *(undefined4 *)((int)local_18 + 8) = 0;
    FUN_0054b339(local_18);
  }
  ExceptionList = local_c;
  return param_1;
}



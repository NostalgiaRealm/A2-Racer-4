
/* ==== FUN_004c33f0 @ 004c33f0 ==== 
 * signature: undefined __fastcall FUN_004c33f0(int * param_1)
 * body: 004c33f0-004c350a
 */

void __fastcall FUN_004c33f0(int *param_1)

{
  int iVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056f838;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_1[3] == 1) {
    ExceptionList = &local_c;
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_005586c5(iVar1,0x1d8,*(int *)(iVar1 + -4),FUN_004c2de0);
      FUN_0054b339((LPVOID)(iVar1 + -4));
    }
  }
  if (param_1[3] != 0) {
    FUN_0054b339((LPVOID)param_1[4]);
    param_1[3] = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  local_4 = 0xffffffff;
  if (param_1[3] == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_005586c5(iVar1,0x1d8,*(int *)(iVar1 + -4),FUN_004c2de0);
      FUN_0054b339((LPVOID)(iVar1 + -4));
    }
  }
  if (param_1[3] != 0) {
    FUN_0054b339((LPVOID)param_1[4]);
    param_1[3] = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  ExceptionList = local_c;
  return;
}



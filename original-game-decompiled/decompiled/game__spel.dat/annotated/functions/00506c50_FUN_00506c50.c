
/* ==== FUN_00506c50 @ 00506c50 ==== 
 * signature: undefined __fastcall FUN_00506c50(int * param_1)
 * body: 00506c50-00506cfd
 */

void __fastcall FUN_00506c50(int *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005737e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_00578778;
  local_4 = 2;
  if ((LPVOID)param_1[0x1a] != (LPVOID)0x0) {
    FUN_0054b339((LPVOID)param_1[0x1a]);
    param_1[0x1a] = 0;
  }
  if ((LPVOID)param_1[0x3d] != (LPVOID)0x0) {
    FUN_0054b339((LPVOID)param_1[0x3d]);
    param_1[0x3d] = 0;
  }
  if ((LPVOID)param_1[0x5f] != (LPVOID)0x0) {
    FUN_0054b339((LPVOID)param_1[0x5f]);
    param_1[0x5f] = 0;
  }
  FUN_0051ed40();
  FUN_0051ed40();
  local_4 = 0xffffffff;
  FUN_0050fd40(param_1);
  ExceptionList = local_c;
  return;
}




/* ==== FUN_00509060 @ 00509060 ==== 
 * signature: undefined __cdecl FUN_00509060(int param_1, double * param_2, double * param_3, double * param_4)
 * body: 00509060-00509112
 */

void __cdecl FUN_00509060(int param_1,double *param_2,double *param_3,double *param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  void **local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005737f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0;
  local_18 = 0x400;
  local_14 = 0;
  local_10 = (void **)FUN_004f5a90(0x1000);
  local_4 = 0;
  FUN_00508e90(param_1,&local_18);
  iVar1 = local_14;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_00508eb0(local_10[iVar1],param_2,param_3,param_4);
  }
  if ((local_10 != &local_c) && (local_10 != (void **)0x0)) {
    FUN_00559d4e(local_10);
  }
  ExceptionList = local_c;
  return;
}



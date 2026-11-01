
/* ==== FUN_0050adb0 @ 0050adb0 ==== 
 * signature: int __fastcall FUN_0050adb0(int param_1)
 * body: 0050adb0-0050ae7d
 */

int __fastcall FUN_0050adb0(int param_1)

{
  double dVar1;
  double dVar2;
  undefined4 *this;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_005738e9;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0050ac60(param_1 + 0x288);
  local_c = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  this = operator_new(0x10);
  local_c = CONCAT31(local_c._1_3_,1);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_005010f0(this,0x100);
    *this = &PTR_FUN_00578894;
  }
  dVar1 = 1.0;
  dVar2 = 1.0;
  pdVar3 = (double *)(param_1 + 0x140);
  *(undefined4 **)(param_1 + 0x2b4) = this;
  iVar5 = 0x29;
  pdVar4 = pdVar3;
  do {
    *pdVar3 = dVar1;
    pdVar3 = pdVar3 + 1;
    iVar5 = iVar5 + -1;
    *pdVar4 = dVar2;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 * 0.5;
    pdVar4 = pdVar4 + -1;
  } while (iVar5 != 0);
  ExceptionList = local_14;
  return param_1;
}



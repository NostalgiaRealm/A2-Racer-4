
/* ==== FUN_0050fd40 @ 0050fd40 ==== 
 * signature: undefined __fastcall FUN_0050fd40(int * param_1)
 * body: 0050fd40-0050fdbc
 */

void __fastcall FUN_0050fd40(int *param_1)

{
  int *piVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573c73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_00578a20;
  local_4 = 1;
  if ((*(byte *)(param_1 + 1) & 3) != 0) {
    FUN_005000f0(param_1,1);
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != param_1 + 4) {
    if (piVar1 != (int *)0x0) {
      FUN_00559d4e(piVar1);
      param_1[3] = 0;
    }
    *(undefined2 *)(param_1 + 2) = 0;
  }
  *(undefined2 *)((int)param_1 + 10) = 0;
  *param_1 = (int)&PTR_FUN_005783a8;
  ExceptionList = local_c;
  return;
}




/* ==== FUN_0055d688 @ 0055d688 ==== 
 * signature: undefined4 __cdecl FUN_0055d688(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7)
 * body: 0055d688-0055d723
 */

undefined4 __cdecl
FUN_0055d688(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005797f0;
  pcStack_10 = FUN_0055e3b4;
  local_14 = ExceptionList;
  DAT_0074dd04 = param_1;
  DAT_0074dd08 = param_3;
  local_8 = 1;
  ExceptionList = &local_14;
  uVar1 = FUN_00557dd1(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_0055d74e();
  ExceptionList = local_14;
  return uVar1;
}



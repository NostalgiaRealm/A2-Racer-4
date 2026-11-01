
/* ==== FUN_0051a6a0 @ 0051a6a0 ==== 
 * signature: undefined __cdecl FUN_0051a6a0(int * param_1, undefined4 param_2)
 * body: 0051a6a0-0051a6c8
 */

void __cdecl FUN_0051a6a0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0051a6d0(*param_1,param_2);
  FUN_00514ba0(param_1);
  *param_1 = (int)piVar1;
  FUN_00514ce0(piVar1);
  return;
}




/* ==== FUN_005510a7 @ 005510a7 ==== 
 * signature: undefined __stdcall FUN_005510a7(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 005510a7-005510e4
 */

void FUN_005510a7(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = FUN_0055449e();
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x10) = iVar1 >> 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



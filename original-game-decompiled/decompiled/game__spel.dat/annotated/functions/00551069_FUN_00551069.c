
/* ==== FUN_00551069 @ 00551069 ==== 
 * signature: undefined __stdcall FUN_00551069(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00551069-005510a6
 */

void FUN_00551069(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = FUN_0055449e();
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x18) = iVar1 >> 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



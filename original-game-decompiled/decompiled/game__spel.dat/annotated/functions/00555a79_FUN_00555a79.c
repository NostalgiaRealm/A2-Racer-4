
/* ==== FUN_00555a79 @ 00555a79 ==== 
 * signature: undefined __stdcall FUN_00555a79(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00555a79-00555b29
 */

void FUN_00555a79(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint *in_stack_0000001c;
  int *in_stack_00000020;
  
  bVar1 = FUN_00556df8((byte *)&param_2,(int *)&stack0x00000010,0,0x17,in_stack_00000020 + 2);
  *in_stack_0000001c = *in_stack_0000001c | CONCAT31(extraout_var,bVar1);
  if (*in_stack_0000001c == 0) {
    if ((char)param_3 == '\0') {
      Peek(&param_2);
    }
    if (param_3._1_1_ != ':') goto LAB_00555ad8;
    FUN_0054e379(&param_2);
    bVar1 = FUN_00556df8((byte *)&param_2,(int *)&stack0x00000010,0,0x3b,in_stack_00000020 + 1);
    *in_stack_0000001c = *in_stack_0000001c | CONCAT31(extraout_var_00,bVar1);
  }
  else {
LAB_00555ad8:
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  if (*in_stack_0000001c == 0) {
    if ((char)param_3 == '\0') {
      Peek(&param_2);
    }
    if (param_3._1_1_ == ':') {
      FUN_0054e379(&param_2);
      bVar1 = FUN_00556df8((byte *)&param_2,(int *)&stack0x00000010,0,0x3b,in_stack_00000020);
      *in_stack_0000001c = *in_stack_0000001c | CONCAT31(extraout_var_01,bVar1);
      goto LAB_00555b15;
    }
  }
  *in_stack_0000001c = *in_stack_0000001c | 2;
LAB_00555b15:
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



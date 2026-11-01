
/* ==== FUN_00550e74 @ 00550e74 ==== 
 * signature: undefined __stdcall FUN_00550e74(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00550e74-00550f37
 */

void FUN_00550e74(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint *in_stack_0000001c;
  int *in_stack_00000020;
  short local_8;
  
  uVar2 = FUN_0054ef7c(0x3a);
  bVar1 = FUN_005531c8((byte *)&param_2,(int *)&stack0x00000010,0,0x17,in_stack_00000020 + 2);
  *in_stack_0000001c = *in_stack_0000001c | CONCAT31(extraout_var,bVar1);
  local_8 = (short)uVar2;
  if (*in_stack_0000001c == 0) {
    if ((char)param_3 == '\0') {
      Peek(&param_2);
    }
    if (param_3._2_2_ != local_8) goto LAB_00550ee2;
    FUN_0055331d(&param_2);
    bVar1 = FUN_005531c8((byte *)&param_2,(int *)&stack0x00000010,0,0x3b,in_stack_00000020 + 1);
    *in_stack_0000001c = *in_stack_0000001c | CONCAT31(extraout_var_00,bVar1);
  }
  else {
LAB_00550ee2:
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  if (*in_stack_0000001c == 0) {
    if ((char)param_3 == '\0') {
      Peek(&param_2);
    }
    if (param_3._2_2_ == local_8) {
      FUN_0055331d(&param_2);
      bVar1 = FUN_005531c8((byte *)&param_2,(int *)&stack0x00000010,0,0x3b,in_stack_00000020);
      *in_stack_0000001c = *in_stack_0000001c | CONCAT31(extraout_var_01,bVar1);
      goto LAB_00550f23;
    }
  }
  *in_stack_0000001c = *in_stack_0000001c | 2;
LAB_00550f23:
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



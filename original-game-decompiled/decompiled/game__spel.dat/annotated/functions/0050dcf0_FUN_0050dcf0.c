
/* ==== FUN_0050dcf0 @ 0050dcf0 ==== 
 * signature: undefined __thiscall FUN_0050dcf0(int param_1, double * param_2, double param_3)
 * body: 0050dcf0-0050dd50
 */

void __thiscall FUN_0050dcf0(int param_1,double *param_2,double param_3)

{
  undefined4 uVar1;
  int *in_stack_0000001c;
  
  if (param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2 <= param_3 * param_3)
  {
    uVar1 = *(undefined4 *)(param_1 + 4);
    if (*in_stack_0000001c <= in_stack_0000001c[1]) {
      FUN_0050a360(in_stack_0000001c);
    }
    *(undefined4 *)(in_stack_0000001c[2] + in_stack_0000001c[1] * 4) = uVar1;
    in_stack_0000001c[1] = in_stack_0000001c[1] + 1;
  }
  return;
}




/* ==== FUN_0053ffe8 @ 0053ffe8 ==== 
 * signature: float10 __thiscall FUN_0053ffe8(int param_1, double param_2, double param_3, double param_4, undefined4 param_5, undefined4 param_6, double param_7, double param_8, double param_9, undefined4 param_10, undefined4 param_11, double param_12, double param_13, double param_14)
 * body: 0053ffe8-00540050
 */

float10 __thiscall
FUN_0053ffe8(int param_1,double param_2,double param_3,double param_4,undefined4 param_5,
            undefined4 param_6,double param_7,double param_8,double param_9,undefined4 param_10,
            undefined4 param_11,double param_12,double param_13,double param_14)

{
  double *in_EAX;
  void *in_stack_00000068;
  void *in_stack_0000006c;
  
  FUN_004fad20(in_stack_00000068,(double *)(param_1 + 0x28),in_EAX);
  FUN_004fad20(in_stack_0000006c,(double *)(param_1 + 0x48),&param_2);
  FUN_004faec0(in_stack_0000006c,(double *)(param_1 + 0x68),&param_12);
  return ((float10)param_2 - (float10)param_7) * (float10)param_12 +
         ((float10)param_3 - (float10)param_8) * (float10)param_13 +
         ((float10)param_4 - (float10)param_9) * (float10)param_14;
}



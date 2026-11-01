
/* ==== FUN_0053ff00 @ 0053ff00 ==== 
 * signature: float10 __thiscall FUN_0053ff00(int param_1, void * param_2, void * param_3)
 * body: 0053ff00-0053ff4c
 */

float10 __thiscall FUN_0053ff00(int param_1,void *param_2,void *param_3)

{
  double local_40;
  double local_38;
  double local_30;
  double local_20;
  double local_18;
  double local_10;
  
  FUN_004faec0(param_2,(double *)(param_1 + 0x28),&local_20);
  FUN_004faec0(param_3,(double *)(param_1 + 0x48),&local_40);
  return (float10)local_40 * (float10)local_20 +
         (float10)local_18 * (float10)local_38 + (float10)local_10 * (float10)local_30;
}



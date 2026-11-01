
/* ==== FUN_005409d0 @ 005409d0 ==== 
 * signature: float10 __thiscall FUN_005409d0(int param_1, void * param_2, void * param_3)
 * body: 005409d0-00540a33
 */

float10 __thiscall FUN_005409d0(int param_1,void *param_2,void *param_3)

{
  double local_60;
  double local_58;
  double local_50;
  double local_40 [4];
  double local_20 [4];
  
  FUN_004faec0(param_2,(double *)(param_1 + 0x28),local_20);
  FUN_004faec0(param_3,(double *)(param_1 + 0x48),local_40);
  FUN_004f99d0(&local_60,local_20,local_40);
  return (float10)local_60 * (float10)local_60 +
         (float10)local_58 * (float10)local_58 + (float10)local_50 * (float10)local_50;
}




/* ==== FUN_005402a0 @ 005402a0 ==== 
 * signature: float10 __thiscall FUN_005402a0(int param_1, void * param_2, void * param_3)
 * body: 005402a0-005402ea
 */

float10 __thiscall FUN_005402a0(int param_1,void *param_2,void *param_3)

{
  double local_40;
  double local_38;
  double local_30;
  double local_20 [4];
  
  FUN_004faec0(param_3,(double *)(param_1 + 0x48),local_20);
  FUN_004faf30(param_2,local_20,&local_40);
  return (float10)local_40 * (float10)*(double *)(param_1 + 0x28) +
         (float10)local_30 * (float10)*(double *)(param_1 + 0x38) +
         (float10)local_38 * (float10)*(double *)(param_1 + 0x30);
}



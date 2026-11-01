
/* ==== FUN_0053ffe0 @ 0053ffe0 ==== 
 * signature: float10 __thiscall FUN_0053ffe0(int param_1, void * param_2, void * param_3)
 * body: 0053ffe0-0053ffe7
 */

float10 __thiscall FUN_0053ffe0(int param_1,void *param_2,void *param_3)

{
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double local_40;
  double dStack_38;
  double dStack_30;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  
  FUN_004fad20(param_2,(double *)(param_1 + 0x28),&local_40);
  FUN_004fad20(param_3,(double *)(param_1 + 0x48),&dStack_60);
  FUN_004faec0(param_3,(double *)(param_1 + 0x68),&dStack_20);
  return ((float10)dStack_60 - (float10)local_40) * (float10)dStack_20 +
         ((float10)dStack_58 - (float10)dStack_38) * (float10)dStack_18 +
         ((float10)dStack_50 - (float10)dStack_30) * (float10)dStack_10;
}



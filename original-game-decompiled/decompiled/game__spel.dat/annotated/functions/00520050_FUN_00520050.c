
/* ==== FUN_00520050 @ 00520050 ==== 
 * signature: float10 __thiscall FUN_00520050(int param_1, double * param_2)
 * body: 00520050-0052006b
 */

float10 __thiscall FUN_00520050(int param_1,double *param_2)

{
  return ((float10)**(double **)(param_1 + 8) - (float10)*param_2) *
         (float10)*(double *)(param_1 + 0x18) +
         ((float10)param_2[1] - (float10)(*(double **)(param_1 + 8))[1]) *
         (float10)*(double *)(param_1 + 0x10);
}



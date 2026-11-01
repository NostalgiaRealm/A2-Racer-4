
/* ==== FUN_0053fde0 @ 0053fde0 ==== 
 * signature: float10 __thiscall FUN_0053fde0(int param_1, void * param_2, double * param_3)
 * body: 0053fde0-0053fefa
 */

float10 __thiscall FUN_0053fde0(int param_1,void *param_2,double *param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  double local_68;
  double local_60;
  double local_58;
  
  FUN_004fad20(param_2,(double *)(param_1 + 0x28),&local_68);
  fVar1 = (float10)*(double *)(param_1 + 0x68);
  fVar2 = (float10)*(double *)(param_1 + 0x70);
  fVar3 = (float10)*(double *)(param_1 + 0x78);
  return (float10)(local_68 -
                  (double)((float10)param_3[2] * fVar3 +
                           (float10)(double)((float10)param_3[1] * fVar2 +
                                            (float10)(double)((float10)*param_3 * fVar1)) +
                          (float10)param_3[0xc])) *
         (float10)(param_3[1] * *(double *)(param_1 + 0x50) +
                  param_3[2] * *(double *)(param_1 + 0x58) + *param_3 * *(double *)(param_1 + 0x48))
         + (float10)(local_60 -
                    (double)((float10)param_3[6] * fVar3 +
                             (float10)(double)((float10)param_3[5] * fVar2 +
                                              (float10)(double)((float10)param_3[4] * fVar1)) +
                            (float10)param_3[0xd])) *
           (float10)(param_3[5] * *(double *)(param_1 + 0x50) +
                    param_3[6] * *(double *)(param_1 + 0x58) +
                    param_3[4] * *(double *)(param_1 + 0x48)) +
           ((float10)local_58 -
           ((float10)param_3[10] * fVar3 + (float10)param_3[9] * fVar2 + fVar1 * (float10)param_3[8]
           + (float10)param_3[0xe])) *
           (float10)(param_3[10] * *(double *)(param_1 + 0x58) +
                    param_3[8] * *(double *)(param_1 + 0x48) +
                    param_3[9] * *(double *)(param_1 + 0x50));
}



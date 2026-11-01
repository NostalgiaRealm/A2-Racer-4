
/* ==== FUN_004fa310 @ 004fa310 ==== 
 * signature: undefined __thiscall FUN_004fa310(double * param_1, double * param_2, double param_3)
 * body: 004fa310-004fa45b
 */

void __thiscall FUN_004fa310(double *param_1,double *param_2,double param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double local_38;
  double local_30;
  
  if (*param_2 == 0.0) {
    fVar1 = (float10)1.0;
    fVar2 = (float10)0.0;
  }
  else {
    fVar1 = (float10)fcos((float10)param_3 * (float10)*param_2);
    fVar2 = (float10)fsin((float10)(double)((float10)param_3 * (float10)*param_2));
  }
  if (param_2[1] == 0.0) {
    local_30 = 1.0;
    local_38 = 0.0;
  }
  else {
    fVar3 = (float10)fcos((float10)param_3 * (float10)param_2[1]);
    local_30 = (double)fVar3;
    fVar3 = (float10)fsin((float10)param_3 * (float10)param_2[1]);
    local_38 = (double)fVar3;
  }
  if (param_2[2] == 0.0) {
    fVar3 = (float10)1.0;
    fVar4 = (float10)0.0;
  }
  else {
    fVar3 = (float10)fcos((float10)param_3 * (float10)param_2[2]);
    fVar4 = (float10)fsin((float10)(double)((float10)param_3 * (float10)param_2[2]));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x74) = 0;
  *param_1 = (double)((float10)(double)(fVar4 * (float10)local_38) * fVar2 +
                     fVar3 * (float10)local_30);
  param_1[1] = (double)((float10)(double)(fVar3 * (float10)local_38) * fVar2 -
                       fVar4 * (float10)local_30);
  param_1[2] = (double)((float10)local_38 * fVar1);
  param_1[4] = (double)(fVar4 * fVar1);
  param_1[5] = (double)(fVar3 * fVar1);
  param_1[6] = (double)-fVar2;
  param_1[8] = (double)((float10)(double)(fVar4 * (float10)local_30) * fVar2 -
                       (float10)(double)(fVar3 * (float10)local_38));
  param_1[9] = (double)((float10)(double)(fVar3 * (float10)local_30) * fVar2 +
                       (float10)(double)(fVar4 * (float10)local_38));
  param_1[10] = (double)((float10)local_30 * fVar1);
  return;
}



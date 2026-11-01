
/* ==== FUN_004f4390 @ 004f4390 ==== 
 * signature: undefined __thiscall FUN_004f4390(int param_1, float * param_2, double param_3, float * param_4)
 * body: 004f4390-004f43d5
 */

void __thiscall FUN_004f4390(int param_1,float *param_2,double param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x38);
  fVar2 = param_2[1];
  fVar3 = *(float *)(param_1 + 0x3c);
  fVar4 = param_2[2];
  *param_4 = *param_2 * *(float *)(param_1 + 0x34) * (float)param_3;
  param_4[1] = fVar1 * fVar2 * (float)param_3;
  param_4[2] = fVar3 * fVar4 * (float)param_3;
  return;
}



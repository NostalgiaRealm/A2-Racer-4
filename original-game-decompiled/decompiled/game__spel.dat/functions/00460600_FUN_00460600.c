
/* ==== FUN_00460600 @ 00460600 ==== 
 * signature: undefined __cdecl FUN_00460600(float * param_1, float * param_2, float param_3)
 * body: 00460600-00460721
 */

void __cdecl FUN_00460600(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)fcos((float10)param_3);
  fVar8 = (float10)fsin((float10)param_3);
  fVar2 = SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  fVar3 = *param_2 / fVar2;
  fVar4 = param_2[1] / fVar2;
  fVar2 = param_2[2] / fVar2;
  fVar1 = (float)((float10)1.0 - fVar7);
  *param_1 = (float)((float10)fVar3 * (float10)fVar3 * (float10)fVar1 + fVar7);
  fVar9 = (float10)fVar3 * (float10)fVar4 * (float10)fVar1;
  param_1[1] = (float)(fVar9 - (float10)fVar2 * fVar8);
  fVar5 = fVar3 * fVar2 * fVar1;
  param_1[2] = (float)((float10)fVar4 * fVar8 + (float10)fVar5);
  param_1[4] = (float)((float10)fVar2 * fVar8 + fVar9);
  param_1[5] = (float)((float10)fVar4 * (float10)fVar4 * (float10)fVar1 + fVar7);
  fVar6 = fVar2 * fVar4 * fVar1;
  param_1[6] = (float)((float10)fVar6 - fVar8 * (float10)fVar3);
  param_1[0xf] = 1.0;
  param_1[0xb] = 0.0;
  param_1[7] = 0.0;
  param_1[3] = 0.0;
  param_1[0xe] = 0.0;
  param_1[8] = fVar5 - (float)((float10)fVar4 * fVar8);
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  param_1[9] = (float)(fVar8 * (float10)fVar3 + (float10)fVar6);
  param_1[10] = (float)((float10)fVar2 * (float10)fVar2 * (float10)fVar1 + fVar7);
  return;
}



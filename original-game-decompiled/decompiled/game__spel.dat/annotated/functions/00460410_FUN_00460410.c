
/* ==== FUN_00460410 @ 00460410 ==== 
 * signature: undefined __cdecl FUN_00460410(float * param_1, float * param_2, float * param_3)
 * body: 00460410-00460565
 */

void __cdecl FUN_00460410(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *param_1 = param_3[1] * param_2[4] + param_2[8] * param_3[2] + *param_2 * *param_3;
  param_1[1] = param_2[1] * *param_3 + param_3[1] * param_2[5] + param_2[9] * param_3[2];
  fVar1 = param_2[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_2[6];
  fVar5 = param_2[10];
  fVar6 = param_3[2];
  param_1[3] = 0.0;
  param_1[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  param_1[4] = param_3[5] * param_2[4] + param_3[4] * *param_2 + param_3[6] * param_2[8];
  param_1[5] = param_3[4] * param_2[1] + param_3[6] * param_2[9] + param_3[5] * param_2[5];
  fVar1 = param_3[6];
  fVar2 = param_2[10];
  fVar3 = param_3[4];
  fVar4 = param_2[2];
  fVar5 = param_3[5];
  fVar6 = param_2[6];
  param_1[7] = 0.0;
  param_1[6] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  param_1[8] = *param_2 * param_3[8] + param_3[9] * param_2[4] + param_2[8] * param_3[10];
  param_1[9] = param_2[1] * param_3[8] + param_2[9] * param_3[10] + param_3[9] * param_2[5];
  fVar1 = param_2[10];
  fVar2 = param_3[10];
  fVar3 = param_2[2];
  fVar4 = param_3[8];
  fVar5 = param_3[9];
  fVar6 = param_2[6];
  param_1[0xb] = 0.0;
  param_1[10] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  param_1[0xc] = param_2[4] * param_3[0xd] + param_2[8] * param_3[0xe] + param_3[0xc] * *param_2 +
                 param_2[0xc];
  param_1[0xd] = param_3[0xd] * param_2[5] + param_3[0xc] * param_2[1] + param_3[0xe] * param_2[9] +
                 param_2[0xd];
  fVar1 = param_2[6];
  fVar2 = param_3[0xd];
  fVar3 = param_2[10];
  fVar4 = param_3[0xe];
  fVar5 = param_2[2];
  fVar6 = param_3[0xc];
  fVar7 = param_2[0xe];
  param_1[0xf] = 1.0;
  param_1[0xe] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  return;
}



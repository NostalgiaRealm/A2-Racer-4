
/* ==== FUN_004fe070 @ 004fe070 ==== 
 * signature: undefined __thiscall FUN_004fe070(void * this, float * param_1, float * param_2, double param_3)
 * body: 004fe070-004fe0ac
 */

void __thiscall FUN_004fe070(void *this,float *param_1,float *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = param_1[1];
  fVar3 = param_2[2];
  fVar4 = param_1[2];
  *(float *)this = *param_2 * (float)param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * (float)param_3 + fVar2;
  *(float *)((int)this + 8) = fVar3 * (float)param_3 + fVar4;
  return;
}



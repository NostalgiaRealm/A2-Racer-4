
/* ==== FUN_004f93d0 @ 004f93d0 ==== 
 * signature: undefined __thiscall FUN_004f93d0(void * this, float * param_1, float * param_2, double param_3)
 * body: 004f93d0-004f9437
 */

void __thiscall FUN_004f93d0(void *this,float *param_1,float *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  dVar5 = 1.0 - param_3;
  fVar1 = param_1[2];
  fVar2 = param_2[2];
  fVar3 = *param_1;
  fVar4 = *param_2;
  *(double *)((int)this + 8) = (double)param_2[1] * param_3 + (double)param_1[1] * dVar5;
  *(double *)this = (double)fVar4 * param_3 + (double)fVar3 * dVar5;
  *(double *)((int)this + 0x10) = (double)fVar2 * param_3 + (double)fVar1 * dVar5;
  return;
}



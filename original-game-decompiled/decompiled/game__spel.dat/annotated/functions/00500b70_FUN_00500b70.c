
/* ==== FUN_00500b70 @ 00500b70 ==== 
 * signature: undefined __thiscall FUN_00500b70(void * this, double * param_1, float * param_2, double param_3)
 * body: 00500b70-00500bb3
 */

void __thiscall FUN_00500b70(void *this,double *param_1,float *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  fVar1 = param_2[1];
  dVar3 = param_1[1];
  fVar2 = *param_2;
  dVar4 = *param_1;
  *(double *)((int)this + 0x10) = (double)(param_2[2] * (float)param_3 + (float)param_1[2]);
  *(double *)this = (double)(fVar2 * (float)param_3 + (float)dVar4);
  *(double *)((int)this + 8) = (double)(fVar1 * (float)param_3 + (float)dVar3);
  return;
}



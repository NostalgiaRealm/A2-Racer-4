
/* ==== FUN_004f9360 @ 004f9360 ==== 
 * signature: undefined __thiscall FUN_004f9360(void * this, double * param_1, double * param_2, double param_3)
 * body: 004f9360-004f93c1
 */

void __thiscall FUN_004f9360(void *this,double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = 1.0 - param_3;
  dVar1 = param_1[2];
  dVar2 = param_2[2];
  dVar3 = *param_1;
  dVar4 = *param_2;
  *(double *)((int)this + 8) = param_3 * param_2[1] + dVar5 * param_1[1];
  *(double *)this = param_3 * dVar4 + dVar5 * dVar3;
  *(double *)((int)this + 0x10) = param_3 * dVar2 + dVar5 * dVar1;
  return;
}




/* ==== FUN_004f99d0 @ 004f99d0 ==== 
 * signature: undefined __thiscall FUN_004f99d0(void * this, double * param_1, double * param_2)
 * body: 004f99d0-004f9a0c
 */

void __thiscall FUN_004f99d0(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_1;
  dVar2 = param_2[1];
  dVar3 = param_1[1];
  dVar4 = *param_2;
  dVar5 = *param_2;
  dVar6 = param_1[2];
  dVar7 = *param_1;
  dVar8 = param_2[2];
  *(double *)this = param_1[1] * param_2[2] - param_1[2] * param_2[1];
  *(double *)((int)this + 8) = dVar5 * dVar6 - dVar7 * dVar8;
  *(double *)((int)this + 0x10) = dVar1 * dVar2 - dVar3 * dVar4;
  return;
}



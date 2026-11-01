
/* ==== FUN_004fa070 @ 004fa070 ==== 
 * signature: undefined __thiscall FUN_004fa070(void * this, double * param_1)
 * body: 004fa070-004fa0a1
 */

void __thiscall FUN_004fa070(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  *(double *)this = -*param_1;
  *(double *)((int)this + 0x10) = -dVar2;
  *(double *)((int)this + 8) = -dVar1;
  return;
}



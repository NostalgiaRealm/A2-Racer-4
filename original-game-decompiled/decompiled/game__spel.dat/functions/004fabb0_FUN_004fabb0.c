
/* ==== FUN_004fabb0 @ 004fabb0 ==== 
 * signature: undefined __thiscall FUN_004fabb0(void * this, double * param_1, double * param_2)
 * body: 004fabb0-004fac11
 */

void __thiscall FUN_004fabb0(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_1 - *(double *)((int)this + 0x60);
  dVar3 = param_1[1] - *(double *)((int)this + 0x68);
  dVar2 = param_1[2] - *(double *)((int)this + 0x70);
  *param_2 = *(double *)this * dVar1 +
             *(double *)((int)this + 0x20) * dVar3 + *(double *)((int)this + 0x40) * dVar2;
  param_2[1] = *(double *)((int)this + 8) * dVar1 +
               *(double *)((int)this + 0x28) * dVar3 + *(double *)((int)this + 0x48) * dVar2;
  param_2[2] = *(double *)((int)this + 0x10) * dVar1 +
               *(double *)((int)this + 0x30) * dVar3 + *(double *)((int)this + 0x50) * dVar2;
  return;
}



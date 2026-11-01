
/* ==== FUN_004fe7e0 @ 004fe7e0 ==== 
 * signature: undefined __thiscall FUN_004fe7e0(void * this, double * param_1, double * param_2)
 * body: 004fe7e0-004fe84e
 */

void __thiscall FUN_004fe7e0(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_1 - *(double *)((int)this + 0x90);
  dVar3 = param_1[1] - *(double *)((int)this + 0x98);
  dVar2 = param_1[2] - *(double *)((int)this + 0xa0);
  *param_2 = *(double *)((int)this + 0x30) * dVar1 +
             *(double *)((int)this + 0x50) * dVar3 + *(double *)((int)this + 0x70) * dVar2;
  param_2[1] = *(double *)((int)this + 0x38) * dVar1 +
               *(double *)((int)this + 0x58) * dVar3 + *(double *)((int)this + 0x78) * dVar2;
  param_2[2] = *(double *)((int)this + 0x40) * dVar1 +
               *(double *)((int)this + 0x60) * dVar3 + *(double *)((int)this + 0x80) * dVar2;
  return;
}



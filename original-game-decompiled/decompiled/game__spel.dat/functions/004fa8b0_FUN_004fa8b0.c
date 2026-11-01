
/* ==== FUN_004fa8b0 @ 004fa8b0 ==== 
 * signature: undefined __thiscall FUN_004fa8b0(void * this, double * param_1, double * param_2)
 * body: 004fa8b0-004fa90c
 */

void __thiscall FUN_004fa8b0(void *this,double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double local_20;
  double local_18;
  double local_10;
  
  FUN_004fa910(this,param_1,param_2);
  FUN_004faec0(param_2,param_1 + 0xc,&local_20);
  dVar1 = *(double *)((int)this + 0x68);
  dVar2 = *(double *)((int)this + 0x60);
  param_2[0xe] = *(double *)((int)this + 0x70) - local_10;
  param_2[0xc] = dVar2 - local_20;
  param_2[0xd] = dVar1 - local_18;
  return;
}




/* ==== FUN_004fb000 @ 004fb000 ==== 
 * signature: undefined __thiscall FUN_004fb000(void * this, double * param_1)
 * body: 004fb000-004fb03b
 */

void __thiscall FUN_004fb000(void *this,double *param_1)

{
  double local_20;
  double local_18;
  double local_10;
  
  FUN_004faec0(this,param_1,&local_20);
  *(double *)((int)this + 0x60) = local_20 + *(double *)((int)this + 0x60);
  *(double *)((int)this + 0x68) = local_18 + *(double *)((int)this + 0x68);
  *(double *)((int)this + 0x70) = local_10 + *(double *)((int)this + 0x70);
  return;
}



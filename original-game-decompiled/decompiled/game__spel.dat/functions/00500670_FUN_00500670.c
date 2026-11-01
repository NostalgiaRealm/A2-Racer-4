
/* ==== FUN_00500670 @ 00500670 ==== 
 * signature: undefined __thiscall FUN_00500670(void * this, double * param_1)
 * body: 00500670-0050069e
 */

void __thiscall FUN_00500670(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  *(float *)((int)this + 4) = (float)*param_1;
  *(float *)((int)this + 8) = (float)dVar1;
  *(float *)((int)this + 0xc) = (float)dVar2;
  return;
}



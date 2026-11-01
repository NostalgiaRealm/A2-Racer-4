
/* ==== FUN_00520070 @ 00520070 ==== 
 * signature: undefined4 __thiscall FUN_00520070(void * this, double * param_1)
 * body: 00520070-00520136
 */

undefined4 __thiscall FUN_00520070(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  int local_4;
  
  dVar1 = ABS(*(double *)((int)this + 0x10));
  if (dVar1 <= 1e-19) {
    dVar1 = ABS(*(double *)((int)this + 0x18));
    if (dVar1 <= 1e-19) {
      return 0;
    }
    local_4 = 1;
    if (*(double *)((int)this + 0x18) <= 0.0) {
      local_4 = -1;
    }
    dVar2 = (param_1[1] - *(double *)(*(int *)((int)this + 8) + 8)) * (double)local_4;
  }
  else {
    local_4 = 1;
    if (*(double *)((int)this + 0x10) <= 0.0) {
      local_4 = -1;
    }
    dVar2 = (*param_1 - **(double **)((int)this + 8)) * (double)local_4;
  }
  if ((9.999999747378752e-05 < dVar2) && (dVar2 < dVar1 - 9.999999747378752e-05)) {
    return 1;
  }
  return 0;
}



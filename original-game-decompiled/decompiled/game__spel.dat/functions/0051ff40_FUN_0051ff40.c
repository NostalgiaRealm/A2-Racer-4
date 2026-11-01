
/* ==== FUN_0051ff40 @ 0051ff40 ==== 
 * signature: undefined4 __thiscall FUN_0051ff40(void * this, double * param_1)
 * body: 0051ff40-0051ff77
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0051ff40(void *this,double *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  fVar2 = FUN_00520050((int)this,param_1);
  if (fVar2 <= (float10)1e-19) {
    return 0;
  }
  uVar1 = 2;
  if ((float10)_DAT_0074c7c0 < fVar2) {
    uVar1 = 1;
  }
  return uVar1;
}



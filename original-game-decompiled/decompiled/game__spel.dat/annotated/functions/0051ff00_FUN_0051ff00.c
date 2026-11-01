
/* ==== FUN_0051ff00 @ 0051ff00 ==== 
 * signature: undefined4 * __thiscall FUN_0051ff00(void * this, double * param_1, double * param_2)
 * body: 0051ff00-0051ff39
 */

undefined4 * __thiscall FUN_0051ff00(void *this,double *param_1,double *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(double **)((int)this + 8) = param_1;
  *(double **)((int)this + 0xc) = param_2;
  if ((param_1 != (double *)0x0) && (param_2 != (double *)0x0)) {
    *(double *)((int)this + 0x10) = *param_2 - *param_1;
    *(double *)((int)this + 0x18) = param_2[1] - param_1[1];
  }
  return this;
}



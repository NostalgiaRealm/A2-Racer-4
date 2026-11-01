
/* ==== FUN_004f9a50 @ 004f9a50 ==== 
 * signature: undefined __thiscall FUN_004f9a50(void * this, double * param_1)
 * body: 004f9a50-004f9b04
 */

void __thiscall FUN_004f9a50(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (1e-19 <= ABS(*param_1)) {
    dVar1 = param_1[1] * param_1[1] - param_1[2] * *param_1 * 4.0;
    *(double *)this = dVar1;
    if (0.0 < dVar1) {
      dVar2 = *param_1;
      dVar3 = param_1[1];
      *(double *)((int)this + 8) = (-param_1[1] - SQRT(dVar1)) * (0.5 / dVar2);
      *(double *)((int)this + 0x10) = (SQRT(dVar1) - dVar3) * (0.5 / dVar2);
    }
    return;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (1e-19 < ABS(param_1[1])) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0xbff00000;
    return;
  }
  dVar1 = param_1[2];
  dVar2 = param_1[1];
  *(double *)((int)this + 0x10) = -(dVar1 / dVar2);
  *(double *)((int)this + 8) = -(dVar1 / dVar2);
  return;
}




/* ==== FUN_004fac20 @ 004fac20 ==== 
 * signature: undefined __thiscall FUN_004fac20(void * this, float * param_1, float * param_2)
 * body: 004fac20-004fac81
 */

void __thiscall FUN_004fac20(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1 - (float)*(double *)((int)this + 0x60);
  fVar3 = param_1[1] - (float)*(double *)((int)this + 0x68);
  fVar2 = param_1[2] - (float)*(double *)((int)this + 0x70);
  *param_2 = (float)*(double *)this * fVar1 +
             (float)*(double *)((int)this + 0x20) * fVar3 +
             (float)*(double *)((int)this + 0x40) * fVar2;
  param_2[1] = (float)*(double *)((int)this + 8) * fVar1 +
               (float)*(double *)((int)this + 0x28) * fVar3 +
               (float)*(double *)((int)this + 0x48) * fVar2;
  param_2[2] = (float)*(double *)((int)this + 0x10) * fVar1 +
               (float)*(double *)((int)this + 0x30) * fVar3 +
               (float)*(double *)((int)this + 0x50) * fVar2;
  return;
}




/* ==== FUN_004fab40 @ 004fab40 ==== 
 * signature: undefined __thiscall FUN_004fab40(void * this, double * param_1, float * param_2)
 * body: 004fab40-004faba1
 */

void __thiscall FUN_004fab40(void *this,double *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*param_1 - (float10)*(double *)((int)this + 0x60);
  fVar2 = (float10)param_1[1] - (float10)*(double *)((int)this + 0x68);
  fVar3 = (float10)param_1[2] - (float10)*(double *)((int)this + 0x70);
  *param_2 = (float)((float10)*(double *)this * fVar1 +
                    (float10)*(double *)((int)this + 0x20) * fVar2 +
                    (float10)*(double *)((int)this + 0x40) * fVar3);
  param_2[1] = (float)((float10)*(double *)((int)this + 8) * fVar1 +
                      (float10)*(double *)((int)this + 0x28) * fVar2 +
                      (float10)*(double *)((int)this + 0x48) * fVar3);
  param_2[2] = (float)((float10)*(double *)((int)this + 0x10) * fVar1 +
                      (float10)*(double *)((int)this + 0x30) * fVar2 +
                      (float10)*(double *)((int)this + 0x50) * fVar3);
  return;
}



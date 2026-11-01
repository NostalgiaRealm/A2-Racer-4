
/* ==== FUN_004fec00 @ 004fec00 ==== 
 * signature: undefined4 __thiscall FUN_004fec00(void * this, float * param_1, float param_2)
 * body: 004fec00-004feccc
 */

undefined4 __thiscall FUN_004fec00(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = ABS(param_1[2] - *(float *)((int)this + 8));
  fVar1 = ABS(*param_1 - *(float *)this);
  fVar3 = ABS(param_1[1] - *(float *)((int)this + 4));
  fVar4 = param_2 * 0.5 + *(float *)((int)this + 0x10);
  if (fVar4 < fVar1) {
    return 0;
  }
  if (fVar4 < fVar3) {
    return 0;
  }
  if (fVar4 < fVar2) {
    return 0;
  }
  if (fVar4 * fVar4 * 3.0 <= fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) {
    return 0;
  }
  return 1;
}



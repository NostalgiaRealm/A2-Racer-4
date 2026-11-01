
/* ==== FUN_004f5fa0 @ 004f5fa0 ==== 
 * signature: undefined __thiscall FUN_004f5fa0(void * this, float * param_1, float * param_2, float * param_3)
 * body: 004f5fa0-004f6021
 */

void __thiscall FUN_004f5fa0(void *this,float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = *(float **)((int)this + 4);
  fVar2 = SQRT((*pfVar1 - *param_1) * (*pfVar1 - *param_1) +
               (pfVar1[1] - param_1[1]) * (pfVar1[1] - param_1[1]) +
               (pfVar1[2] - param_1[2]) * (pfVar1[2] - param_1[2]));
  *param_2 = pfVar1[6] + fVar2;
  *param_3 = (float)(*(uint *)(*(int *)((int)this + 4) + 0x1c) & 0xff) *
             *(float *)(*(int *)((int)this + 4) + 0x18) * 0.004 + fVar2;
  return;
}



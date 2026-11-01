
/* ==== FUN_004f4050 @ 004f4050 ==== 
 * signature: undefined __thiscall FUN_004f4050(void * this, double * param_1, float * param_2)
 * body: 004f4050-004f41a1
 */

void __thiscall FUN_004f4050(void *this,double *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_28;
  float fStack_24;
  float local_20;
  float local_18;
  float fStack_14;
  float local_10;
  
  _local_28 = CONCAT44((float)((float10)param_1[1] - (float10)*(double *)((int)this + 400)),
                       (float)((float10)*param_1 - (float10)*(double *)((int)this + 0x188)));
  local_20 = (float)((float10)param_1[2] - (float10)*(double *)((int)this + 0x198));
  FUN_004f9a10(&local_18,&local_28,param_2);
  *(float *)((int)this + 0x94) =
       ((float)*(double *)((int)this + 0x128) * local_18 +
       (float)*(double *)((int)this + 0x148) * fStack_14 +
       (float)*(double *)((int)this + 0x168) * local_10) * *(float *)((int)this + 0x34) +
       *(float *)((int)this + 0x94);
  *(float *)((int)this + 0x98) =
       ((float)*(double *)((int)this + 0x130) * local_18 +
       (float)*(double *)((int)this + 0x150) * fStack_14 +
       (float)*(double *)((int)this + 0x170) * local_10) * *(float *)((int)this + 0x38) +
       *(float *)((int)this + 0x98);
  *(float *)((int)this + 0x9c) =
       (float)(*(double *)((int)this + 0x138) * (double)local_18 +
              *(double *)((int)this + 0x158) * (double)fStack_14 +
              *(double *)((int)this + 0x178) * (double)local_10) * *(float *)((int)this + 0x3c) +
       *(float *)((int)this + 0x9c);
  fVar1 = *(float *)((int)this + 0x40);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *(float *)((int)this + 0xa4) = *param_2 * fVar1 + *(float *)((int)this + 0xa4);
  *(float *)((int)this + 0xa8) = fVar2 * fVar1 + *(float *)((int)this + 0xa8);
  *(float *)((int)this + 0xac) = fVar3 * fVar1 + *(float *)((int)this + 0xac);
  return;
}



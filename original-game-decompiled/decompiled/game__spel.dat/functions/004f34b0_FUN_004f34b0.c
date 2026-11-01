
/* ==== FUN_004f34b0 @ 004f34b0 ==== 
 * signature: undefined __thiscall FUN_004f34b0(void * this, double * param_1, float * param_2)
 * body: 004f34b0-004f3553
 */

void __thiscall FUN_004f34b0(void *this,double *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_20;
  float fStack_1c;
  float local_18;
  
  FUN_004fae60((void *)((int)this + 0x128),(float *)((int)this + 0x94),&local_20);
  fVar3 = (float10)*param_1 - (float10)*(double *)((int)this + 0x188);
  fVar4 = (float10)param_1[1] - (float10)*(double *)((int)this + 400);
  fVar5 = (float10)param_1[2] - (float10)*(double *)((int)this + 0x198);
  fVar1 = *(float *)((int)this + 0xa8);
  fVar2 = *(float *)((int)this + 0xac);
  *param_2 = (float)(fVar5 * (float10)fStack_1c - (float10)local_18 * fVar4) +
             *(float *)((int)this + 0xa4);
  param_2[1] = (float)((float10)local_18 * fVar3 - fVar5 * (float10)local_20) + fVar1;
  param_2[2] = (float)((fVar4 * (float10)local_20 - (float10)fStack_1c * fVar3) + (float10)fVar2);
  return;
}



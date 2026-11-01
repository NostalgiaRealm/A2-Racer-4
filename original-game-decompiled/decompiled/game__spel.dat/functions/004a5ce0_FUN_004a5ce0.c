
/* ==== FUN_004a5ce0 @ 004a5ce0 ==== 
 * signature: undefined __fastcall FUN_004a5ce0(int param_1)
 * body: 004a5ce0-004a5dd4
 */

void __fastcall FUN_004a5ce0(int param_1)

{
  float *pfVar1;
  void *this;
  float10 fVar2;
  float local_38;
  float local_34;
  float local_30;
  double local_28 [4];
  
  this = *(void **)(*(int *)(param_1 + 0x14) + 0xa4);
  FUN_004fadc0((double *)((int)this + 0x128),(float *)(param_1 + 0x28),local_28);
  pfVar1 = (float *)(param_1 + 0x80);
  local_38 = *pfVar1 * (float)*(double *)((int)this + 0x128) +
             (float)*(double *)((int)this + 0x138) * *(float *)(param_1 + 0x88) +
             (float)*(double *)((int)this + 0x130) * *(float *)(param_1 + 0x84);
  local_34 = *(float *)(param_1 + 0x88) * (float)*(double *)((int)this + 0x158) +
             *(float *)(param_1 + 0x84) * (float)*(double *)((int)this + 0x150) +
             *pfVar1 * (float)*(double *)((int)this + 0x148);
  local_30 = *(float *)(param_1 + 0x88) * (float)*(double *)((int)this + 0x178) +
             *(float *)(param_1 + 0x84) * (float)*(double *)((int)this + 0x170) +
             *pfVar1 * (float)*(double *)((int)this + 0x168);
  fVar2 = FUN_004f9680(pfVar1);
  if (((float10)1e-10 <= fVar2) && (*(int *)((int)this + 0x5c) * 0x1000000 < 0x8000000)) {
    FUN_004f41b0(this,local_28,&local_38);
  }
  return;
}



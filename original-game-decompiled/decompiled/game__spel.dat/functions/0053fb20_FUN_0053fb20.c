
/* ==== FUN_0053fb20 @ 0053fb20 ==== 
 * signature: undefined __thiscall FUN_0053fb20(void * this, double * param_1)
 * body: 0053fb20-0053fbf6
 */

void __thiscall FUN_0053fb20(void *this,double *param_1)

{
  void *this_00;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if (1 < *(short *)((int)this + 0x3e)) {
    FUN_0053e950(this,param_1);
    return;
  }
  this_00 = *(void **)((int)this + 0x20);
  fVar1 = *(float *)((int)this_00 + 0x30) * *(float *)((int)this_00 + 0x54) *
          *(float *)((int)this_00 + 0x44) * (float)*param_1 * (float)*param_1;
  fVar2 = *(float *)((int)this_00 + 0x3c) * *(float *)((int)this_00 + 0x3c) +
          *(float *)((int)this_00 + 0x38) * *(float *)((int)this_00 + 0x38);
  if (fVar1 * fVar1 + 1e-06 < fVar2) {
    fVar3 = FUN_004f9200(fVar2);
    *(uint *)((int)this_00 + 0x60) =
         CONCAT31((int3)((uint)*(undefined4 *)((int)this_00 + 0x60) >> 8),1);
    *(float *)((int)this_00 + 0x48) =
         (float)((fVar3 * (float10)fVar2 - (float10)fVar1) *
                 (float10)*(float *)((int)this_00 + 0x54) * (float10)*(float *)((int)this_00 + 0x44)
                + (float10)*(float *)((int)this_00 + 0x48));
    *(float *)((int)this_00 + 0x38) =
         (float)((float10)*(float *)((int)this_00 + 0x38) * fVar3 * (float10)fVar1);
    *(float *)((int)this_00 + 0x3c) =
         (float)((float10)*(float *)((int)this_00 + 0x3c) * fVar3 * (float10)fVar1);
  }
  if (*(char *)((int)this_00 + 0x34) == '\x01') {
    FUN_0053dca0(this_00,param_1);
    return;
  }
  FUN_0053d590((int)this_00,param_1);
  return;
}



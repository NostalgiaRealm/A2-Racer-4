
/* ==== FUN_004fbd50 @ 004fbd50 ==== 
 * signature: undefined __thiscall FUN_004fbd50(void * this, double * param_1)
 * body: 004fbd50-004fbe1d
 */

void __thiscall FUN_004fbd50(void *this,double *param_1)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(float *)((int)this + 0x74) != 0.0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x14) + 0xa4);
    if (*(int *)(iVar1 + 0x5c) * 0x1000000 < 0x8000000) {
      if (iVar1 == *(int *)(*(int *)((int)this + 0x14) + 0xac)) {
        pfVar2 = (float *)((int)this + 0x78);
      }
      else {
        local_10 = *(float *)((int)this + 0x58) - *(float *)((int)this + 0x28);
        local_c = *(float *)((int)this + 0x5c) - *(float *)((int)this + 0x2c);
        local_8 = *(float *)((int)this + 0x60) - *(float *)((int)this + 0x30);
        FUN_004f9780(&local_10);
        pfVar2 = &local_10;
      }
      fVar3 = FUN_004f43e0(iVar1,pfVar2);
      *(float *)((int)this + 0x94) = (float)fVar3;
      if (*(int **)((int)this + 0x90) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x90) + 8))((double)fVar3,0);
      }
      if (ABS((float)fVar3) <= *(float *)((int)this + 0x70)) {
        FUN_004f4410(iVar1,pfVar2,(double)(*(float *)((int)this + 0x74) * (float)*param_1));
      }
    }
  }
  return;
}



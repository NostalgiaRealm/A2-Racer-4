
/* ==== FUN_004bf5e0 @ 004bf5e0 ==== 
 * signature: undefined __thiscall FUN_004bf5e0(void * this, float * param_1, int param_2)
 * body: 004bf5e0-004bf74d
 */

void __thiscall FUN_004bf5e0(void *this,float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = (float *)*param_1;
  fVar1 = param_1[1];
  local_4 = param_1[1];
  pfVar3 = param_1 + 2;
  local_c = param_1[2];
  param_1 = local_10;
  local_8 = local_c;
  if (0 < param_2) {
    do {
      if (pfVar3[-2] < (float)local_10) {
        local_10 = (float *)pfVar3[-2];
      }
      if (pfVar3[-1] < local_4) {
        local_4 = pfVar3[-1];
      }
      if (*pfVar3 < local_8) {
        local_8 = *pfVar3;
      }
      if ((float)param_1 < pfVar3[-2]) {
        param_1 = (float *)pfVar3[-2];
      }
      if (fVar1 < pfVar3[-1]) {
        fVar1 = pfVar3[-1];
      }
      if (local_c < *pfVar3) {
        local_c = *pfVar3;
      }
      pfVar3 = pfVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(float *)((int)this + 0x20) = fVar1;
  *(float *)((int)this + 0x2c) = fVar1;
  *(float *)((int)this + 0x50) = fVar1;
  *(float *)((int)this + 0x5c) = fVar1;
  *(float **)((int)this + 4) = local_10;
  fVar1 = ((float)param_1 - (float)local_10) * 0.5;
  *(float *)((int)this + 0xc) = local_8;
  *(float *)((int)this + 0x14) = local_4;
  fVar2 = (local_c - local_8) * 0.5;
  *(float *)((int)this + 8) = local_4;
  *(float **)((int)this + 0x1c) = param_1;
  *(float **)((int)this + 0x10) = param_1;
  *(float **)((int)this + 0x28) = local_10;
  *(float **)((int)this + 0x34) = local_10;
  *(float *)((int)this + 0x18) = local_8;
  *(float *)((int)this + 0x24) = local_8;
  *(float *)((int)this + 0x30) = local_8;
  *(float *)((int)this + 0x3c) = local_c;
  *(float *)((int)this + 0x38) = local_4;
  *(float *)((int)this + 0x44) = local_4;
  *(float **)((int)this + 0x40) = param_1;
  *(float **)((int)this + 0x4c) = param_1;
  *(float *)((int)this + 0x48) = local_c;
  *(float *)((int)this + 0x54) = local_c;
  *(float **)((int)this + 0x58) = local_10;
  *(float *)((int)this + 0x60) = local_c;
  *(undefined4 *)this = 1;
  *(float *)((int)this + 0x68) = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  return;
}



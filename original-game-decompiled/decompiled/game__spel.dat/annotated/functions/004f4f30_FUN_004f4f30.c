
/* ==== FUN_004f4f30 @ 004f4f30 ==== 
 * signature: undefined4 __thiscall FUN_004f4f30(void * this, double param_1)
 * body: 004f4f30-004f51d5
 */

undefined4 __thiscall FUN_004f4f30(void *this,double param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)*(double *)((int)this + 0xb8) - *(float *)((int)this + 0x208);
  fVar3 = (float)*(double *)((int)this + 0xc0) - *(float *)((int)this + 0x20c);
  fVar2 = (float)*(double *)((int)this + 200) - *(float *)((int)this + 0x210);
  if ((fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 <= 0.0001) &&
     (fVar1 = *(float *)((int)this + 0x1e8) * (float)*(double *)((int)this + 0x108) +
              *(float *)((int)this + 0x1ec) * (float)*(double *)((int)this + 0x110) +
              *(float *)((int)this + 0x1f0) * (float)*(double *)((int)this + 0x118) +
              *(float *)((int)this + 500) * (float)*(double *)((int)this + 0x120),
     fVar1 = 1.0 - fVar1 * fVar1,
     (fVar1 + fVar1) * *(float *)((int)this + 4) * *(float *)((int)this + 4) <= 2.5e-05)) {
    if ((double)*(float *)(*(int *)((int)this + 0xc) + 0x98) <
        param_1 - *(double *)((int)this + 0x1d8)) {
      return 3;
    }
    return 2;
  }
  *(float *)((int)this + 0x1e8) = (float)*(double *)((int)this + 0x108);
  *(float *)((int)this + 0x1ec) = (float)*(double *)((int)this + 0x110);
  *(float *)((int)this + 0x1f0) = (float)*(double *)((int)this + 0x118);
  *(float *)((int)this + 500) = (float)*(double *)((int)this + 0x120);
  *(float *)((int)this + 0x208) = (float)*(double *)((int)this + 0xb8);
  *(float *)((int)this + 0x20c) = (float)*(double *)((int)this + 0xc0);
  *(float *)((int)this + 0x210) = (float)*(double *)((int)this + 200);
  *(double *)((int)this + 0x1d8) = param_1;
  fVar1 = (float)*(double *)((int)this + 0xb8) - *(float *)((int)this + 0x218);
  fVar3 = (float)*(double *)((int)this + 0xc0) - *(float *)((int)this + 0x21c);
  fVar2 = (float)*(double *)((int)this + 200) - *(float *)((int)this + 0x220);
  if ((0.010000001 < fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) ||
     (fVar1 = *(float *)((int)this + 0x1f8) * (float)*(double *)((int)this + 0xe8) +
              *(float *)((int)this + 0x1fc) * (float)*(double *)((int)this + 0xf0) +
              *(float *)((int)this + 0x200) * (float)*(double *)((int)this + 0xf8) +
              *(float *)((int)this + 0x204) * (float)*(double *)((int)this + 0x100),
     fVar1 = 1.0 - fVar1 * fVar1,
     0.040000003 < (fVar1 + fVar1) * *(float *)((int)this + 4) * *(float *)((int)this + 4))) {
    *(float *)((int)this + 0x1f8) = (float)*(double *)((int)this + 0xe8);
    *(float *)((int)this + 0x1fc) = (float)*(double *)((int)this + 0xf0);
    *(float *)((int)this + 0x200) = (float)*(double *)((int)this + 0xf8);
    *(float *)((int)this + 0x204) = (float)*(double *)((int)this + 0x100);
    *(float *)((int)this + 0x218) = (float)*(double *)((int)this + 0xb8);
    *(float *)((int)this + 0x21c) = (float)*(double *)((int)this + 0xc0);
    *(float *)((int)this + 0x220) = (float)*(double *)((int)this + 200);
    *(double *)((int)this + 0x1e0) = param_1;
  }
  else if (4.0 < param_1 - *(double *)((int)this + 0x1e0)) {
    return 3;
  }
  return 1;
}



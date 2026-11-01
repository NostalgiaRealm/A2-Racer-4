
/* ==== FUN_00502dc0 @ 00502dc0 ==== 
 * signature: undefined __thiscall FUN_00502dc0(void * this, double param_1)
 * body: 00502dc0-00502f51
 */

void __thiscall FUN_00502dc0(void *this,double param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float local_10;
  float local_c;
  float local_8;
  
  fVar1 = -(float)param_1;
  pfVar4 = *(float **)((int)this + 0x11c);
  local_c = pfVar4[1] * fVar1 + *(float *)((int)this + 0xcc);
  local_8 = pfVar4[2] * fVar1 + *(float *)((int)this + 0xd0);
  local_10 = *pfVar4 * fVar1 + *(float *)((int)this + 200);
  fVar5 = FUN_004f9680(&local_10);
  fVar1 = ABS(local_10 * *(float *)((int)this + 0xf0) +
              local_c * *(float *)((int)this + 0xf4) + local_8 * *(float *)((int)this + 0xf8));
  fVar6 = (float10)FUN_00559e50();
  fVar6 = fVar6 * fVar6;
  fVar6 = fVar6 * fVar6 * (float10)0.041666668 + ((float10)1.0 - fVar6 * (float10)0.5);
  fVar6 = (float10)*(float *)((int)this + 0xec) * (float10)*(float *)((int)this + 0xec) *
          (float10)fVar1 * (float10)fVar1 +
          (float10)*(float *)((int)this + 0x118) * (float10)*(float *)((int)this + 0x118) * fVar6 *
          fVar6;
  if (fVar6 < (float10)(float)fVar5 * (float10)(float)fVar5) {
    fVar1 = (float)SQRT(fVar6);
    fVar5 = (float10)FUN_00559e50();
    fVar5 = fVar5 * fVar5;
    pfVar4 = *(float **)((int)this + 0x11c);
    fVar5 = -(fVar5 * fVar5 * (float10)0.041666668 + ((float10)1.0 - fVar5 * (float10)0.5));
    fVar2 = pfVar4[1];
    fVar3 = pfVar4[2];
    *(float *)((int)this + 200) = (float)((float10)*pfVar4 * fVar5);
    *(float *)((int)this + 0xcc) = (float)((float10)fVar2 * fVar5);
    *(float *)((int)this + 0xd0) = (float)(fVar5 * (float10)fVar3);
    *(float *)((int)this + 200) = local_10 * fVar1 + *(float *)((int)this + 200);
    *(float *)((int)this + 0xcc) = local_c * fVar1 + *(float *)((int)this + 0xcc);
    *(float *)((int)this + 0xd0) = local_8 * fVar1 + *(float *)((int)this + 0xd0);
    return;
  }
  return;
}



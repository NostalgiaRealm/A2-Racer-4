
/* ==== FUN_00539600 @ 00539600 ==== 
 * signature: undefined __thiscall FUN_00539600(void * this, int param_1, undefined4 param_2)
 * body: 00539600-005396d5
 */

void __thiscall FUN_00539600(void *this,int param_1,undefined4 param_2)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)(double)CONCAT44(param_2,param_1);
  param_1 = 0x3f;
  *(float *)this = (float)(fVar3 * (float10)0.10000000149011612);
  fVar4 = fVar3 * (float10)0.10000000149011612 + fVar3 * (float10)0.8999999761581421;
  *(float *)((int)this + 4) = (float)fVar4;
  *(float *)((int)this + 0x108) = (float)fVar4;
  pfVar2 = (float *)((int)this + 0x104);
  do {
    fVar1 = (float)param_1;
    param_1 = param_1 + -1;
    *pfVar2 = fVar1 * 0.015625 * (*(float *)((int)this + 0x108) - *(float *)((int)this + 4)) +
              *(float *)((int)this + 4);
    pfVar2 = pfVar2 + -1;
  } while (-1 < param_1);
  fVar4 = (float10)*(float *)((int)this + 0x108) + fVar3;
  *(float *)((int)this + 0x10c) = (float)fVar4;
  fVar5 = fVar4 + fVar3 * (float10)0.30000001192092896;
  *(float *)((int)this + 0x110) = (float)fVar5;
  *(float *)((int)this + 0x114) =
       (float)SQRT((fVar5 - (float10)*(float *)((int)this + 4)) * (float10)19.62);
  *(float *)((int)this + 0x118) = (float)(fVar3 * (float10)0.009999999776482582);
  *(float *)((int)this + 0x11c) = (float)(fVar4 + fVar3 * (float10)2.5);
  *(float *)((int)this + 0x120) = (float)(fVar4 + fVar3 * (float10)20.0);
  *(float *)((int)this + 0x128) = (float)(fVar3 + fVar3);
  *(float *)((int)this + 0x124) = *(float *)((int)this + 4) * 0.1;
  return;
}



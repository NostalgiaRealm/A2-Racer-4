
/* ==== FUN_0053f4d0 @ 0053f4d0 ==== 
 * signature: undefined __thiscall FUN_0053f4d0(void * this, double param_1)
 * body: 0053f4d0-0053f68c
 */

void __thiscall FUN_0053f4d0(void *this,double param_1)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  int iVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar6 = FUN_0053f110(*(double *)((int)this + 0x58),*(double *)((int)this + 0x70),
                       *(double *)((int)this + 0x78),param_1 * *(double *)((int)this + 0x80));
  fVar7 = FUN_0053f110(*(double *)((int)this + 0x30),*(double *)((int)this + 0x48),
                       *(double *)((int)this + 0x50),param_1 * *(double *)((int)this + 0x88));
  pbVar3 = *(byte **)((int)this + 0x90);
  if ((*pbVar3 & 0xc) == 0) {
    fVar8 = fVar7 * (float10)*(double *)((int)this + 0x48);
    fVar1 = *(float *)((int)this + 4);
    fVar2 = *(float *)((int)this + 8);
    *(float *)(pbVar3 + 0x84) =
         (float)((float10)*(float *)this * fVar8 + (float10)*(float *)(pbVar3 + 0x84));
    *(float *)(pbVar3 + 0x88) = (float)((float10)fVar1 * fVar8 + (float10)*(float *)(pbVar3 + 0x88))
    ;
    *(float *)(pbVar3 + 0x8c) = (float)((float10)fVar2 * fVar8 + (float10)*(float *)(pbVar3 + 0x8c))
    ;
    fVar8 = (float10)(double)fVar6 * (float10)*(double *)((int)this + 0x70);
    iVar4 = *(int *)((int)this + 0x90);
    fVar1 = *(float *)((int)this + 0x14);
    fVar2 = *(float *)((int)this + 0x18);
    *(float *)(iVar4 + 0x74) =
         (float)((float10)*(float *)((int)this + 0x10) * fVar8 + (float10)*(float *)(iVar4 + 0x74));
    *(float *)(iVar4 + 0x78) = (float)((float10)fVar1 * fVar8 + (float10)*(float *)(iVar4 + 0x78));
    *(float *)(iVar4 + 0x7c) = (float)((float10)fVar2 * fVar8 + (float10)*(float *)(iVar4 + 0x7c));
  }
  fVar1 = *(float *)this;
  iVar4 = *(int *)((int)this + 0x94);
  *(float *)this = fVar1 * -1.0;
  fVar2 = *(float *)((int)this + 4) * -1.0;
  *(float *)((int)this + 4) = fVar2;
  fVar5 = *(float *)((int)this + 8) * -1.0;
  *(float *)((int)this + 8) = fVar5;
  fVar7 = fVar7 * (float10)*(double *)((int)this + 0x50);
  *(float *)(iVar4 + 0x84) =
       (float)((float10)(fVar1 * -1.0) * fVar7 + (float10)*(float *)(iVar4 + 0x84));
  *(float *)(iVar4 + 0x88) = (float)((float10)fVar2 * fVar7 + (float10)*(float *)(iVar4 + 0x88));
  *(float *)(iVar4 + 0x8c) = (float)((float10)fVar5 * fVar7 + (float10)*(float *)(iVar4 + 0x8c));
  fVar6 = (float10)(double)fVar6 * (float10)*(double *)((int)this + 0x78);
  iVar4 = *(int *)((int)this + 0x94);
  fVar1 = *(float *)((int)this + 0x24);
  fVar2 = *(float *)((int)this + 0x28);
  *(float *)(iVar4 + 0x74) =
       (float)((float10)*(float *)((int)this + 0x20) * fVar6 + (float10)*(float *)(iVar4 + 0x74));
  *(float *)(iVar4 + 0x78) = (float)((float10)fVar1 * fVar6 + (float10)*(float *)(iVar4 + 0x78));
  *(float *)(iVar4 + 0x7c) = (float)((float10)fVar2 * fVar6 + (float10)*(float *)(iVar4 + 0x7c));
  return;
}



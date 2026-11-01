
/* ==== FUN_0051f7b0 @ 0051f7b0 ==== 
 * signature: undefined __thiscall FUN_0051f7b0(void * this, int * param_1, int param_2)
 * body: 0051f7b0-0051f974
 */

void __thiscall FUN_0051f7b0(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  
  puVar1 = (uint *)(param_2 + 4);
  pfVar9 = (float *)((*puVar1 & 0xffff) * 0x10 + *param_1 + (int)param_1);
  pfVar10 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)puVar1 & 0xc)) + (int)puVar1) &
                      0xffff) * 0x10 + *param_1 + (int)param_1);
  pfVar11 = (float *)((*(uint *)(*(int *)(&DAT_005b99cc + ((uint)puVar1 & 0xc)) + (int)puVar1) &
                      0xffff) * 0x10 + *param_1 + (int)param_1);
  fVar2 = *pfVar11 - *pfVar9;
  fVar8 = pfVar11[1] - pfVar9[1];
  fVar6 = pfVar11[2] - pfVar9[2];
  fVar3 = *pfVar10 - *pfVar9;
  fVar7 = pfVar10[1] - pfVar9[1];
  fVar4 = pfVar10[2] - pfVar9[2];
  fVar5 = fVar7 * fVar6 - fVar4 * fVar8;
  fVar6 = fVar4 * fVar2 - fVar3 * fVar6;
  fVar2 = fVar3 * fVar8 - fVar7 * fVar2;
  fVar4 = fVar6 * pfVar9[1] + fVar2 * pfVar9[2] + fVar5 * *pfVar9;
  *(double *)((int)this + 0x10) =
       (double)(fVar5 * fVar5 + fVar6 * fVar6 + fVar2 * fVar2 + (float)*(double *)((int)this + 0x10)
               );
  *(double *)((int)this + 0x18) = (double)(fVar4 + (float)*(double *)((int)this + 0x18));
  fVar4 = fVar4 * 0.25;
  fVar6 = pfVar9[1] * fVar4 + *(float *)((int)this + 4);
  fVar5 = pfVar9[2] * fVar4 + *(float *)((int)this + 8);
  *(float *)this = *pfVar9 * fVar4 + *(float *)this;
  *(float *)((int)this + 4) = fVar6;
  *(float *)((int)this + 8) = fVar5;
  fVar6 = fVar6 + pfVar10[1] * fVar4;
  fVar5 = pfVar10[2] * fVar4 + fVar5;
  *(float *)this = *pfVar10 * fVar4 + *(float *)this;
  *(float *)((int)this + 4) = fVar6;
  *(float *)((int)this + 8) = fVar5;
  fVar2 = pfVar11[1];
  fVar3 = pfVar11[2];
  *(float *)this = *pfVar11 * fVar4 + *(float *)this;
  *(float *)((int)this + 4) = fVar2 * fVar4 + fVar6;
  *(float *)((int)this + 8) = fVar3 * fVar4 + fVar5;
  return;
}



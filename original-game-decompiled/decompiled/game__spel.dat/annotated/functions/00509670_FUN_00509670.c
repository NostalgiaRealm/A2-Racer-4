
/* ==== FUN_00509670 @ 00509670 ==== 
 * signature: undefined4 * __thiscall FUN_00509670(void * this, uint * param_1, undefined4 param_2, int * param_3, int * param_4)
 * body: 00509670-005097ac
 */

undefined4 * __thiscall
FUN_00509670(void *this,uint *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  double local_20;
  double local_18;
  double local_10;
  
  *(uint **)((int)this + 0x88) = param_1;
  *(undefined4 *)((int)this + 0x8c) = param_2;
  pfVar8 = (float *)((*param_1 & 0xffff) * 0x10 + *param_3);
  pfVar9 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_1 & 0xc)) + (int)param_1) &
                     0xffff) * 0x10 + *param_3);
  local_10 = (double)(pfVar9[2] - pfVar8[2]);
  local_20 = (double)(*pfVar9 - *pfVar8);
  local_18 = (double)(pfVar9[1] - pfVar8[1]);
  FUN_00509220(&local_20,(int)param_3,(int)param_4,(double *)((int)this + 0x48));
  *(int **)((int)this + 0x90) = param_3;
  *(int **)((int)this + 0x94) = param_4;
  FUN_00509120(*(uint **)((int)this + 0x88),param_3,(int)param_4,(double *)((int)this + 8));
  FUN_00509120((uint *)(*(int *)(&DAT_005b99bc + (*(uint *)((int)this + 0x88) & 0xc)) +
                       *(uint *)((int)this + 0x88)),param_3,(int)param_4,
               (double *)((int)this + 0x28));
  puVar5 = *(uint **)((int)this + 0x8c);
  iVar6 = *param_4;
  uVar7 = *(uint *)(*(int *)(&DAT_005b99bc + ((uint)puVar5 & 0xc)) + (int)puVar5);
  pfVar8 = (float *)((*puVar5 & 0xffff) * 0x10 + iVar6);
  *(float **)this = pfVar8;
  pfVar9 = (float *)((uVar7 & 0xffff) * 0x10 + iVar6);
  *(float **)((int)this + 4) = pfVar9;
  fVar1 = pfVar9[1];
  fVar2 = pfVar8[1];
  fVar3 = *pfVar9;
  fVar4 = *pfVar8;
  *(double *)((int)this + 0x78) = (double)(pfVar9[2] - pfVar8[2]);
  *(double *)((int)this + 0x68) = (double)(fVar3 - fVar4);
  *(double *)((int)this + 0x70) = (double)(fVar1 - fVar2);
  FUN_004f99d0((void *)((int)this + 0x98),(double *)((int)this + 0x48),(double *)((int)this + 0x68))
  ;
  return this;
}




/* ==== FUN_00509c90 @ 00509c90 ==== 
 * signature: undefined __cdecl FUN_00509c90(uint * param_1, int * param_2, double * param_3)
 * body: 00509c90-00509d59
 */

void __cdecl FUN_00509c90(uint *param_1,int *param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  
  iVar3 = *param_2;
  iVar8 = (*param_1 & 0xffff) * 0x10 + iVar3;
  fVar1 = *(float *)(iVar8 + 4 + (int)param_2);
  fVar2 = *(float *)((int)param_2 + iVar8 + 8);
  pfVar9 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_1 & 0xc)) + (int)param_1) &
                     0xffff) * 0x10 + iVar3 + (int)param_2);
  pfVar10 = (float *)((*(uint *)(*(int *)(&DAT_005b99cc + ((uint)param_1 & 0xc)) + (int)param_1) &
                      0xffff) * 0x10 + iVar3 + (int)param_2);
  fVar4 = *pfVar10 - *(float *)(iVar8 + (int)param_2);
  fVar6 = pfVar10[1] - fVar1;
  fVar7 = pfVar10[2] - fVar2;
  fVar5 = *pfVar9 - *(float *)(iVar8 + (int)param_2);
  fVar1 = pfVar9[1] - fVar1;
  fVar2 = pfVar9[2] - fVar2;
  *param_3 = (double)(fVar1 * fVar7 - fVar2 * fVar6);
  param_3[1] = (double)(fVar2 * fVar4 - fVar5 * fVar7);
  param_3[2] = (double)(fVar5 * fVar6 - fVar1 * fVar4);
  return;
}



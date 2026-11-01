
/* ==== FUN_0050c4e0 @ 0050c4e0 ==== 
 * signature: undefined __stdcall FUN_0050c4e0(void * param_1, void * param_2)
 * body: 0050c4e0-0050c64f
 */

void FUN_0050c4e0(void *param_1,void *param_2)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float10 fVar9;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  iVar3 = *(int *)((int)param_1 + 0x18);
  iVar4 = *(int *)((int)param_1 + 0xa4);
  pdVar1 = (double *)(iVar3 + 0xc0);
  pdVar2 = (double *)(iVar4 + 0x188);
  dVar8 = *pdVar1;
  dVar7 = *pdVar1;
  dVar6 = *pdVar1;
  iVar5 = *(int *)((int)param_2 + 0xa4);
  local_38 = (float)((float10)*(double *)(iVar5 + 0x188) - (float10)*pdVar2);
  local_34 = (float)((float10)*(double *)(iVar5 + 400) - (float10)*(double *)(iVar4 + 400));
  local_30 = (float)(*(double *)(iVar5 + 0x198) - *(double *)(iVar4 + 0x198));
  FUN_004f9780(&local_38);
  fVar9 = FUN_004f9470((double *)(iVar3 + 0xd0));
  fVar9 = (fVar9 + (float10)9.8100004196167) * (float10)dVar6;
  if (*(int *)(iVar4 + 0x5c) * 0x1000000 < 0x8000000) {
    local_20 = -(*(float *)(iVar4 + 0x20) * (float)fVar9);
    local_28 = local_38 * local_20;
    local_24 = local_34 * local_20;
    local_20 = local_30 * local_20;
    FUN_004f3260(param_1,pdVar2,&local_28);
    local_18 = (float)dVar7;
    local_14 = 0.0;
    local_10 = 0.0;
    FUN_004f3220(param_1,&local_18);
  }
  if (*(int *)(iVar5 + 0x5c) * 0x1000000 < 0x8000000) {
    local_10 = *(float *)(iVar5 + 0x20) * (float)fVar9;
    local_18 = local_38 * local_10;
    local_14 = local_34 * local_10;
    local_10 = local_30 * local_10;
    FUN_004f3260(param_2,pdVar2,&local_18);
    local_28 = (float)dVar8;
    local_24 = 0.0;
    local_20 = 0.0;
    FUN_004f3220(param_2,&local_28);
  }
  return;
}



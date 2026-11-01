
/* ==== FUN_004ff620 @ 004ff620 ==== 
 * signature: undefined __thiscall FUN_004ff620(void * this, int * param_1, void * param_2)
 * body: 004ff620-004ff72d
 */

void __thiscall FUN_004ff620(void *this,int *param_1,void *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_0050bce0(param_2,param_1,&local_28,&local_3c);
  local_10 = local_3c * 0.5;
  local_18 = local_28 + local_10;
  local_14 = local_24 + local_10;
  local_10 = local_20 + local_10;
  iVar5 = FUN_004fec00(this,&local_18,local_3c);
  if (iVar5 != 0) {
    uVar6 = (uint)*(ushort *)((int)param_1 + 0x22);
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      iVar5 = *(int *)(*(int *)(param_1[9] + uVar6 * 4) + 0x24);
      iVar1 = *(int *)(iVar5 + 0xa4);
      local_38 = (float)*(double *)(iVar1 + 0x188);
      local_34 = (float)*(double *)(iVar1 + 400);
      local_30 = (float)*(double *)(iVar1 + 0x198);
      fVar2 = *(float *)(iVar1 + 4) + *(float *)((int)this + 0x10);
      fVar3 = local_34 - *(float *)((int)this + 4);
      fVar4 = local_30 - *(float *)((int)this + 8);
      if ((local_38 - *(float *)this) * (local_38 - *(float *)this) + fVar4 * fVar4 + fVar3 * fVar3
          < fVar2 * fVar2) {
        FUN_004ff590(this,iVar5);
      }
    }
    uVar6 = (uint)*(ushort *)((int)param_1 + 0x1a);
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      FUN_004ff620(this,*(int **)(param_1[7] + uVar6 * 4),param_2);
    }
  }
  return;
}



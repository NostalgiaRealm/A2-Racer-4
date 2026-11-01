
/* ==== FUN_00546db0 @ 00546db0 ==== 
 * signature: undefined __thiscall FUN_00546db0(void * this, uint * param_1, uint * param_2, int * param_3, int * param_4)
 * body: 00546db0-0054710b
 */

void __thiscall FUN_00546db0(void *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  uint *local_114;
  uint *local_110;
  uint *local_10c;
  float local_108;
  uint local_104;
  float local_100;
  uint local_fc;
  double local_f8 [4];
  double local_d8 [4];
  undefined4 local_b8 [46];
  
  FUN_00509670(local_b8,param_1,param_2,param_3,param_4);
  FUN_00509870(local_b8,&local_124);
  if ((((uint)local_11c | (uint)local_118) & 0x80000000) == 0) {
    if (local_124 < 0.0) {
      FUN_00548710(this,param_1,param_2,param_3,param_4);
      return;
    }
    if (0.0 <= local_120) {
      FUN_00547110(this,(int *)param_1,(int *)param_2,local_b8,&local_124,(int)param_3,(int)param_4)
      ;
      return;
    }
    FUN_00548710(this,(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_1 & 0xc)) + (int)param_1),
                 param_2,param_3,param_4);
    return;
  }
  if ((((uint)local_120 | (uint)local_124) & 0x80000000) == 0) {
    iVar1 = *(int *)this;
    if (param_4[4] != iVar1 + 0x18 + (*(uint *)(iVar1 + 0x14) >> 8 & 3) * 0x1c) {
      *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) ^ 0x100;
    }
    if (0.0 <= local_11c) {
      FUN_00548710(this,(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2),
                   param_1,param_4,param_3);
      return;
    }
    FUN_00548710(this,param_2,param_1,param_4,param_3);
    return;
  }
  if (local_120 <= local_124) {
    local_110 = param_1;
    local_128 = (uint *)(*(int *)(&DAT_005b99bc + ((uint)param_1 & 0xc)) + (int)param_1);
  }
  else {
    local_128 = param_1;
    local_110 = (uint *)(*(int *)(&DAT_005b99bc + ((uint)param_1 & 0xc)) + (int)param_1);
  }
  if (local_118 <= local_11c) {
    local_10c = param_2;
    local_114 = (uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2);
  }
  else {
    local_114 = param_2;
    local_10c = (uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2);
  }
  FUN_00509120(local_128,param_3,(int)param_4,local_f8);
  FUN_00509420((int *)param_4[1],param_2,local_f8,&local_108);
  puVar2 = local_114;
  if (((local_104 | (uint)local_108) & 0x80000000) != 0) {
    FUN_00509120(local_114,param_4,(int)param_3,local_d8);
    FUN_00509420((int *)param_3[1],param_1,local_d8,&local_100);
    if (((local_fc | (uint)local_100) & 0x80000000) == 0) {
      iVar1 = *(int *)this;
      if (param_4[4] != iVar1 + 0x18 + (*(uint *)(iVar1 + 0x14) >> 8 & 3) * 0x1c) {
        *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) ^ 0x100;
      }
      FUN_00548710(this,puVar2,param_1,param_4,param_3);
      return;
    }
    puVar3 = local_10c;
    if ((0.0 <= local_108 * local_11c) && (puVar3 = puVar2, local_100 * local_124 < 0.0)) {
      iVar1 = *(int *)this;
      if (param_4[4] != iVar1 + 0x18 + (*(uint *)(iVar1 + 0x14) >> 8 & 3) * 0x1c) {
        *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) ^ 0x100;
      }
      FUN_00547cc0(this,puVar2,local_110,param_4,param_3);
      return;
    }
    FUN_00547cc0(this,local_128,puVar3,param_3,param_4);
    return;
  }
  FUN_00548710(this,local_128,param_2,param_3,param_4);
  return;
}



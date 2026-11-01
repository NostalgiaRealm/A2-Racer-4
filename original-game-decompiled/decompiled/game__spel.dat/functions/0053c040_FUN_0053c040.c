
/* ==== FUN_0053c040 @ 0053c040 ==== 
 * signature: undefined4 __thiscall FUN_0053c040(void * this, uint * param_1, uint * param_2, int * param_3, int * param_4)
 * body: 0053c040-0053c58e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0053c040(void *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  float10 fVar10;
  int *local_154;
  int local_150;
  int local_14c;
  int local_148;
  double local_140;
  float local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint *local_124 [9];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_c0 [47];
  
  local_140 = 1e+101;
  local_14c = 3;
  puVar9 = param_1;
  do {
    local_154 = (int *)0x3;
    puVar7 = param_2;
    do {
      FUN_0050a110(puVar7,param_4,&local_e0);
      FUN_0050a110(puVar9,param_3,&local_100);
      dVar4 = (local_100 - local_e0) * (local_100 - local_e0) +
              (local_f8 - local_d8) * (local_f8 - local_d8) +
              (local_f0 - local_d0) * (local_f0 - local_d0);
      if (dVar4 < local_140) {
        iVar2 = param_3[4];
        *(uint **)(iVar2 + 0x14) = puVar9;
        *(undefined2 *)(iVar2 + 0x1a) = 0;
        iVar2 = param_4[4];
        *(uint **)(iVar2 + 0x14) = puVar7;
        *(undefined2 *)(iVar2 + 0x1a) = 0;
        local_140 = dVar4;
      }
      puVar7 = (uint *)((int)puVar7 + *(int *)(&DAT_005b99bc + ((uint)puVar7 & 0xc)));
      local_154 = (int *)((int)local_154 + -1);
    } while (local_154 != (int *)0x0);
    puVar9 = (uint *)((int)puVar9 + *(int *)(&DAT_005b99bc + ((uint)puVar9 & 0xc)));
    local_14c = local_14c + -1;
  } while (local_14c != 0);
  local_124[7] = (uint *)param_3;
  local_124[8] = (uint *)param_4;
  local_124[3] = (uint *)param_4;
  local_124[4] = (uint *)param_3;
  local_124[5] = param_1;
  local_124[6] = param_2;
  local_124[0] = param_2;
  local_124[1] = param_1;
  local_154 = (int *)0x0;
  do {
    iVar2 = *(int *)((int)local_124 + (int)local_154 + 0xc);
    puVar9 = *(uint **)((int)local_124 + (int)local_154);
    FUN_00509c20(puVar9,*(int **)(iVar2 + 4),&local_100);
    puVar7 = *(uint **)((int)local_124 + (int)local_154 + 0x14);
    local_150 = 3;
    piVar3 = *(int **)((int)local_124 + (int)local_154 + 0x1c);
    do {
      FUN_00509120(puVar7,piVar3,iVar2,&local_e0);
      FUN_005094e0(*(int **)(iVar2 + 4),(uint)puVar9,&local_e0,(int)&local_134);
      if ((((local_130 | local_12c | (uint)local_134) & 0x80000000) == 0) &&
         (dVar4 = local_e0 * local_100 + local_f8 * local_d8 + local_f0 * local_d0 + local_e8,
         dVar4 = dVar4 * dVar4, dVar4 * 1.000000000001 < local_140)) {
        iVar8 = piVar3[4];
        *(uint **)(iVar8 + 0x14) = puVar7;
        *(undefined2 *)(iVar8 + 0x1a) = 0;
        iVar8 = *(int *)(iVar2 + 0x10);
        *(uint **)(iVar8 + 0x14) = puVar9;
        *(undefined2 *)(iVar8 + 0x1a) = 2;
        local_140 = dVar4;
      }
      puVar7 = (uint *)((int)puVar7 + *(int *)(&DAT_005b99bc + ((uint)puVar7 & 0xc)));
      local_150 = local_150 + -1;
    } while (local_150 != 0);
    local_154 = (int *)((int)local_154 + 4);
  } while ((int)local_154 < 8);
  local_154 = (int *)0x0;
  do {
    piVar3 = *(int **)((int)local_124 + (int)local_154 + 0xc);
    local_124[2] = *(uint **)((int)local_124 + (int)local_154 + 0x14);
    puVar9 = *(uint **)((int)local_124 + (int)local_154);
    iVar2 = *(int *)((int)local_124 + (int)local_154 + 0x1c);
    local_148 = 3;
    do {
      FUN_00509120(puVar9,piVar3,iVar2,&local_100);
      local_14c = 3;
      puVar7 = local_124[2];
      do {
        FUN_00509420(*(int **)(iVar2 + 4),puVar7,&local_100,&local_134);
        if ((((local_130 | (uint)local_134) & 0x80000000) == 0) &&
           (fVar10 = FUN_00509d60(*(int **)(iVar2 + 4),puVar7,&local_100),
           fVar10 * (float10)1.000000000001 < (float10)local_140)) {
          iVar8 = *(int *)(iVar2 + 0x10);
          local_140 = (double)fVar10;
          *(uint **)(iVar8 + 0x14) = puVar7;
          *(undefined2 *)(iVar8 + 0x1a) = 1;
          iVar8 = piVar3[4];
          *(uint **)(iVar8 + 0x14) = puVar9;
          *(undefined2 *)(iVar8 + 0x1a) = 0;
        }
        puVar7 = (uint *)((int)puVar7 + *(int *)(&DAT_005b99bc + ((uint)puVar7 & 0xc)));
        local_14c = local_14c + -1;
      } while (local_14c != 0);
      puVar9 = (uint *)((int)puVar9 + *(int *)(&DAT_005b99bc + ((uint)puVar9 & 0xc)));
      local_148 = local_148 + -1;
    } while (local_148 != 0);
    local_154 = (int *)((int)local_154 + 4);
  } while ((int)local_154 < 8);
  local_150 = 3;
  do {
    local_148 = 3;
    puVar9 = param_2;
    do {
      FUN_00509670(local_c0,param_1,puVar9,param_3,param_4);
      FUN_00509870(local_c0,&local_134);
      if (((((local_130 | (uint)local_134) & 0x80000000) == 0) &&
          (((local_12c | local_128) & 0x80000000) == 0)) &&
         (fVar10 = FUN_005097b0(local_c0), fVar10 * (float10)1.000000000001 < (float10)local_140)) {
        local_140 = (double)fVar10;
        iVar2 = param_3[4];
        *(uint **)(iVar2 + 0x14) = param_1;
        *(undefined2 *)(iVar2 + 0x1a) = 1;
        iVar2 = param_4[4];
        *(uint **)(iVar2 + 0x14) = puVar9;
        *(undefined2 *)(iVar2 + 0x1a) = 1;
      }
      puVar9 = (uint *)((int)puVar9 + *(int *)(&DAT_005b99bc + ((uint)puVar9 & 0xc)));
      local_148 = local_148 + -1;
    } while (local_148 != 0);
    param_1 = (uint *)((int)param_1 + *(int *)(&DAT_005b99bc + ((uint)param_1 & 0xc)));
    local_150 = local_150 + -1;
  } while (local_150 != 0);
  local_154 = param_4;
  iVar2 = param_4[4];
  iVar8 = param_3[4];
  iVar6 = iVar2;
  if ((*(short *)(iVar2 + 0x1a) == 0) && (*(short *)(iVar8 + 0x1a) != 0)) {
    local_154 = param_3;
    iVar6 = iVar8;
    iVar8 = iVar2;
    param_3 = param_4;
  }
  iVar2 = *(int *)this;
  if (param_3[4] != iVar2 + 0x18 + (*(uint *)(iVar2 + 0x14) >> 8 & 3) * 0x1c) {
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) ^ 0x100;
  }
  puVar9 = *(uint **)(iVar8 + 0x14);
  puVar7 = *(uint **)(iVar6 + 0x14);
  if (*(short *)(iVar8 + 0x1a) == 0) {
    sVar1 = *(short *)(iVar6 + 0x1a);
    if (sVar1 == 0) {
      uVar5 = FUN_00547cc0(this,puVar9,puVar7,param_3,local_154);
      return uVar5;
    }
    if (sVar1 == 1) {
      uVar5 = FUN_00548710(this,puVar9,puVar7,param_3,local_154);
      return uVar5;
    }
    if (sVar1 == 2) {
      uVar5 = FUN_005465d0(this,puVar9,puVar7,param_3,local_154);
      return uVar5;
    }
    _DAT_00000000 = 0;
    return 0;
  }
  if (*(short *)(iVar8 + 0x1a) != 1) {
    _DAT_00000000 = 0;
    return 0;
  }
  if (*(short *)(iVar6 + 0x1a) == 1) {
    uVar5 = FUN_00546db0(this,puVar9,puVar7,param_3,local_154);
    return uVar5;
  }
  _DAT_00000000 = 0;
  return 0;
}



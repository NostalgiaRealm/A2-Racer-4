
/* ==== FUN_0051f420 @ 0051f420 ==== 
 * signature: undefined __thiscall FUN_0051f420(void * this, int * param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 0051f420-0051f7aa
 */

void __thiscall
FUN_0051f420(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint *puVar15;
  float10 fVar16;
  double local_a0;
  double local_90;
  int local_88;
  double local_80;
  double local_78;
  double local_70;
  float local_68 [4];
  float local_58 [4];
  double local_48 [4];
  double local_28 [4];
  
  puVar15 = (uint *)(param_2 + 4);
  FUN_00509c90(puVar15,param_1,local_28);
  FUN_004f9870(local_28);
  pdVar1 = local_28 + param_4;
  if (ABS(*pdVar1) <= ABS(local_28[param_5])) {
    bVar14 = true;
    if (ABS(local_28[param_5]) <= 1e-12) {
      local_a0 = 0.0;
    }
    else {
      local_a0 = (*pdVar1 * -0.5) / local_28[param_5];
    }
    local_90 = 0.0;
  }
  else {
    bVar14 = false;
    local_a0 = 0.0;
    local_90 = (local_28[param_5] * 0.5) / *pdVar1;
  }
  local_80 = 0.0;
  local_78 = 0.0;
  local_70 = 0.0;
  local_88 = 3;
  do {
    iVar3 = *param_1;
    uVar4 = *(uint *)(*(int *)(&DAT_005b99bc + ((uint)puVar15 & 0xc)) + (int)puVar15);
    FUN_004fac20(*(void **)this,(float *)((*puVar15 & 0xffff) * 0x10 + iVar3 + (int)param_1),
                 local_68);
    FUN_004fac20(*(void **)this,(float *)((uVar4 & 0xffff) * 0x10 + iVar3 + (int)param_1),local_58);
    local_48[0] = (double)(local_58[0] - local_68[0]);
    local_48[1] = (double)(local_58[1] - local_68[1]);
    local_48[2] = (double)(local_58[2] - local_68[2]);
    dVar2 = local_48[param_3];
    fVar16 = FUN_004f9470(local_48);
    if (fVar16 * (float10)1e-12 <= (float10)ABS(dVar2)) {
      dVar2 = local_48[param_4] / local_48[param_3];
      dVar5 = (double)local_68[param_4] - (double)local_68[param_3] * dVar2;
      if (bVar14) {
        dVar6 = dVar5 * dVar5 * local_a0;
        dVar5 = dVar5 * dVar2 * local_a0;
        dVar5 = dVar5 + dVar5;
        dVar7 = dVar2 * dVar2 * local_a0;
      }
      else {
        dVar7 = local_48[param_5] / local_48[param_3];
        dVar9 = (double)local_68[param_5] - (double)local_68[param_3] * dVar7;
        dVar6 = (dVar9 * local_90 + dVar5) * dVar9;
        dVar8 = dVar9 * dVar7 * local_90;
        dVar5 = dVar9 * dVar2 + dVar7 * dVar5 + dVar8 + dVar8;
        dVar7 = (dVar7 * local_90 + dVar2) * dVar7;
      }
      dVar12 = (double)local_68[param_3];
      dVar10 = (double)local_58[param_3];
      dVar9 = (dVar10 * dVar10 - dVar12 * dVar12) * 0.5;
      dVar8 = dVar10 * dVar10 * dVar10;
      dVar11 = dVar12 * dVar12 * dVar12;
      dVar2 = (dVar8 - dVar11) * 0.3333333333333333;
      dVar8 = dVar8 * dVar10;
      dVar11 = dVar11 * dVar12;
      dVar13 = (dVar8 - dVar11) * 0.25;
      local_80 = dVar9 * dVar5 + dVar2 * dVar7 + (dVar10 - dVar12) * dVar6 + local_80;
      local_78 = dVar9 * dVar6 + dVar2 * dVar5 + dVar13 * dVar7 + local_78;
      local_70 = dVar2 * dVar6 +
                 dVar13 * dVar5 + (dVar8 * dVar10 - dVar11 * dVar12) * 0.20000000298023224 * dVar7 +
                 local_70;
    }
    puVar15 = puVar15 + 1;
    local_88 = local_88 + -1;
  } while (local_88 != 0);
  *(double *)((int)this + 8) = local_80 + *(double *)((int)this + 8);
  *(double *)((int)this + 0x10) = local_78 + *(double *)((int)this + 0x10);
  *(double *)((int)this + 0x18) = local_70 + *(double *)((int)this + 0x18);
  return;
}



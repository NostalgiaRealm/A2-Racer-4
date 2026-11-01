
/* ==== FUN_005127e0 @ 005127e0 ==== 
 * signature: undefined4 * __thiscall FUN_005127e0(void * this, int param_1)
 * body: 005127e0-00513145
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005127e0(void *this,int param_1)

{
  float *pfVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  double *pdVar13;
  ushort *puVar14;
  int iVar15;
  float10 fVar16;
  longlong lVar17;
  undefined8 local_120;
  undefined8 local_118;
  void *local_10c;
  undefined4 *local_108;
  int local_104;
  int local_100;
  ushort *local_fc;
  ushort *local_f8;
  ushort *local_f4;
  ushort *local_f0;
  ushort *local_ec [6];
  float local_d4 [3];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_ac;
  double local_a4;
  double local_9c;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_2c [3];
  void *local_14;
  code *pcStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_00573f3a;
  local_14 = ExceptionList;
  if (*(short *)(param_1 + 2) == 1) {
    return (undefined4 *)**(undefined4 **)(param_1 + 4);
  }
  pfVar1 = (float *)((int)this + 0x48);
  ExceptionList = &local_14;
  local_10c = this;
  FUN_00512690(param_1,(float *)((int)this + 0x38),pfVar1);
  FUN_004f93d0(&local_ac,pfVar1,(float *)((int)this + 0x38),0.5);
  local_120 = (double)(*(float *)((int)this + 0x4c) - (float)local_a4);
  local_118 = (double)(*(float *)((int)this + 0x50) - (float)local_9c);
  local_4c = (double)(*pfVar1 - (float)local_ac);
  local_44 = local_120;
  local_3c = local_118;
  fVar16 = FUN_004f9470(&local_4c);
  local_120 = (double)fVar16;
  local_118 = _DAT_005b9e88 * local_120;
  puVar7 = operator_new(0x40);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = puVar7;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  local_108 = puVar7;
  if (*(ushort *)((int)this + 0x94) <= *(ushort *)((int)this + 0x96)) {
    FUN_004f6060((ushort *)((int)this + 0x94));
  }
  *(undefined4 **)(*(int *)((int)this + 0x98) + (uint)*(ushort *)((int)this + 0x96) * 4) = puVar7;
  *(short *)((int)this + 0x96) = *(short *)((int)this + 0x96) + 1;
  puVar7[10] = (ushort *)local_120;
  *puVar7 = 0;
  puVar7[0xb] = local_120._4_4_;
  pdVar13 = &local_ac;
  puVar8 = puVar7 + 2;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar8 = *(undefined4 *)pdVar13;
    pdVar13 = (double *)((int)pdVar13 + 4);
    puVar8 = puVar8 + 1;
  }
  puVar7[0xd] = 0;
  lVar17 = __ftol();
  *(char *)(puVar7 + 0xc) = (char)lVar17 + '\x01';
  lVar17 = __ftol();
  *(char *)((int)puVar7 + 0x31) = (char)lVar17 + '\x01';
  lVar17 = __ftol();
  *(char *)((int)puVar7 + 0x32) = (char)lVar17 + '\x01';
  if (*(short *)(param_1 + 2) == 2) {
    local_118 = 0.0;
    local_120 = 0.0;
    local_c = 1;
    uVar9 = **(undefined4 **)(param_1 + 4);
    FUN_004f6060((ushort *)&local_118);
    uVar11 = local_118._2_4_;
    *(undefined4 *)(local_118._4_4_ + (uVar11 & 0xffff) * 4) = uVar9;
    local_118._0_4_ = (undefined2 *)CONCAT22(local_118._2_2_ + 1,(ushort)local_118);
    uVar9 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
    if ((ushort)local_120 <= local_120._2_2_) {
      FUN_004f6060((ushort *)&local_120);
    }
    pvVar12 = local_10c;
    uVar11 = local_120._2_4_;
    *(undefined4 *)(local_120._4_4_ + (uVar11 & 0xffff) * 4) = uVar9;
    local_120._0_4_ = (ushort *)CONCAT22(local_120._2_2_ + 1,(ushort)local_120);
    puVar8 = FUN_005127e0(local_10c,(int)&local_118);
    puVar7[0xe] = puVar8;
    puVar8 = FUN_005127e0(pvVar12,(int)&local_120);
    puVar7[0xf] = puVar8;
    *(int *)((int)pvVar12 + 8) = *(int *)((int)pvVar12 + 8) + 1;
    local_c = local_c & 0xffffff00;
    FUN_0050bd30((undefined2 *)&local_120);
    local_c = 0xffffffff;
    FUN_0050bd30((undefined2 *)&local_118);
    ExceptionList = local_14;
    return puVar7;
  }
  local_2c[0] = (double)(*(float *)((int)local_10c + 0x48) - *(float *)((int)local_10c + 0x38));
  local_2c[1] = (double)(*(float *)((int)local_10c + 0x4c) - *(float *)((int)local_10c + 0x3c));
  local_2c[2] = (double)(*(float *)((int)local_10c + 0x50) - *(float *)((int)local_10c + 0x40));
  local_f0 = operator_new(8);
  local_c = 2;
  local_120._0_4_ = local_f0;
  if (local_f0 == (ushort *)0x0) {
    local_f0 = (ushort *)0x0;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 2);
    local_f0[1] = 0;
    *local_f0 = uVar2;
    if (uVar2 == 0) {
      local_f0[2] = 0;
      local_f0[3] = 0;
    }
    else {
      uVar9 = FUN_004f5a90((uint)uVar2 << 2);
      *(undefined4 *)(local_f0 + 2) = uVar9;
    }
  }
  local_c = 0xffffffff;
  local_ec[3] = local_f0;
  local_f8 = operator_new(8);
  local_c = 3;
  local_120._0_4_ = local_f8;
  if (local_f8 == (ushort *)0x0) {
    local_f8 = (ushort *)0x0;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 2);
    local_f8[1] = 0;
    *local_f8 = uVar2;
    if (uVar2 == 0) {
      local_f8[2] = 0;
      local_f8[3] = 0;
    }
    else {
      uVar9 = FUN_004f5a90((uint)uVar2 * 4);
      *(undefined4 *)(local_f8 + 2) = uVar9;
    }
  }
  local_c = 0xffffffff;
  local_ec[4] = local_f8;
  local_fc = operator_new(8);
  local_c = 4;
  local_120._0_4_ = local_fc;
  if (local_fc == (ushort *)0x0) {
    local_fc = (ushort *)0x0;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 2);
    local_fc[1] = 0;
    *local_fc = uVar2;
    if (uVar2 == 0) {
      local_fc[2] = 0;
      local_fc[3] = 0;
    }
    else {
      uVar9 = FUN_004f5a90((uint)uVar2 * 4);
      *(undefined4 *)(local_fc + 2) = uVar9;
    }
  }
  local_c = 0xffffffff;
  local_ec[5] = local_fc;
  local_f4 = operator_new(8);
  local_c = 5;
  local_120._0_4_ = local_f4;
  if (local_f4 == (ushort *)0x0) {
    local_f4 = (ushort *)0x0;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 2);
    local_f4[1] = 0;
    *local_f4 = uVar2;
    if (uVar2 == 0) {
      local_f4[2] = 0;
      local_f4[3] = 0;
    }
    else {
      uVar9 = FUN_004f5a90((uint)uVar2 << 2);
      *(undefined4 *)(local_f4 + 2) = uVar9;
    }
  }
  local_c = 0xffffffff;
  local_ec[0] = local_f4;
  local_ec[1] = operator_new(8);
  local_c = 6;
  local_120._0_4_ = local_ec[1];
  if (local_ec[1] == (ushort *)0x0) {
    local_ec[1] = (ushort *)0x0;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 2);
    local_ec[1][1] = 0;
    *local_ec[1] = uVar2;
    if (uVar2 == 0) {
      local_ec[1][2] = 0;
      local_ec[1][3] = 0;
    }
    else {
      uVar9 = FUN_004f5a90((uint)uVar2 * 4);
      *(undefined4 *)(local_ec[1] + 2) = uVar9;
    }
  }
  local_118 = (double)CONCAT44(local_118._4_4_,local_ec[1]);
  local_c = 0xffffffff;
  local_ec[2] = operator_new(8);
  local_c = 7;
  if (local_ec[2] == (ushort *)0x0) {
    local_ec[2] = (ushort *)0x0;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 2);
    local_ec[2][1] = 0;
    *local_ec[2] = uVar2;
    if (uVar2 == 0) {
      local_ec[2][2] = 0;
      local_ec[2][3] = 0;
    }
    else {
      local_120._0_4_ = local_ec[2];
      uVar9 = FUN_004f5a90((uint)uVar2 * 4);
      *(undefined4 *)(local_ec[2] + 2) = uVar9;
    }
  }
  local_120 = (double)CONCAT44(local_120._4_4_,local_ec[2]);
  local_c = 0xffffffff;
  pvVar12 = local_10c;
  iVar10 = 0;
  do {
    local_104 = 1;
    uVar11 = (uint)*(ushort *)(param_1 + 2);
    local_100 = 0;
    local_c8 = local_2c[iVar10] * 0.5 + (double)*(float *)((int)pvVar12 + iVar10 * 4 + 0x38);
    if (uVar11 != 0) {
      local_b8 = local_c8 - 9.999999974752427e-07;
      do {
        iVar15 = *(int *)(param_1 + 4);
        iVar3 = *(int *)(iVar15 + local_100 * 4);
        if (local_b8 <= *(double *)(iVar3 + 8 + iVar10 * 8)) {
          local_c0 = local_c8 + 9.999999974752427e-07;
          if (*(double *)(iVar3 + 8 + iVar10 * 8) <= local_c0) {
            if (local_100 == uVar11 - 1) {
              iVar15 = *(int *)(iVar15 + -4 + local_100 * 4);
            }
            else {
              iVar15 = *(int *)(iVar15 + 4 + local_100 * 4);
            }
            if (local_b8 <= *(double *)(iVar15 + 8 + iVar10 * 8)) {
              if (*(double *)(iVar15 + 8 + iVar10 * 8) <= local_c0) {
                if (local_104 == 0) {
                  puVar14 = local_ec[iVar10];
                  if (*puVar14 <= puVar14[1]) {
                    FUN_004f6060(puVar14);
                  }
                  local_104 = 1;
                  *(int *)(*(int *)(puVar14 + 2) + (uint)puVar14[1] * 4) = iVar3;
                  puVar14[1] = puVar14[1] + 1;
                }
                else {
                  puVar14 = local_ec[iVar10 + 3];
                  if (*puVar14 <= puVar14[1]) {
                    FUN_004f6060(puVar14);
                  }
                  local_104 = 0;
                  *(int *)(*(int *)(puVar14 + 2) + (uint)puVar14[1] * 4) = iVar3;
                  puVar14[1] = puVar14[1] + 1;
                }
              }
              else {
                puVar14 = local_ec[iVar10 + 3];
                if (puVar14[1] < *puVar14) goto LAB_00512d76;
                FUN_004f6060(puVar14);
                *(int *)(*(int *)(puVar14 + 2) + (uint)puVar14[1] * 4) = iVar3;
                puVar14[1] = puVar14[1] + 1;
              }
            }
            else {
              puVar14 = local_ec[iVar10];
              if (puVar14[1] < *puVar14) goto LAB_00512d76;
              FUN_004f6060(puVar14);
              *(int *)(*(int *)(puVar14 + 2) + (uint)puVar14[1] * 4) = iVar3;
              puVar14[1] = puVar14[1] + 1;
            }
          }
          else {
            puVar14 = local_ec[iVar10];
            if (puVar14[1] < *puVar14) goto LAB_00512d76;
            FUN_004f6060(puVar14);
            *(int *)(*(int *)(puVar14 + 2) + (uint)puVar14[1] * 4) = iVar3;
            puVar14[1] = puVar14[1] + 1;
          }
        }
        else {
          puVar14 = local_ec[iVar10 + 3];
          if (*puVar14 <= puVar14[1]) {
            FUN_004f6060(puVar14);
          }
LAB_00512d76:
          *(int *)(*(int *)(puVar14 + 2) + (uint)puVar14[1] * 4) = iVar3;
          puVar14[1] = puVar14[1] + 1;
        }
        local_100 = local_100 + 1;
        uVar11 = (uint)*(ushort *)(param_1 + 2);
        pvVar12 = local_10c;
      } while (local_100 < (int)uVar11);
    }
    FUN_00512690((int)local_ec[iVar10 + 3],&local_6c,&local_8c);
    FUN_00512690((int)local_ec[iVar10],&local_5c,&local_7c);
    iVar15 = iVar10 + 1;
    local_d4[iVar10] =
         ABS(local_84 - local_64) * ABS(local_88 - local_68) * ABS(local_8c - local_6c) +
         ABS(local_74 - local_54) * ABS(local_78 - local_58) * ABS(local_7c - local_5c);
    iVar10 = iVar15;
  } while (iVar15 < 3);
  if (local_d4[1] <= local_d4[0]) {
    iVar10 = 1;
    if (local_d4[1] < local_d4[2]) goto LAB_00512fd2;
  }
  else if (local_d4[0] < local_d4[2]) {
    iVar10 = 0;
    goto LAB_00512fd2;
  }
  iVar10 = 2;
LAB_00512fd2:
  puVar7 = FUN_005127e0(pvVar12,(int)local_ec[iVar10 + 3]);
  puVar14 = local_ec[iVar10];
  local_108[0xe] = puVar7;
  puVar7 = FUN_005127e0(pvVar12,(int)puVar14);
  puVar14 = local_f0;
  local_108[0xf] = puVar7;
  if (local_f0 != (ushort *)0x0) {
    puVar4 = *(ushort **)(local_f0 + 2);
    if (puVar4 != local_f0 + 4) {
      if (puVar4 != (ushort *)0x0) {
        FUN_00559d4e(puVar4);
        puVar14[2] = 0;
        puVar14[3] = 0;
      }
      *puVar14 = 0;
    }
    puVar14[1] = 0;
    FUN_0054b339(puVar14);
  }
  puVar14 = local_f8;
  if (local_f8 != (ushort *)0x0) {
    puVar4 = *(ushort **)(local_f8 + 2);
    if (puVar4 != local_f8 + 4) {
      if (puVar4 != (ushort *)0x0) {
        FUN_00559d4e(puVar4);
        puVar14[2] = 0;
        puVar14[3] = 0;
      }
      *puVar14 = 0;
    }
    puVar14[1] = 0;
    FUN_0054b339(puVar14);
  }
  puVar14 = local_fc;
  if (local_fc != (ushort *)0x0) {
    puVar4 = *(ushort **)(local_fc + 2);
    if (puVar4 != local_fc + 4) {
      if (puVar4 != (ushort *)0x0) {
        FUN_00559d4e(puVar4);
        puVar14[2] = 0;
        puVar14[3] = 0;
      }
      *puVar14 = 0;
    }
    puVar14[1] = 0;
    FUN_0054b339(puVar14);
  }
  puVar14 = local_f4;
  if (local_f4 != (ushort *)0x0) {
    puVar4 = *(ushort **)(local_f4 + 2);
    if (puVar4 != local_f4 + 4) {
      if (puVar4 != (ushort *)0x0) {
        FUN_00559d4e(puVar4);
        puVar14[2] = 0;
        puVar14[3] = 0;
      }
      *puVar14 = 0;
    }
    puVar14[1] = 0;
    FUN_0054b339(puVar14);
  }
  puVar6 = (undefined2 *)local_118;
  if ((undefined2 *)local_118 != (undefined2 *)0x0) {
    puVar5 = *(undefined2 **)((undefined2 *)local_118 + 2);
    if (puVar5 != (undefined2 *)local_118 + 4) {
      if (puVar5 != (undefined2 *)0x0) {
        FUN_00559d4e(puVar5);
        *(undefined4 *)(puVar6 + 2) = 0;
      }
      *puVar6 = 0;
    }
    puVar6[1] = 0;
    FUN_0054b339(puVar6);
  }
  puVar6 = (ushort *)local_120;
  if ((ushort *)local_120 != (undefined2 *)0x0) {
    puVar5 = *(undefined2 **)((ushort *)local_120 + 2);
    if (puVar5 != (ushort *)local_120 + 4) {
      if (puVar5 != (undefined2 *)0x0) {
        FUN_00559d4e(puVar5);
        *(undefined4 *)(puVar6 + 2) = 0;
      }
      *puVar6 = 0;
    }
    puVar6[1] = 0;
    FUN_0054b339(puVar6);
  }
  *(int *)((int)pvVar12 + 8) = *(int *)((int)pvVar12 + 8) + 1;
  ExceptionList = local_14;
  return local_108;
}



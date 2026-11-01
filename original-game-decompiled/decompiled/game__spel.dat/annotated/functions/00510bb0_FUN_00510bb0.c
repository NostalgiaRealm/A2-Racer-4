
/* ==== FUN_00510bb0 @ 00510bb0 ==== 
 * signature: int * __cdecl FUN_00510bb0(int param_1, int param_2)
 * body: 00510bb0-00511095
 */

int * __cdecl FUN_00510bb0(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  ushort uVar5;
  int *piVar6;
  void *pvVar7;
  int iVar8;
  double *pdVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  uint *puVar16;
  double *pdVar17;
  char local_4d;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint *local_3c;
  uint *local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  uint *local_28;
  undefined4 local_24;
  ushort local_1c;
  ushort local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_00573db9;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_28 = operator_new(0x18);
  local_c = 0;
  if (local_28 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00513750(local_28);
  }
  local_c = 0xffffffff;
  uVar14 = (uint)*(ushort *)(param_1 + 2);
  *piVar6 = 0;
  pvVar7 = operator_new(uVar14 << 5);
  if (pvVar7 == (void *)0x0) {
    pvVar7 = (void *)0x0;
  }
  else {
    local_28 = (uint *)(uVar14 - 1);
  }
  piVar6[1] = (int)pvVar7;
  local_4c = 0;
  if (uVar14 != 0) {
    do {
      pdVar17 = *(double **)(*(int *)(param_1 + 4) + local_4c * 4);
      iVar8 = FUN_00510af0(piVar6[1],*piVar6,pdVar17);
      if (iVar8 == 0) {
        local_28 = *(uint **)(pdVar17 + 1);
        pdVar9 = (double *)(*piVar6 * 0x20 + piVar6[1]);
        local_24 = *(undefined4 *)((int)pdVar17 + 0xc);
        local_30 = *(int *)(pdVar17 + 2);
        local_2c = *(undefined4 *)((int)pdVar17 + 0x14);
        *pdVar9 = *pdVar17;
        *(uint **)(pdVar9 + 1) = local_28;
        *(undefined4 *)((int)pdVar9 + 0xc) = local_24;
        *(int *)(pdVar9 + 2) = local_30;
        *(undefined4 *)((int)pdVar9 + 0x14) = local_2c;
        *piVar6 = *piVar6 + 1;
      }
      local_4c = local_4c + 1;
    } while (local_4c < (int)uVar14);
  }
  local_28 = operator_new(0x10);
  local_c = 1;
  if (local_28 == (void *)0x0) {
    local_3c = (uint *)0x0;
  }
  else {
    local_3c = FUN_005018c0(local_28,(uint)*(ushort *)(param_1 + 2) << 1,4,0);
  }
  local_1c = 0;
  local_1a = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  local_c = 2;
  uVar14 = (uint)*(ushort *)(param_2 + 2);
  piVar6[4] = uVar14;
  local_34 = uVar14;
  local_28 = operator_new(uVar14 * 0x30 + 4);
  local_c._0_1_ = 3;
  if (local_28 == (uint *)0x0) {
    puVar16 = (uint *)0x0;
  }
  else {
    puVar16 = local_28 + 1;
    *local_28 = uVar14;
    FUN_00558643(puVar16,0x30,uVar14,FUN_005137d0);
  }
  local_c = CONCAT31(local_c._1_3_,2);
  piVar6[5] = (int)puVar16;
  piVar6[2] = 0;
  local_4c = 0;
  if (uVar14 != 0) {
    local_40 = 0;
    do {
      local_44 = *(int *)(*(int *)(param_2 + 4) + local_4c * 4);
      local_38 = (uint *)(uint)*(ushort *)(local_44 + 0x22);
      *(uint **)(local_40 + 0x24 + piVar6[5]) = local_38;
      puVar16 = (uint *)0x0;
      if (local_38 != (uint *)0x0) {
        do {
          iVar8 = FUN_00510af0(piVar6[1],*piVar6,
                               *(double **)(*(int *)(local_44 + 0x24) + (int)puVar16 * 4));
          local_28 = (uint *)((int)puVar16 + 1);
          if (local_28 == local_38) {
            pdVar17 = (double *)**(undefined4 **)(local_44 + 0x24);
          }
          else {
            pdVar17 = *(double **)(*(int *)(local_44 + 0x24) + 4 + (int)puVar16 * 4);
          }
          local_30 = FUN_00510af0(piVar6[1],*piVar6,pdVar17);
          puVar16 = local_3c;
          uVar15 = (ushort)iVar8;
          uVar5 = (ushort)local_30;
          if (uVar5 < uVar15) {
            local_48 = CONCAT22(uVar5,uVar15);
          }
          else {
            local_48 = CONCAT22(uVar15,uVar5);
          }
          iVar8 = FUN_00501940(local_3c,(byte *)&local_48);
          if (iVar8 == 0) {
            FUN_005019c0(puVar16,(byte *)&local_48,1);
            puVar10 = (ushort *)FUN_0055ab88(1,4);
            *puVar10 = uVar15;
            puVar10[1] = (ushort)local_30;
            if (local_1c <= local_1a) {
              FUN_004f6060(&local_1c);
            }
            *(ushort **)(CONCAT22(uStack_16,uStack_18) + (uint)local_1a * 4) = puVar10;
            local_1a = local_1a + 1;
            piVar6[2] = piVar6[2] + 1;
          }
          uVar14 = local_34;
          puVar16 = local_28;
        } while ((int)local_28 < (int)local_38);
      }
      local_4c = local_4c + 1;
      local_40 = local_40 + 0x30;
    } while (local_4c < (int)uVar14);
  }
  puVar16 = local_3c;
  if (local_3c != (uint *)0x0) {
    FUN_005018f0((int)local_3c);
    FUN_0054b339(puVar16);
  }
  pvVar7 = operator_new(piVar6[2] << 2);
  iVar8 = 0;
  piVar6[3] = (int)pvVar7;
  if (local_1a != 0) {
    do {
      puVar2 = *(undefined2 **)(CONCAT22(uStack_16,uStack_18) + iVar8 * 4);
      *(undefined2 *)(piVar6[3] + iVar8 * 4) = *puVar2;
      *(undefined2 *)(piVar6[3] + 2 + iVar8 * 4) = puVar2[1];
      if (puVar2 != (undefined2 *)0x0) {
        FUN_00559d4e(puVar2);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)local_1a);
  }
  iVar8 = 0;
  local_4c = 0;
  if (0 < (int)uVar14) {
    do {
      puVar3 = *(undefined8 **)(*(int *)(param_2 + 4) + local_4c * 4);
      *(int **)(piVar6[5] + 0x20 + iVar8) = piVar6;
      uVar1 = puVar3[1];
      local_28 = *(uint **)(puVar3 + 2);
      local_24 = *(undefined4 *)((int)puVar3 + 0x14);
      puVar11 = (undefined8 *)(piVar6[5] + iVar8);
      *puVar11 = *puVar3;
      *(uint **)(puVar11 + 2) = local_28;
      *(undefined4 *)((int)puVar11 + 0x14) = local_24;
      puVar11[1] = uVar1;
      piVar12 = FUN_0055ab88(*(int *)(piVar6[5] + 0x24 + iVar8),2);
      *(int **)(piVar6[5] + 0x28 + iVar8) = piVar12;
      pvVar7 = operator_new(*(uint *)(piVar6[5] + 0x24 + iVar8));
      *(void **)(piVar6[5] + 0x2c + iVar8) = pvVar7;
      local_44 = *(int *)(piVar6[5] + 0x24 + iVar8);
      local_3c = FUN_004f5aa0(local_44 + 1,2);
      local_48 = 0;
      puVar16 = local_3c;
      if (0 < local_44) {
        do {
          local_38 = puVar16;
          iVar13 = FUN_00510af0(piVar6[1],*piVar6,
                                *(double **)(*(int *)((int)puVar3 + 0x24) + local_48 * 4));
          *(short *)local_38 = (short)iVar13;
          local_38 = (uint *)((int)local_38 + 2);
          local_48 = local_48 + 1;
          puVar16 = local_38;
        } while (local_48 < local_44);
      }
      iVar13 = 0;
      *(short *)((int)local_3c + local_48 * 2) = (short)*local_3c;
      if (0 < local_44) {
        do {
          uVar14 = FUN_00510b40((ushort *)piVar6[3],piVar6[2],
                                (uint)*(ushort *)((int)local_3c + iVar13 * 2),
                                (uint)*(ushort *)((int)local_3c + iVar13 * 2 + 2),&local_4d);
          *(short *)(*(int *)(piVar6[5] + 0x28 + iVar8) + iVar13 * 2) = (short)uVar14;
          iVar13 = iVar13 + 1;
          *(char *)(*(int *)(piVar6[5] + 0x2c + iVar8) + -1 + iVar13) = '\x01' - local_4d;
        } while (iVar13 < local_44);
      }
      if (local_3c != (uint *)0x0) {
        FUN_00559d4e(local_3c);
      }
      local_4c = local_4c + 1;
      iVar8 = iVar8 + 0x30;
    } while (local_4c < (int)local_34);
  }
  ppvVar4 = (void **)CONCAT22(uStack_16,uStack_18);
  if ((ppvVar4 != &local_14) && (ppvVar4 != (void **)0x0)) {
    FUN_00559d4e(ppvVar4);
  }
  ExceptionList = local_14;
  return piVar6;
}



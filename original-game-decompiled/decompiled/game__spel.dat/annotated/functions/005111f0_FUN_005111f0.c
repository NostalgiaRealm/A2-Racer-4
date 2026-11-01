
/* ==== FUN_005111f0 @ 005111f0 ==== 
 * signature: undefined4 __cdecl FUN_005111f0(int param_1, int * param_2, int param_3, int param_4)
 * body: 005111f0-0051160f
 */

undefined4 __cdecl FUN_005111f0(int param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  LPVOID pvVar6;
  LPVOID pvVar7;
  double dVar8;
  ushort *puVar9;
  double *pdVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  undefined4 local_48;
  double *local_44;
  int local_34;
  ushort local_30;
  ushort local_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  ushort local_28;
  ushort local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  double local_20;
  void *local_14;
  code *pcStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  local_14 = ExceptionList;
  pcStack_10 = FUN_00573dee;
  ExceptionList = &local_14;
  *param_2 = 0;
  local_28 = 0;
  local_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  local_30 = 0;
  local_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  uStack_b = 0;
  local_c = 1;
  iVar16 = DAT_0074c600;
  do {
    if ((iVar16 == 0) || (*(int *)(iVar16 + 0x30) == 0)) {
      local_48 = 0;
      if (*param_2 == 0) {
        piVar13 = FUN_00510bb0(param_1,(int)&local_28);
        local_48 = FUN_00513ed0(piVar13);
        if (piVar13 != (int *)0x0) {
          FUN_00513770((int)piVar13);
          FUN_0054b339(piVar13);
        }
      }
      iVar16 = 0;
      if (local_26 != 0) {
        do {
          pvVar6 = *(LPVOID *)(CONCAT22(uStack_22,uStack_24) + iVar16 * 4);
          if (pvVar6 != (LPVOID)0x0) {
            pvVar7 = *(LPVOID *)((int)pvVar6 + 0x24);
            if (pvVar7 != (LPVOID)((int)pvVar6 + 0x28)) {
              if (pvVar7 != (LPVOID)0x0) {
                FUN_00559d4e(pvVar7);
                *(undefined4 *)((int)pvVar6 + 0x24) = 0;
              }
              *(undefined2 *)((int)pvVar6 + 0x20) = 0;
            }
            *(undefined2 *)((int)pvVar6 + 0x22) = 0;
            FUN_0054b339(pvVar6);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < (int)(uint)local_26);
      }
      puVar9 = (ushort *)CONCAT22(uStack_2a,uStack_2c);
      if (puVar9 != &local_28) {
        if (puVar9 != (ushort *)0x0) {
          FUN_00559d4e(puVar9);
          uStack_2c = 0;
          uStack_2a = 0;
        }
        local_30 = 0;
      }
      pdVar10 = (double *)CONCAT22(uStack_22,uStack_24);
      local_2e = 0;
      if ((pdVar10 != &local_20) && (pdVar10 != (double *)0x0)) {
        FUN_00559d4e(pdVar10);
      }
      ExceptionList = local_14;
      return local_48;
    }
    local_44 = operator_new(0x28);
    if (local_44 == (double *)0x0) {
      local_44 = (double *)0x0;
    }
    else {
      *(undefined2 *)(local_44 + 4) = 0;
      *(undefined2 *)((int)local_44 + 0x22) = 0;
      *(undefined4 *)((int)local_44 + 0x24) = 0;
    }
    pdVar10 = local_44;
    local_c = 1;
    if (local_28 <= local_26) {
      FUN_004f6060(&local_28);
    }
    *(double **)(CONCAT22(uStack_22,uStack_24) + (uint)local_26 * 4) = local_44;
    local_26 = local_26 + 1;
    iVar12 = 0;
    if (0 < DAT_0074c03c) {
      do {
        puVar15 = (undefined4 *)(iVar12 * 8 + *(int *)(iVar16 + 0x18));
        iVar14 = iVar12 + 1;
        *(undefined4 *)(local_44 + iVar12) = *puVar15;
        *(undefined4 *)(iVar12 * 8 + 4 + (int)local_44) = puVar15[1];
        iVar12 = iVar14;
      } while (iVar14 < DAT_0074c03c);
    }
    local_34 = FUN_005182e0(iVar16);
    local_2e = 0;
    if (local_34 != 0) {
      iVar12 = *(int *)(local_34 + 4);
      if (iVar12 != 0) {
        piVar13 = (int *)(local_34 + 8);
        do {
          iVar12 = FUN_005164c0(*(uint *)(iVar12 + 8));
          if (local_30 <= local_2e) {
            FUN_004f6060(&local_30);
          }
          *(int *)(CONCAT22(uStack_2a,uStack_2c) + (uint)local_2e * 4) = iVar12;
          local_2e = local_2e + 1;
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar12 * 4);
          if (*(ushort *)(local_44 + 4) <= *(ushort *)((int)local_44 + 0x22)) {
            FUN_004f6060((ushort *)(local_44 + 4));
          }
          *(undefined4 *)
           (*(int *)((int)local_44 + 0x24) + (uint)*(ushort *)((int)local_44 + 0x22) * 4) = uVar2;
          *(short *)((int)local_44 + 0x22) = *(short *)((int)local_44 + 0x22) + 1;
          *(char *)(iVar12 + param_4) = *(char *)(iVar12 + param_4) + '\x01';
          iVar12 = *piVar13;
          piVar13 = piVar13 + 1;
        } while (iVar12 != 0);
      }
    }
    iVar12 = 0;
    fVar17 = FUN_005110a0(local_44);
    fVar18 = FUN_00511190((int)local_44);
    fVar17 = (float10)(double)fVar17;
    if (fVar17 < (float10)0.0) {
      *local_44 = *local_44 * -1.0;
      local_44[1] = local_44[1] * -1.0;
      local_44[2] = local_44[2] * -1.0;
      fVar17 = fVar17 * (float10)-1.0;
    }
    if (fVar17 < SQRT(fVar18) * (float10)0.004999999888241291) {
      iVar14 = 0;
      uVar11 = (uint)local_2e;
      local_20 = -1.0;
      local_44 = (double *)0x0;
      if (local_2e != 0) {
        do {
          if (*(char *)(*(int *)(CONCAT22(uStack_2a,uStack_2c) + iVar14 * 4) + param_3) != '\0')
          goto LAB_00511515;
          puVar15 = *(undefined4 **)((int)pdVar10 + 0x24);
          pdVar3 = (double *)puVar15[iVar14];
          pdVar4 = (double *)*puVar15;
          dVar8 = (*pdVar4 - *pdVar3) * (*pdVar4 - *pdVar3) +
                  (pdVar4[1] - pdVar3[1]) * (pdVar4[1] - pdVar3[1]) +
                  (pdVar4[2] - pdVar3[2]) * (pdVar4[2] - pdVar3[2]);
          if (local_20 < dVar8) {
            iVar12 = iVar14;
            local_20 = dVar8;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)uVar11);
      }
      iVar14 = 0;
      local_20 = -1.0;
      if (local_2e != 0) {
        do {
          *param_2 = 1;
          iVar5 = *(int *)((int)pdVar10 + 0x24);
          pdVar3 = *(double **)(iVar5 + iVar14 * 4);
          pdVar4 = *(double **)(iVar5 + iVar12 * 4);
          dVar8 = (*pdVar4 - *pdVar3) * (*pdVar4 - *pdVar3) +
                  (pdVar4[1] - pdVar3[1]) * (pdVar4[1] - pdVar3[1]) +
                  (pdVar4[2] - pdVar3[2]) * (pdVar4[2] - pdVar3[2]);
          if (local_20 < dVar8) {
            local_44 = (double *)iVar14;
            local_20 = dVar8;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)uVar11);
      }
      iVar14 = 0;
      if (local_2e != 0) {
        do {
          if (((double *)iVar14 != local_44) && (iVar14 != iVar12)) {
            pcVar1 = (char *)(*(int *)(CONCAT22(uStack_2a,uStack_2c) + iVar14 * 4) + param_3);
            *pcVar1 = *pcVar1 + '\x01';
            break;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)uVar11);
      }
    }
LAB_00511515:
    FUN_00514ba0(&local_34);
    iVar16 = *(int *)(iVar16 + 0x30);
  } while( true );
}



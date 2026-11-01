
/* ==== FUN_00521000 @ 00521000 ==== 
 * signature: char * __fastcall FUN_00521000(int * param_1)
 * body: 00521000-005214ed
 */

char * __fastcall FUN_00521000(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  double *pdVar14;
  double *pdVar15;
  uint *puVar16;
  int local_a8;
  int *local_a0;
  undefined4 *local_9c;
  double *local_90;
  double local_74;
  undefined8 local_6c;
  undefined8 local_64;
  double local_54;
  undefined8 local_4c;
  undefined8 local_44;
  double local_34;
  double local_2c;
  double local_24;
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_005740aa;
  local_14 = ExceptionList;
  piVar13 = (int *)*param_1;
  iVar6 = *piVar13;
  ExceptionList = &local_14;
  pvVar7 = operator_new(0x10);
  local_c = 0;
  if (pvVar7 == (void *)0x0) {
    local_9c = (undefined4 *)0x0;
  }
  else {
    local_9c = FUN_005018c0(pvVar7,(iVar6 + -2) * 6,8,0);
  }
  iVar6 = piVar13[4];
  pdVar15 = (double *)piVar13[5];
  local_c = 0xffffffff;
  while( true ) {
    iVar6 = iVar6 + -1;
    if (iVar6 < 0) {
      if (local_9c != (undefined4 *)0x0) {
        FUN_005018f0((int)local_9c);
        FUN_0054b339(local_9c);
      }
      for (iVar6 = param_1[0xc]; iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
        puVar11 = operator_new(0xc0);
        local_c = 2;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          puVar11 = FUN_005215e0(puVar11);
        }
        local_c = 0xffffffff;
        puVar11[2] = param_1[0xc];
        if (param_1[0xc] != 0) {
          *(undefined4 **)(param_1[0xc] + 0xc) = puVar11;
        }
        puVar11[3] = 0;
        param_1[0xd] = param_1[0xd] + 1;
        param_1[0xc] = (int)puVar11;
        local_a0 = (int *)(iVar6 + 0x84);
        *(undefined1 *)(puVar11 + 6) = 1;
        puVar11[7] = 0;
        *(undefined1 *)((int)puVar11 + 0x19) = 1;
        puVar11[4] = iVar6;
        *(undefined4 **)(iVar6 + 0x10) = puVar11;
        local_a8 = 3;
        piVar13 = puVar11 + 0x1e;
        do {
          piVar3 = piVar13 + -2;
          *piVar3 = **(int **)((iVar6 - (int)puVar11) + (int)piVar13);
          piVar13[-1] = (int)puVar11;
          *piVar13 = (int)(puVar11 + ((local_a8 + 1) % 3) * 10 + 8);
          piVar13[1] = (int)(puVar11 + (local_a8 % 3) * 10 + 8);
          piVar13[2] = *local_a0;
          iVar12 = FUN_0051fe80(piVar3);
          iVar12 = FUN_0051fe80(*(int **)(iVar12 + 0x14));
          if (iVar12 != 0) {
            piVar13[3] = iVar12;
            *(int **)(iVar12 + 0x14) = piVar3;
          }
          piVar13 = piVar13 + -10;
          iVar12 = *local_a0;
          local_a0 = local_a0 + -10;
          *(int **)(iVar12 + 0x10) = piVar3;
          iVar12 = local_a8 + -2;
          local_a8 = local_a8 + -1;
        } while (-1 < iVar12);
        puVar16 = puVar11 + 0x1c;
        iVar12 = 3;
        do {
          FUN_00521590(param_1,puVar16);
          puVar16 = puVar16 + -10;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      ExceptionList = local_14;
      return (char *)0x0;
    }
    pvVar7 = operator_new(0x20);
    if (pvVar7 == (void *)0x0) {
      local_a0 = (int *)0x0;
    }
    else {
      local_a0 = FUN_00520440(pvVar7,param_1,pdVar15);
    }
    pcVar8 = FUN_00520570(local_a0);
    if (pcVar8 != (char *)0x0) break;
    pcVar8 = FUN_005208e0((int)local_a0);
    if (pcVar8 != (char *)0x0) {
      FUN_0055ab10((byte *)s_make_triangles_calc_triangle_rep_005beb38);
      ExceptionList = local_14;
      return s_no_3d_representation_005beb20;
    }
    for (puVar11 = (undefined4 *)local_a0[4]; puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)*puVar11) {
      iVar12 = param_1[0xe];
      pdVar4 = (double *)(iVar12 + puVar11[4] * 0x28);
      iVar10 = puVar11[3];
      local_54 = *(double *)(iVar12 + iVar10 * 0x28) - *pdVar4;
      pdVar5 = (double *)(iVar12 + iVar10 * 0x28);
      local_90 = (double *)(iVar12 + puVar11[2] * 0x28);
      local_4c = *(double *)(iVar12 + 8 + iVar10 * 0x28) - pdVar4[1];
      local_44 = pdVar5[2] - pdVar4[2];
      local_74 = *local_90 - *pdVar4;
      local_6c = local_90[1] - pdVar4[1];
      local_64 = local_90[2] - pdVar4[2];
      FUN_004f99d0(&local_34,&local_54,&local_74);
      pdVar14 = pdVar5;
      if (local_34 * *pdVar15 + local_24 * pdVar15[2] + local_2c * pdVar15[1] < 0.0) {
        pdVar14 = local_90;
        local_90 = pdVar5;
      }
      puVar9 = operator_new(0xc0);
      local_c = 1;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = FUN_005215e0(puVar9);
      }
      local_c = 0xffffffff;
      puVar9[2] = param_1[0xc];
      if (param_1[0xc] != 0) {
        *(undefined4 **)(param_1[0xc] + 0xc) = puVar9;
      }
      puVar9[3] = 0;
      param_1[0xc] = (int)puVar9;
      param_1[0xd] = param_1[0xd] + 1;
      *(undefined1 *)(puVar9 + 6) = 1;
      iVar10 = FUN_00513820((int)pdVar15);
      iVar12 = param_1[0x10];
      *(undefined1 *)((int)puVar9 + 0x19) = 0;
      puVar9[7] = iVar12 + iVar10 * 0xc;
      puVar1 = puVar9 + 0x12;
      puVar9[10] = puVar1;
      puVar9[8] = pdVar4;
      puVar9[9] = puVar9;
      puVar9[0xb] = puVar9 + 0x1c;
      puVar9[0xc] = 0;
      FUN_00520e30(local_9c,(uint)pdVar4,(uint)pdVar14,(int)(puVar9 + 8));
      *puVar1 = pdVar14;
      puVar2 = puVar9 + 0x1c;
      puVar9[0x13] = puVar9;
      puVar9[0x14] = puVar2;
      puVar9[0x15] = puVar9 + 8;
      puVar9[0x16] = 0;
      FUN_00520e30(local_9c,(uint)pdVar14,(uint)local_90,(int)puVar1);
      puVar9[0x1e] = puVar9 + 8;
      *puVar2 = local_90;
      puVar9[0x1d] = puVar9;
      puVar9[0x1f] = puVar1;
      puVar9[0x20] = 0;
      FUN_00520e30(local_9c,(uint)local_90,(uint)pdVar4,(int)puVar2);
    }
    if (local_a0 != (int *)0x0) {
      FUN_00520470((int)local_a0);
      FUN_0054b339(local_a0);
    }
    pdVar15 = pdVar15 + 6;
  }
  FUN_0055ab10((byte *)s_make_triangles_calc_line_represe_005beb84);
  ExceptionList = local_14;
  return s_No_2d_representation_005beb6c;
}



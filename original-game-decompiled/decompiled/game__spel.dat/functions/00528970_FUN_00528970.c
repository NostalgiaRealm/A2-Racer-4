
/* ==== FUN_00528970 @ 00528970 ==== 
 * signature: undefined __cdecl FUN_00528970(uint param_1)
 * body: 00528970-00528f3b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00528970(uint param_1)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  float10 fVar15;
  int *local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  uVar10 = DAT_0074c5f4;
  local_18 = 0;
  pdVar3 = *(double **)(*(int *)(*(int *)(param_1 + 0x34) + 4) + 8);
  DAT_0074cd30 = DAT_0074cd30 + 1;
  local_20 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar9 = (int *)(DAT_0074c768 + *(int *)(DAT_0074c770 + DAT_0074c5f4 * 4) * 4);
    iVar8 = *piVar9;
    *(int *)(param_1 + 0x18) = iVar8;
    if (iVar8 == 0) {
      pvVar6 = FUN_0051e110(uVar10);
      *(void **)(param_1 + 0x18) = pvVar6;
    }
    else {
      DAT_0074c78c = DAT_0074c78c + 1;
      *piVar9 = *(int *)*piVar9;
    }
  }
  iVar8 = DAT_0074be68;
  if (param_1 == DAT_0074c61c) {
    DAT_0074be68 = 5;
    local_18 = iVar8;
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_setfacetplane__facet_f_d_crea_005c1ec4);
    FUN_00558953(DAT_0074c5ec,(byte *)s_Last_point_added_to_hull_was_p_d_005c1a9c);
    if (DAT_0074cd50 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_Last_merge_was___d__005be978);
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s_Current_summary_is__005c1eac);
    FUN_00526a80(DAT_0074c5ec);
  }
  if (DAT_0074c03c < 5) {
    if (DAT_0074bf98 == 0) {
      iVar8 = *(int *)(param_1 + 0x34);
      if (iVar8 != 0) {
        iVar7 = *(int *)(iVar8 + 4);
        if (iVar7 != 0) {
          iVar11 = 0;
          piVar9 = (int *)(iVar8 + 8);
          do {
            *(undefined4 *)(iVar11 + (int)DAT_0074c6f8) = *(undefined4 *)(iVar7 + 8);
            iVar7 = *piVar9;
            iVar11 = iVar11 + 4;
            piVar9 = piVar9 + 1;
          } while (iVar7 != 0);
        }
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x34);
      if (iVar8 != 0) {
        iVar7 = *(int *)(iVar8 + 4);
        local_28 = (int *)(iVar8 + 8);
        if (iVar7 != 0) {
          local_14 = 0;
          pdVar12 = DAT_0074c6f4;
          do {
            iVar8 = local_14 + 4;
            *(double **)(local_14 + (int)DAT_0074c6f8) = pdVar12;
            pdVar14 = *(double **)(iVar7 + 8);
            local_14 = iVar8;
            if (DAT_0074c03c != 0) {
              local_1c = DAT_0074c03c;
              pdVar13 = pdVar12;
              do {
                fVar15 = FUN_0052bda0();
                dVar1 = *pdVar14;
                pdVar12 = pdVar13 + 1;
                pdVar14 = pdVar14 + 1;
                local_1c = local_1c + -1;
                *pdVar13 = (double)(fVar15 * (float10)dVar1);
                pdVar13 = pdVar12;
              } while (local_1c != 0);
              local_1c = 0;
            }
            iVar7 = *local_28;
            local_28 = local_28 + 1;
          } while (iVar7 != 0);
        }
      }
    }
    FUN_00528f40(DAT_0074c03c,DAT_0074c6f8,pdVar3,*(uint *)(param_1 + 0x50) >> 0xb & 1,
                 *(double **)(param_1 + 0x18),(double *)(param_1 + 0x10),&local_20);
    if ((4 < DAT_0074c03c) || (local_20 != 0)) goto LAB_00528b7f;
  }
  else {
LAB_00528b7f:
    iVar8 = *(int *)(param_1 + 0x34);
    local_1c = 0;
    pdVar12 = DAT_0074c6f4;
    if (iVar8 != 0) {
      iVar7 = *(int *)(iVar8 + 4);
      piVar9 = (int *)(iVar8 + 8);
      while (iVar7 != 0) {
        if (*(double **)(iVar7 + 8) != pdVar3) {
          DAT_0074c6f8[local_1c] = (int)pdVar12;
          local_1c = local_1c + 1;
          pdVar14 = *(double **)(iVar7 + 8);
          pdVar13 = pdVar3;
          for (iVar8 = DAT_0074c03c; iVar8 != 0; iVar8 = iVar8 + -1) {
            dVar1 = *pdVar14;
            dVar2 = *pdVar13;
            pdVar13 = pdVar13 + 1;
            pdVar14 = pdVar14 + 1;
            *pdVar12 = dVar1 - dVar2;
            pdVar12 = pdVar12 + 1;
          }
        }
        iVar7 = *piVar9;
        piVar9 = piVar9 + 1;
      }
    }
    DAT_0074c6f8[local_1c] = (int)pdVar12;
    if ((DAT_0074bf98 != 0) &&
       (pdVar12 = DAT_0074c6f4, iVar8 = DAT_0074c03c, iVar7 = DAT_0074c03c + -1,
       DAT_0074c03c + -1 != 0)) {
      do {
        for (; local_1c = iVar7, iVar8 != 0; iVar8 = iVar8 + -1) {
          fVar15 = FUN_0052bda0();
          *pdVar12 = (double)(fVar15 * (float10)*pdVar12);
          pdVar12 = pdVar12 + 1;
          iVar7 = local_1c;
        }
        iVar8 = DAT_0074c03c;
        iVar7 = local_1c + -1;
      } while (local_1c + -1 != 0);
      local_1c = 0;
    }
    FUN_005293b0(DAT_0074c03c,DAT_0074c6f8,pdVar3,*(uint *)(param_1 + 0x50) >> 0xb & 1,
                 *(double **)(param_1 + 0x18),(double *)(param_1 + 0x10),&local_20);
    if (((local_20 != 0) && (iVar8 = FUN_0052b5e0(param_1), iVar8 != 0)) && (DAT_0074be68 != 0)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_setfacetplane__flipped_orient_005c1e5c);
    }
  }
  uVar10 = *(uint *)(param_1 + 0x50) & 0xfffeffff;
  *(uint *)(param_1 + 0x50) = uVar10;
  if (DAT_0074be40 != 0) {
    if (DAT_0074c00c == 0) {
      if (*(double *)(*(int *)(param_1 + 0x18) + -8 + DAT_0074c03c * 8) <= _DAT_0074c478 * -2.0)
      goto LAB_00528d15;
    }
    else if (*(double *)(*(int *)(param_1 + 0x18) + -8 + DAT_0074c03c * 8) <
             _DAT_0074c478 + _DAT_0074c478) goto LAB_00528d15;
    *(uint *)(param_1 + 0x50) = uVar10 | 0x10000;
  }
LAB_00528d15:
  iVar8 = DAT_0074bf98;
  if (((DAT_0074bf80 != 0) || (DAT_0074be68 != 0)) ||
     ((DAT_0074bff0 != 0 || (_DAT_0074c668 < 1.79769313486232e+308)))) {
    DAT_0074bf98 = 0;
    DAT_0074c738 = iVar8;
    iVar7 = *(int *)(param_1 + 0x34);
    if (iVar7 != 0) {
      iVar11 = *(int *)(iVar7 + 4);
      piVar9 = (int *)(iVar7 + 8);
      while (iVar11 != 0) {
        if (*(double **)(iVar11 + 8) != pdVar3) {
          DAT_0074c978 = DAT_0074c978 + 1;
          FUN_005273a0(*(double **)(iVar11 + 8),param_1,(double *)&local_10);
          if (local_10 < 0.0) {
            local_10 = -local_10;
          }
          _DAT_0074cbc0 = _DAT_0074cbc0 + local_10;
          _DAT_0074cbb8 = _DAT_0074cbb8 + 1;
          if (local_10 <= (double)CONCAT44(_DAT_0074cbcc,_DAT_0074cbc8)) {
            uVar4 = DAT_0074c678;
            uVar5 = DAT_0074c67c;
            dVar1 = -local_10;
          }
          else {
            _DAT_0074cbcc = local_10._4_4_;
            _DAT_0074cbc8 = (undefined4)local_10;
            uVar4 = (undefined4)local_10;
            uVar5 = local_10._4_4_;
            dVar1 = local_10;
            if (local_10 <= (double)CONCAT44(DAT_0074c67c,DAT_0074c678)) goto LAB_00528e98;
          }
          DAT_0074c67c = uVar5;
          DAT_0074c678 = uVar4;
          if (_DAT_0074c000 < dVar1) {
            FUN_005164c0(*(uint *)(iVar11 + 8));
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_setfacetplane_________vertex_p_005c1df4);
            FUN_0051eb30(s_DISTANT_005c109c,param_1,0,(int *)0x0,0);
          }
        }
LAB_00528e98:
        iVar11 = *piVar9;
        piVar9 = piVar9 + 1;
      }
    }
    DAT_0074bf98 = DAT_0074c738;
    if (2 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_setfacetplane__f_d_offset__2__005c1dc8);
      iVar8 = 0;
      if (0 < DAT_0074c03c) {
        do {
          FUN_00558953(DAT_0074c5ec,(byte *)s__2_2g_005c1dc0);
          iVar8 = iVar8 + 1;
        } while (iVar8 < DAT_0074c03c);
      }
      FUN_00558953(DAT_0074c5ec,&DAT_005ae60c);
    }
  }
  if (param_1 == DAT_0074c61c) {
    DAT_0074be68 = local_18;
  }
  return;
}



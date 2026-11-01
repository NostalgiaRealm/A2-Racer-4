
/* ==== FUN_004c1e60 @ 004c1e60 ==== 
 * signature: undefined4 __stdcall FUN_004c1e60(undefined4 * param_1, int * param_2)
 * body: 004c1e60-004c1e91;004c1e95-004c1edf;004c1eef-004c1f38;004c1f3c-004c1f61;004c1f65-004c1f86;004c1f8a-004c1fc7;004c1fcb-004c1ff0;004c1ff4-004c2015;004c2019-004c2051;004c2055-004c207a;004c207e-004c209f;004c20a3-004c2102;004c2106-004c212b;004c212f-004c2150;004c2154-004c2188;004c218c-004c21b1;004c21b5-004c21d6;004c21da-004c2228;004c222c-004c2251;004c2255-004c2276;004c227a-004c22ae;004c22b2-004c22d7;004c22db-004c22fc;004c2300-004c23cf;004c23d3-004c23f8;004c23fc-004c241d;004c2421-004c2454;004c2458-004c247d;004c2481-004c24a2;004c24a6-004c24dd;004c24e1-004c2506;004c250a-004c252b;004c252f-004c2566;004c256a-004c258f;004c2593-004c25b4;004c25b8-004c25ef;004c25f3-004c2618;004c261c-004c263d;004c2641-004c2678;004c267c-004c26a1;004c26a5-004c26c6;004c26ca-004c26fd;004c2701-004c2726;004c272a-004c274b;004c274f-004c2a35
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c1e92-004c1e94 004c1ee0-004c1eee 004c1f39-004c1f3b 004c1f62-004c1f64 004c1f87-004c1f89 004c1fc8-004c1fca 004c1ff1-004c1ff3 004c2016-004c2018 004c2052-004c2054 004c207b-004c207d 004c20a0-004c20a2 004c2103-004c2105 004c212c-004c212e 004c2151-004c2153 004c2189-004c218b 004c21b2-004c21b4 004c21d7-004c21d9 004c2229-004c222b 004c2252-004c2254 004c2277-004c2279 004c22af-004c22b1 004c22d8-004c22da 004c22fd-004c22ff 004c23d0-004c23d2 004c23f9-004c23fb 004c241e-004c2420 004c2455-004c2457 004c247e-004c2480 004c24a3-004c24a5 004c24de-004c24e0 004c2507-004c2509 004c252c-004c252e 004c2567-004c2569 004c2590-004c2592 004c25b5-004c25b7 004c25f0-004c25f2 004c2619-004c261b 004c263e-004c2640 004c2679-004c267b 004c26a2-004c26a4 004c26c7-004c26c9 004c26fe-004c2700 004c2727-004c2729 004c274c-004c274e
 */

undefined4 FUN_004c1e60(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  
  if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  iVar3 = param_2[2];
  if (iVar3 < param_2[1]) {
    iVar11 = param_2[4];
    iVar8 = iVar3;
    do {
      if (*(char *)(iVar11 + iVar8) == '\0') goto LAB_004c1eef;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2[1]);
  }
  iVar8 = 0;
  if (0 < iVar3) {
    iVar11 = param_2[4];
    do {
      if (*(char *)(iVar11 + iVar8) == '\0') goto LAB_004c1eef;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
LAB_004c1eef:
  *(undefined1 *)(iVar11 + iVar8) = 1;
  param_2[2] = iVar8;
  if (iVar8 == -1) {
    return 0;
  }
  if (*(int *)((int)param_2 + 0x5a) != 0) {
    if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
    }
    if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(int *)(iVar8 * 0xb0 + 0xa8 + *param_2) = *(int *)((int)param_2 + 0x5a);
    iVar3 = *(int *)((int)param_2 + 0x5a);
    if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
    }
    if ((iVar3 < 0) || (param_2[1] <= iVar3)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(param_2[4] + iVar3) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(int *)(iVar3 * 0xb0 + 0xa4 + *param_2) = iVar8;
  }
  if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar11 = iVar8 * 0xb0;
  puVar9 = param_1;
  puVar12 = (undefined4 *)(iVar11 + *param_2);
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  if ((param_1[0x13] & 0x20) == 0) {
    if ((param_1[0x13] & 8) == 0) {
      if (param_1[0x15] != 0x10) {
        FUN_004c3fa0((byte *)s_THIS_IS_NOT_A_16_bit_RGB_PIXELFO_005b322c);
      }
      iVar3 = 0;
      for (uVar1 = param_1[0x16]; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = 0;
      for (; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
        iVar4 = iVar4 + 1;
      }
      iVar5 = 0;
      for (uVar1 = param_1[0x17]; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
        iVar5 = iVar5 + 1;
      }
      iVar6 = 0;
      for (; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
        iVar6 = iVar6 + 1;
      }
      iVar7 = 0;
      for (uVar1 = param_1[0x18]; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
        iVar7 = iVar7 + 1;
      }
      iVar10 = 0;
      for (; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
        iVar10 = iVar10 + 1;
      }
      if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      *(int *)(iVar11 + 0x84 + *param_2) = iVar3;
      if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      *(int *)(iVar11 + 0x88 + *param_2) = iVar5;
      if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      *(int *)(iVar11 + 0x8c + *param_2) = iVar7;
      if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      *(int *)(iVar11 + 0x94 + *param_2) = iVar4;
      if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      *(int *)(iVar11 + 0x98 + *param_2) = iVar6;
      if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      *(int *)(iVar11 + 0x9c + *param_2) = iVar10;
      if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      *(int *)(iVar11 + 0x74 + *param_2) = 8 - iVar4;
      iVar11 = FUN_004c2c30(param_2,iVar8);
      *(int *)(iVar11 + 0x78) = 8 - iVar6;
      iVar11 = FUN_004c2c30(param_2,iVar8);
      *(int *)(iVar11 + 0x7c) = 8 - iVar10;
      if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
        iVar3 = 0;
        for (uVar1 = param_1[0x19]; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
          iVar3 = iVar3 + 1;
        }
        iVar11 = 0;
        for (; (uVar1 & 1) != 0; uVar1 = uVar1 >> 1) {
          iVar11 = iVar11 + 1;
        }
        iVar4 = FUN_004c2c30(param_2,iVar8);
        *(int *)(iVar4 + 0x90) = iVar3;
        iVar3 = FUN_004c2c30(param_2,iVar8);
        *(int *)(iVar3 + 0xa0) = iVar11;
        iVar3 = FUN_004c2c30(param_2,iVar8);
        *(int *)(iVar3 + 0x80) = 8 - iVar11;
        FUN_004c3fa0((byte *)s_TXFORMAT___ALPHA_texture_format___005b31c8);
        iVar3 = FUN_004c2c30(param_2,iVar8);
        *(undefined4 *)(iVar3 + 0x6c) = 4;
        iVar3 = FUN_004c2c30(param_2,iVar8);
        *(undefined4 *)(iVar3 + 0x70) = 0x10;
        if ((*(int *)((int)param_2 + 0x4e) != -1) &&
           (iVar3 = FUN_004c2cd0(param_2,*(int *)((int)param_2 + 0x4e)),
           iVar11 <= *(int *)(iVar3 + 0xa0))) {
          return 1;
        }
        *(int *)((int)param_2 + 0x4e) = iVar8;
        FUN_004c3fa0((byte *)s_TXFORMAT___Selected_ALPHA_textur_005b315c);
        return 1;
      }
      FUN_004c3fa0((byte *)s_TXFORMAT___texture_format__d__rg_005b3104);
      iVar11 = FUN_004c2c30(param_2,iVar8);
      *(undefined4 *)(iVar11 + 0x6c) = 3;
      iVar11 = FUN_004c2c30(param_2,iVar8);
      *(undefined4 *)(iVar11 + 0x70) = 0x10;
      iVar11 = *(int *)((int)param_2 + 0x52);
      iVar4 = iVar10 + iVar6 + iVar4;
      iVar6 = DAT_0074098c + DAT_00740990 + DAT_00740994;
      if (iVar11 == -1) {
        if (iVar6 < iVar4) goto LAB_004c2a1a;
      }
      else {
        iVar10 = FUN_004c2cd0(param_2,iVar11);
        iVar2 = FUN_004c2cd0(param_2,iVar11);
        iVar10 = *(int *)(iVar10 + 0x9c);
        iVar2 = *(int *)(iVar2 + 0x94);
        iVar11 = FUN_004c2cd0(param_2,iVar11);
        if ((((iVar6 < iVar4) || (DAT_007409bc != iVar3)) || (DAT_007409c0 != iVar5)) ||
           ((DAT_007409c4 != iVar7 ||
            (iVar6 - (iVar10 + iVar2 + *(int *)(iVar11 + 0x98)) < iVar6 - iVar4))))
        goto LAB_004c2a1a;
      }
      FUN_004c3fa0((byte *)s_TXFORMAT___using_this_texture_fo_005b30d4);
      *(int *)((int)param_2 + 0x52) = iVar8;
    }
    else {
      FUN_004c3fa0((byte *)s_TXFORMAT___texture_format__d__4b_005b3260);
      if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      *(undefined4 *)(iVar11 + 0x6c + *param_2) = 1;
      if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      *(undefined4 *)(iVar11 + 0x70 + *param_2) = 4;
      *(int *)((int)param_2 + 0x46) = iVar8;
    }
  }
  else {
    FUN_004c3fa0((byte *)s_TXFORMAT___texture_format__d__8b_005b3290);
    if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
    }
    if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(undefined4 *)(iVar11 + 0x6c + *param_2) = 2;
    if (param_2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
    }
    if ((iVar8 < 0) || (param_2[1] <= iVar8)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(param_2[4] + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(undefined4 *)(iVar11 + 0x70 + *param_2) = 8;
    *(int *)((int)param_2 + 0x4a) = iVar8;
  }
LAB_004c2a1a:
  if (*(int *)((int)param_2 + 0x5e) == 0) {
    *(int *)((int)param_2 + 0x5e) = iVar8;
  }
  *(int *)((int)param_2 + 0x5a) = iVar8;
  return 1;
}



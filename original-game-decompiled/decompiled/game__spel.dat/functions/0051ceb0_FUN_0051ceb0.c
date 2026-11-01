
/* ==== FUN_0051ceb0 @ 0051ceb0 ==== 
 * signature: undefined __cdecl FUN_0051ceb0(int param_1, int param_2, undefined4 param_3)
 * body: 0051ceb0-0051d849
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0051ceb0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uStack00000004;
  double in_stack_00000000;
  int iStack00000018;
  char *pcVar6;
  int local_18;
  int local_14;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (DAT_0074be68 != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_initqhull_globals__for__s_____005be264);
  }
  uStack00000004 = (undefined4)((ulonglong)in_stack_00000000 >> 0x20);
  DAT_0074c04c = param_3;
  DAT_0074c048 = uStack00000004;
  DAT_0074c044 = param_1;
  DAT_0074c040 = param_2;
  DAT_0074c03c = param_2;
  if ((((DAT_0074bec4 == 0) && (DAT_0074be90 == 0)) && (DAT_0074bed8 == 0)) &&
     (8.988465674311579e+307 < _DAT_0074c668)) {
    DAT_0074be98 = 1;
    if (param_2 < 5) {
      DAT_0074bed8 = 1;
      pcVar6 = s__pre_merge_005be258;
    }
    else {
      DAT_0074be90 = 1;
      pcVar6 = s__merge_exact_005be248;
    }
    FUN_0051df40(pcVar6,0,0);
  }
  if (((_DAT_0074c668 < 8.988465674311579e+307) && (DAT_0074be40 != 0)) &&
     ((DAT_0074bfcc == 0 && (DAT_0074bfd0 == 0)))) {
    DAT_0074bfd0 = 1;
    FUN_0051df40(s_Qbbound_last_qj_005be238,0,0);
  }
  if (((DAT_0074be98 != 0) && (DAT_0074bed4 == 0)) &&
     ((8.988465674311579e+307 < _DAT_0074be30 && (_DAT_0074bea0 == 0.0)))) {
    DAT_0074c464 = 1;
    DAT_0074c6d8 = 1;
    FUN_0051df40(s__zero_centrum_005be228,0,0);
  }
  if ((((DAT_0074be6c != 0) || (_DAT_0074be80 < 8.988465674311579e+307)) || (DAT_0074be78 != 0)) ||
     (DAT_0074be40 != 0)) {
    if ((DAT_0074beec == 0) && (DAT_0074bef4 == 0)) {
      DAT_0074beec = 1;
      FUN_0051df40(s_Pgood_005be220,0,0);
    }
    if (DAT_0074be40 == 0) goto LAB_0051d0da;
    if ((DAT_0074be70 != 0) && (DAT_0074be74 == 0)) {
      DAT_0074be74 = 1;
      FUN_0051df40(s_Qinterior_keep_005bd17c,0,0);
    }
    if (DAT_0074be40 == 0) goto LAB_0051d0da;
    if (DAT_0074be64 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__can_not_use_D_005be1bc);
      FUN_0051e8e0(1,(int *)0x0);
    }
    if (DAT_0074be40 == 0) goto LAB_0051d0da;
LAB_0051d106:
    if ((DAT_0074c00c != 0) && (DAT_0074be18 != 0)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__can_not_use_i_005be0fc);
      FUN_0051e8e0(1,(int *)0x0);
    }
  }
  else {
LAB_0051d0da:
    if ((DAT_0074c00c != 0) || (DAT_0074be18 != 0)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__use_upper_Del_005be150);
      FUN_0051e8e0(1,(int *)0x0);
      goto LAB_0051d106;
    }
  }
  if ((DAT_0074bfd0 != 0) && (DAT_0074be40 == 0)) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_warning__option__Qbb_005be0a0);
  }
  if (((DAT_0074be4c == 0) && (DAT_0074bfd8 == 0)) && (DAT_0074be98 != 0)) {
    DAT_0074c028 = 1;
    if (((DAT_0074be74 != 0) && (DAT_0074be70 != 0)) || (DAT_0074c038 = 1, DAT_0074bec0 != 0))
    goto LAB_0051d19d;
  }
  else {
    DAT_0074c028 = 0;
LAB_0051d19d:
    DAT_0074c038 = 0;
  }
  if (DAT_0074be98 == 0) {
    if (DAT_0074c018 != 0) {
      DAT_0074c65c = 1;
    }
  }
  else {
    DAT_0074c65c = 2;
  }
  if ((DAT_0074bfec != 0) && (DAT_0074be98 == 0)) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__test_vertex_n_005be058);
    FUN_0051e8e0(1,(int *)0x0);
  }
  if (((DAT_0074bf90 != 0) || ((DAT_0074be40 != 0 && (DAT_0074bf8c != 0)))) &&
     (DAT_0074c03c = DAT_0074c03c - DAT_0074bf90, DAT_0074be40 != 0)) {
    local_10 = 1;
    DAT_0074c03c = DAT_0074c03c + 1;
  }
  if (DAT_0074c03c < 2) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__dimension__d_must_b_005be030);
    FUN_0051e8e0(1,(int *)0x0);
  }
  _DAT_0074c020 = 1.0;
  iStack00000018 = 2;
  if (2 < DAT_0074c03c) {
    do {
      iVar2 = iStack00000018 + 1;
      _DAT_0074c020 = _DAT_0074c020 * (double)iStack00000018;
      iStack00000018 = iVar2;
    } while (iVar2 < DAT_0074c03c);
  }
  _DAT_0074c020 = 1.0 / _DAT_0074c020;
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_initqhull_globals__initialize_005bdfc8);
  }
  iVar3 = DAT_0074c03c;
  DAT_0074c5f4 = DAT_0074c03c * 8;
  iVar2 = DAT_0074c03c + 1;
  DAT_0074c5f8 = DAT_0074c5f4 + -8;
  if (6 < DAT_0074c03c) {
    DAT_0074beb0 = 0;
    FUN_0051df40(s_Q3_no_merge_vertices_dim_high_005bdfa8,0,0);
  }
  if (DAT_0074be50 != 0) {
    iVar2 = iVar3 + 2;
  }
  if (DAT_0074bfc4 < 2) {
    if (((DAT_0074bff8 == -1) && (8.988465674311579e+307 <= _DAT_0074c000)) && (DAT_0074c008 == 0))
    goto LAB_0051d377;
    DAT_0074bff0 = DAT_0074be68;
    if (DAT_0074be68 == 0) {
      DAT_0074bff0 = 3;
    }
  }
  else {
    DAT_0074bff4 = DAT_0074be68;
    if (DAT_0074be68 == -1) goto LAB_0051d377;
  }
  DAT_0074be68 = 0;
LAB_0051d377:
  if ((DAT_0074bfc8 == 0) || (DAT_0074bfc8 == -1)) {
    local_18 = FUN_00559f8f(&iStack_4);
    if (DAT_0074bfc8 == -1) {
      local_18 = -local_18;
      pcVar6 = s_QRandom_seed_005bceb8;
    }
    else {
      pcVar6 = s_QRotate_random_005bdf98;
    }
    FUN_0051df40(pcVar6,(int)&local_18,0);
    DAT_0074bfc8 = local_18;
  }
  if (DAT_0074bfc8 == -0x80000000) {
    local_18 = 1;
  }
  else {
    local_18 = DAT_0074bfc8;
    if (DAT_0074bfc8 < 0) {
      local_18 = -DAT_0074bfc8;
    }
  }
  FUN_0052bd70(local_18);
  in_stack_00000000 = 0.0;
  iVar3 = 1000;
  do {
    iStack00000018 = FUN_0052bd10();
    in_stack_00000000 = (double)iStack00000018 + in_stack_00000000;
    if (2147483646.0 < (double)iStack00000018) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_configuration_error__qh_RA_005bdf38);
      FUN_0051e8e0(1,(int *)0x0);
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0052bd70(local_18);
  if ((in_stack_00000000 * 0.001 < 214748364.6) || (10737418230.0 < in_stack_00000000 * 0.001)) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_configuration_warning__qh__005bde90);
  }
  _DAT_0074bfa8 = _DAT_0074bfa0 * 9.313225754828403e-10;
  _DAT_0074bfb0 = 1.0 - _DAT_0074bfa0;
  if (local_10 + param_1 < iVar2) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__not_enough_po_005bde3c);
    FUN_0051e8e0(1,(int *)0x0);
  }
  if (DAT_0074bf88 != 0) {
    if ((((DAT_0074c03c != 4) || (DAT_0074be40 == 0)) || (DAT_0074c018 != 0)) || (-1 < DAT_0074be48)
       ) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__transparent_D_005bdde8);
      FUN_0051e8e0(1,(int *)0x0);
    }
    DAT_0074be48 = 3;
    DAT_0074bf78 = 1;
  }
  iVar2 = iStack_c;
  piVar4 = &DAT_0074bf74;
  iVar3 = iStack_8;
  do {
    iVar1 = *piVar4;
    if (iVar1 == 7) {
      local_14 = 1;
    }
    else if (iVar1 == 0xe) {
      iVar2 = 1;
    }
    else if (iVar1 == 3) {
      iVar3 = 1;
    }
    else if (iVar1 == 0x13) {
      iVar3 = 1;
    }
    else {
      if ((iVar1 == 0x12) && (DAT_0074be64 == 0)) {
        pcVar6 = s_qhull_input_error__option__Fp__i_005bdd90;
      }
      else if ((iVar1 == 0x18) && ((DAT_0074be64 != 0 || (DAT_0074c018 != 0)))) {
        pcVar6 = s_qhull_input_error__option__Ft__i_005bdd30;
      }
      else {
        if ((iVar1 != 4) || (DAT_0074c018 == 0)) {
          if (iVar1 == 0x19) {
            if (DAT_0074c018 == 0) {
              pcVar6 = s_Fvertices_005bdccc;
            }
            else {
              pcVar6 = s_Fvoronoi_005bdcd8;
            }
            FUN_0051df40(pcVar6,0,0);
          }
          goto LAB_0051d647;
        }
        pcVar6 = s_qhull_input_error__option__Fc__i_005bdce4;
      }
      FUN_00558953(DAT_0074c5ec,(byte *)pcVar6);
      FUN_0051e8e0(1,(int *)0x0);
    }
LAB_0051d647:
    bVar5 = piVar4 == &DAT_0074bf08;
    piVar4 = piVar4 + -1;
    if (bVar5) {
      if ((((DAT_0074be70 == 0) && (DAT_0074be74 == 0)) && (DAT_0074bec8 == 0)) &&
         (((DAT_0074bee0 != 0 && (DAT_0074bf7c != 0)) || (iVar3 != 0)))) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_warning__options__Fc_005bdc5c);
      }
      if ((iVar2 != 0) && (((3 < DAT_0074c03c || (DAT_0074c018 != 0)) || (DAT_0074be64 != 0)))) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__Mathematica_o_005bdbe8);
        FUN_0051e8e0(1,(int *)0x0);
      }
      if (local_14 != 0) {
        if (4 < DAT_0074c03c) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__Geomview_outp_005bdb9c);
          FUN_0051e8e0(1,(int *)0x0);
        }
        if ((DAT_0074bef8 != 0) &&
           (DAT_0074be44 + DAT_0074bee8 + DAT_0074bedc + DAT_0074bf7c + DAT_0074bee0 + DAT_0074bf78
            == 0)) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__no_output_spe_005bdb64);
          FUN_0051e8e0(1,(int *)0x0);
        }
        if ((DAT_0074c018 != 0) && ((3 < DAT_0074c03c || (-1 < DAT_0074be48)))) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__Geomview_outp_005bdb1c);
          FUN_0051e8e0(1,(int *)0x0);
        }
        if (((DAT_0074c03c == 4) && (DAT_0074be48 == -1)) &&
           ((DAT_0074bee0 != 0 || ((DAT_0074bf7c != 0 || (DAT_0074bedc != 0)))))) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_warning__coplanars__v_005bda98);
          DAT_0074bedc = 0;
          DAT_0074bf7c = 0;
          DAT_0074bee0 = 0;
        }
      }
      DAT_0074bee4 = DAT_0074c03c;
      if (DAT_0074be48 < 0) {
        if (DAT_0074c018 != 0) {
          DAT_0074be48 = DAT_0074c03c + -1;
          DAT_0074bee4 = DAT_0074be48;
        }
      }
      else {
        if (DAT_0074c03c <= DAT_0074be48) {
          DAT_0074be48 = 0xffffffff;
          return;
        }
        DAT_0074bee4 = DAT_0074c03c + -1;
        if ((local_14 == 0) || (DAT_0074c03c < 3)) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_warning__drop_dimens_005bda44);
          return;
        }
      }
      return;
    }
  } while( true );
}



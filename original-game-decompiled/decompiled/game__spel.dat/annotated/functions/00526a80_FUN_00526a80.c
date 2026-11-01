
/* ==== FUN_00526a80 @ 00526a80 ==== 
 * signature: undefined __cdecl FUN_00526a80(int * param_1)
 * body: 00526a80-005271bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00526a80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_24;
  ulonglong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_24 = 0;
  iVar2 = FUN_00514af0(DAT_0074c6ec);
  iVar2 = iVar2 + DAT_0074c044;
  iVar3 = FUN_00514af0(DAT_0074c6f0);
  iVar3 = DAT_0074c638 - iVar3;
  iVar4 = FUN_005164c0(DAT_0074be54);
  for (iVar1 = DAT_0074c600; (iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0));
      iVar1 = *(int *)(iVar1 + 0x30)) {
    if (*(int **)(iVar1 + 0x44) != (int *)0x0) {
      iVar5 = FUN_00514af0(*(int **)(iVar1 + 0x44));
      local_24 = local_24 + iVar5;
    }
  }
  if (((-1 < iVar4) && (DAT_0074bfe4 + -1 != iVar4)) && (-1 - DAT_0074bfe8 != iVar4)) {
    iVar2 = iVar2 + -1;
  }
  if ((DAT_0074bfe4 != 0) || (DAT_0074bfe8 != 0)) {
    FUN_00558953(param_1,(byte *)s_At_a_premature_exit_due_to__TVn__005c18b4);
  }
  if (DAT_0074c018 == 0) {
    if (DAT_0074be40 == 0) {
      if (DAT_0074be64 == 0) {
        FUN_00558953(param_1,(byte *)s_Convex_hull_of__d_points_in__d_d_005c1548);
        FUN_00558953(param_1,(byte *)s_Number_of_vertices___d_005c152c);
        if (local_24 != 0) {
          FUN_00558953(param_1,(byte *)s_Number_of__s_points___d_005c14e0);
        }
        FUN_00558953(param_1,(byte *)s_Number_of_facets___d_005c14c8);
        if (DAT_0074c640 != 0) {
          pcVar6 = s_Number_of__good__facets___d_005c14a8;
          goto LAB_00526dd8;
        }
      }
      else {
        FUN_00558953(param_1,(byte *)s_Halfspace_intersection_by_the_co_005c1638);
        FUN_00558953(param_1,(byte *)s_Number_of_nonredundant_halfspace_005c160c);
        if (local_24 != 0) {
          FUN_00558953(param_1,(byte *)s_Number_of__s_halfspaces___d_005c15c0);
        }
        FUN_00558953(param_1,(byte *)s_Number_of_intersection_points____005c1598);
        if (DAT_0074c640 != 0) {
          pcVar6 = s_Number_of__good__intersections____005c1570;
LAB_00526dd8:
          FUN_00558953(param_1,(byte *)pcVar6);
        }
      }
    }
    else {
      if (DAT_0074c00c == 0) {
        pcVar6 = s_Delaunay_triangulation_by_the_co_005c16c0;
      }
      else {
        pcVar6 = s_Furthest_site_Delaunay_triangula_005c1704;
      }
      FUN_00558953(param_1,(byte *)pcVar6);
      FUN_00558953(param_1,(byte *)s_Number_of_input_sites_s___d_005c16a0);
      if (local_24 == 0) {
        if (iVar3 < iVar2) {
          pcVar6 = s_Total_number_of_nearly_incident_p_005c179c;
          goto LAB_00526c72;
        }
      }
      else {
        pcVar6 = s_Number_of_nearly_incident_points_005c17cc;
LAB_00526c72:
        FUN_00558953(param_1,(byte *)pcVar6);
      }
      FUN_00558953(param_1,(byte *)s_Number_of_Delaunay_facets___d_005c167c);
      FUN_00558953(param_1,(byte *)s_Number_of_facets_in_hull___d_005c1758);
    }
  }
  else {
    if (DAT_0074c00c == 0) {
      pcVar6 = s_Voronoi_diagram_by_the_convex_hu_005c182c;
    }
    else {
      pcVar6 = s_Furthest_site_Voronoi_vertices_b_005c1868;
    }
    FUN_00558953(param_1,(byte *)pcVar6);
    FUN_00558953(param_1,(byte *)s_Number_of_Voronoi_regions_s___d_005c17f4);
    if (local_24 == 0) {
      if (iVar3 < iVar2) {
        pcVar6 = s_Total_number_of_nearly_incident_p_005c179c;
        goto LAB_00526bbb;
      }
    }
    else {
      pcVar6 = s_Number_of_nearly_incident_points_005c17cc;
LAB_00526bbb:
      FUN_00558953(param_1,(byte *)pcVar6);
    }
    FUN_00558953(param_1,(byte *)s_Number_of_Voronoi_vertices___d_005c1778);
    FUN_00558953(param_1,(byte *)s_Number_of_facets_in_hull___d_005c1758);
  }
  FUN_00558953(param_1,(byte *)s_Statistics_for___s____s_005c148c);
  if (DAT_0074bfc8 == -0x80000000) {
    FUN_00558953(param_1,&DAT_005be68c);
  }
  else {
    FUN_00558953(param_1,(byte *)s_QR_d_005c1484);
  }
  FUN_00558953(param_1,(byte *)s_Number_of_points_processed___d_005c1460);
  FUN_00558953(param_1,(byte *)s_Number_of_hyperplanes_created____005c1438);
  FUN_00558953(param_1,(byte *)s_Number_of_distance_tests_for_qhu_005c140c);
  if ((DAT_0074c8f0 - DAT_0074c8f8) + DAT_0074cd50 != 0) {
    FUN_00558953(param_1,(byte *)s_Number_of_merged_facets___d_005c13ec);
    FUN_00558953(param_1,(byte *)s_Number_of_distance_tests_for_mer_005c13c0);
  }
  if ((DAT_0074bfb8 == 0) && (DAT_0074c6bc != 0)) {
    local_20 = (ulonglong)DAT_0074c650;
    _DAT_0074c8e0 = (double)((float)local_20 * 0.001);
    FUN_00558953(param_1,(byte *)s_CPU_seconds_to_compute_hull__aft_005c138c);
  }
  if (DAT_0074bfc4 == 0) {
    if (8.988465674311579e+307 <= (double)CONCAT44(DAT_0074c66c,DAT_0074c668)) goto LAB_00526faa;
    if (DAT_0074ccb8 != 0) {
      FUN_00558953(param_1,(byte *)s_After__d_retries__input_joggled_b_005c1328);
      goto LAB_00526faa;
    }
    pcVar6 = s_Input_joggled_by___2_2g_005c130c;
  }
  else {
    if ((DAT_0074bed8 != 0) || (DAT_0074be90 != 0)) goto LAB_00526faa;
    pcVar6 = s_Percentage_of_runs_with_precisio_005c1358;
  }
  FUN_00558953(param_1,(byte *)pcVar6);
LAB_00526faa:
  if ((double)CONCAT44(DAT_0074c6c4,DAT_0074c6c0) != 0.0) {
    FUN_00558953(param_1,(byte *)s__s_facet_area___2_8g_005c12dc);
  }
  if ((double)CONCAT44(DAT_0074c6cc,DAT_0074c6c8) != 0.0) {
    FUN_00558953(param_1,(byte *)s__s_volume___2_8g_005c12c0);
  }
  if (DAT_0074be98 != 0) {
    FUN_0052b650(0,(double *)&local_18,(double *)&local_10);
    if (_DAT_0074c490 + _DAT_0074c490 < (double)CONCAT44(uStack_14,local_18)) {
      FUN_00558953(param_1,(byte *)s_Maximum_distance_of__spoint_abov_005c1284);
      if ((((double)CONCAT44(uStack_14,local_18) / (_DAT_0074c4f0 + _DAT_0074c490) <= 0.05) ||
          (_DAT_0074c4f0 <= _DAT_0074be10)) ||
         ((double)CONCAT44(DAT_0074c66c,DAT_0074c668) <= 8.988465674311579e+307)) {
        FUN_00558953(param_1,&DAT_005ae60c);
      }
      else {
        FUN_00558953(param_1,(byte *)s____1fx__005c1278);
      }
    }
    if ((double)CONCAT44(uStack_c,local_10) < _DAT_0074c490 * -2.0) {
      FUN_00558953(param_1,(byte *)s_Maximum_distance_of__svertex_bel_005c1244);
      if ((-((double)CONCAT44(uStack_c,local_10) / (_DAT_0074c4f0 + _DAT_0074c490)) <= 0.05) ||
         ((double)CONCAT44(DAT_0074c66c,DAT_0074c668) <= 8.988465674311579e+307)) {
        FUN_00558953(param_1,&DAT_005ae60c);
      }
      else {
        FUN_00558953(param_1,(byte *)s____1fx__005c1278);
      }
    }
  }
  FUN_00558953(param_1,&DAT_005ae60c);
  return;
}



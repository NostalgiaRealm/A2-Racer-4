
/* ==== FUN_00532210 @ 00532210 ==== 
 * signature: undefined __cdecl FUN_00532210(int * param_1)
 * body: 00532210-0053247c
 */

void __cdecl FUN_00532210(int *param_1)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  double local_10;
  
  FUN_00558953(param_1,(byte *)s_The_input_to_qhull_appears_to_be_005c4e30);
  FUN_00533360(param_1,&DAT_00712694,DAT_0074c600,0,1);
  FUN_00558953(param_1,(byte *)s_The_center_point_is_coplanar_wit_005c4d44);
  FUN_00532a30(param_1,s_center_point_005c4d34,DAT_0074c03c,(int)DAT_0074c5f0,-1);
  FUN_00558953(param_1,&DAT_005ae60c);
  for (iVar5 = DAT_0074c600; (iVar5 != 0 && (*(int *)(iVar5 + 0x30) != 0));
      iVar5 = *(int *)(iVar5 + 0x30)) {
    FUN_00558953(param_1,(byte *)s_facet_005c4d2c);
    iVar3 = *(int *)(iVar5 + 0x34);
    if (iVar3 != 0) {
      piVar4 = (int *)(iVar3 + 4);
      iVar3 = *(int *)(iVar3 + 4);
      while (iVar3 != 0) {
        piVar4 = piVar4 + 1;
        FUN_005164c0(*(uint *)(iVar3 + 8));
        FUN_00558953(param_1,&DAT_005c2844);
        iVar3 = *piVar4;
      }
    }
    DAT_0074c968 = DAT_0074c968 + 1;
    FUN_005273a0(DAT_0074c5f0,iVar5,&local_10);
    FUN_00558953(param_1,(byte *)s_distance___4_2g_005c4d18);
  }
  if (DAT_0074be64 != 0) {
    FUN_00558953(param_1,(byte *)s_These_points_are_the_dual_of_the_005c4cac);
  }
  FUN_00558953(param_1,(byte *)s_These_points_either_have_a_maxim_005c4bf0);
  if (7 < DAT_0074c03c) {
    FUN_00558953(param_1,(byte *)s_Because_of_the_high_dimension__t_005c4ae8);
  }
  FUN_00558953(param_1,(byte *)s_The_min_and_max_coordinates_for_e_005c4ab0);
  iVar5 = 0;
  if (0 < DAT_0074c03c) {
    do {
      dVar1 = 1.79769313486232e+308;
      local_18 = 0;
      uStack_14 = 0x80100000;
      pdVar2 = (double *)(DAT_0074c048 + iVar5 * 8);
      for (iVar3 = DAT_0074c044; iVar3 != 0; iVar3 = iVar3 + -1) {
        if ((double)CONCAT44(uStack_14,local_18) < *pdVar2) {
          local_18 = *(undefined4 *)pdVar2;
          uStack_14 = *(undefined4 *)((int)pdVar2 + 4);
        }
        if (*pdVar2 < dVar1) {
          dVar1 = *pdVar2;
        }
        pdVar2 = pdVar2 + DAT_0074c03c;
      }
      FUN_00558953(param_1,(byte *)s__d___8_4g__8_4g_difference___4_4_005c4a88);
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_0074c03c);
  }
  FUN_00558953(param_1,(byte *)s_If_the_input_should_be_full_dime_005c48a0);
  FUN_00558953(param_1,(byte *)s_If_the_input_is_lower_dimensiona_005c46dc);
  if ((DAT_0074be40 != 0) && (DAT_0074be18 == 0)) {
    FUN_00558953(param_1,(byte *)s_This_is_a_Delaunay_triangulation_005c4604);
  }
  return;
}



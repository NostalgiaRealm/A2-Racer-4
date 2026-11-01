
/* ==== FUN_005245d0 @ 005245d0 ==== 
 * signature: undefined __cdecl FUN_005245d0(int * param_1)
 * body: 005245d0-00524875
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_005245d0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  int local_14;
  double local_10;
  
  if (DAT_0074c044 == DAT_0074c638) {
    fVar2 = FUN_00524a50(DAT_0074cc60,(double)CONCAT44(DAT_0074cc6c,DAT_0074cc68),_DAT_0074cc70,
                         &local_10);
    _DAT_0074cc70 = (double)fVar2;
  }
  else {
    DAT_0074cc68 = 0;
    DAT_0074cc6c = 0;
    _DAT_0074cc70 = 0.0;
  }
  fVar2 = FUN_00524a50(DAT_0074cc88,(double)CONCAT44(DAT_0074cb9c,DAT_0074cb98),_DAT_0074cba0,
                       &local_10);
  _DAT_0074cba0 = (double)fVar2;
  FUN_00558953(param_1,(byte *)s__s_qhull_invoked_by___s____s__s_w_005c081c);
  FUN_00558953(param_1,(byte *)s_precision_constants___6_2g_max__a_005c0690);
  if (DAT_0074c038 != 0) {
    FUN_00558953(param_1,(byte *)s__6_2g_max__distance_for_near_ins_005c0660);
  }
  if ((double)CONCAT44(DAT_0074be34,DAT_0074be30) < 8.988465674311579e+307) {
    FUN_00558953(param_1,(byte *)s__6_2g_max__cosine_for_pre_merge_a_005c0638);
  }
  if (DAT_0074bed8 != 0) {
    FUN_00558953(param_1,(byte *)s__6_2g_radius_of_pre_merge_centru_005c0614);
  }
  if ((double)CONCAT44(DAT_0074be3c,DAT_0074be38) < 8.988465674311579e+307) {
    FUN_00558953(param_1,(byte *)s__6_2g_max__cosine_for_post_merge_005c05e8);
  }
  if (DAT_0074bed4 != 0) {
    FUN_00558953(param_1,(byte *)s__6_2g_radius_of_post_merge_centr_005c05c0);
  }
  FUN_00558953(param_1,(byte *)s__6_2g_max__distance_for_merging_t_005c0510);
  iVar1 = 0;
  if (0 < DAT_0074c03c) {
    do {
      FUN_00558953(param_1,(byte *)s__6_2e_005c0508);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0074c03c);
  }
  FUN_00558953(param_1,&DAT_005be68c);
  local_14 = 0;
  if (0 < DAT_0074d508) {
    do {
      FUN_005249f0(param_1,local_14,&local_14);
    } while (local_14 < DAT_0074d508);
  }
  return;
}



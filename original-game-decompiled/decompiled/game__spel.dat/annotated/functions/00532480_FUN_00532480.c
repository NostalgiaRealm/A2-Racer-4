
/* ==== FUN_00532480 @ 00532480 ==== 
 * signature: undefined __cdecl FUN_00532480(int * param_1, int param_2, int param_3, int * param_4)
 * body: 00532480-005327a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00532480(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  char *pcVar8;
  int local_6c;
  int local_68;
  int *local_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28 [4];
  
  fVar7 = FUN_005282b0(*(double **)(param_2 + 0x18),*(double **)(param_3 + 0x18));
  local_50 = (double)fVar7;
  local_58 = (double)((float10)1.0 - fVar7 * (float10)local_50);
  FUN_00514af0(param_4);
  if (DAT_0074c03c == 3) {
    FUN_00558953(param_1,(byte *)s_VECT_1__d_1__d_1_005c4f70);
  }
  else if ((DAT_0074c03c == 4) && (-1 < DAT_0074be48)) {
    FUN_00558953(param_1,(byte *)s_OFF_3_1_1_005c4f64);
  }
  else {
    DAT_0074c6b4 = DAT_0074c6b4 + 1;
  }
  FUN_00558953(param_1,(byte *)s___intersect_f_d_f_d_005c4f4c);
  local_60 = 1.0 / (_DAT_0074c498 * 10.0);
  if (param_4 != (int *)0x0) {
    iVar1 = param_4[1];
    local_64 = param_4 + 2;
    while (iVar1 != 0) {
      DAT_0074c968 = DAT_0074c968 + 2;
      FUN_005273a0(*(double **)(iVar1 + 8),param_2,&local_38);
      FUN_005273a0(*(double **)(iVar1 + 8),param_3,&local_30);
      fVar7 = FUN_0052a0c0(local_30 * local_50 - local_38,local_58,local_60,&local_6c);
      local_40 = (double)fVar7;
      fVar7 = FUN_0052a0c0(local_38 * local_50 - local_30,local_58,local_60,&local_68);
      local_48 = (double)fVar7;
      if ((local_6c != 0) || (local_68 != 0)) {
        local_48 = 0.0;
        local_40 = 0.0;
      }
      if (DAT_0074c03c != 0) {
        iVar2 = *(int *)(param_2 + 0x18);
        iVar3 = *(int *)(param_3 + 0x18);
        pdVar4 = (double *)(iVar2 + (DAT_0074c03c + -1) * 8);
        iVar5 = DAT_0074c03c + -1;
        do {
          bVar6 = iVar5 != 0;
          *(double *)((int)local_28 + (8 - iVar2) + (int)(pdVar4 + -1)) =
               local_40 * *pdVar4 +
               local_48 * *(double *)((iVar3 - iVar2) + (int)pdVar4) +
               *(double *)(*(int *)(iVar1 + 8) + iVar5 * 8);
          pdVar4 = pdVar4 + -1;
          iVar5 = iVar5 + -1;
        } while (bVar6);
      }
      if (DAT_0074bee4 < 4) {
        FUN_00533c70((undefined4 *)local_28,(undefined4 *)local_28);
        pcVar8 = s__8_4g__8_4g__8_4g___005c4f34;
      }
      else {
        pcVar8 = s__8_4g__8_4g__8_4g__8_4g___005c4f18;
      }
      FUN_00558953(param_1,(byte *)pcVar8);
      if (local_68 + local_6c == 0) {
        FUN_005164c0(*(uint *)(iVar1 + 8));
        pcVar8 = s_projected_p_d_005c4ef0;
      }
      else {
        FUN_005164c0(*(uint *)(iVar1 + 8));
        pcVar8 = s_p_d__coplanar_facets__005c4f00;
      }
      FUN_00558953(param_1,(byte *)pcVar8);
      iVar1 = *local_64;
      local_64 = local_64 + 1;
    }
  }
  if (DAT_0074c03c == 3) {
    FUN_00558953(param_1,(byte *)s__8_4g__8_4g__8_4g_1_0_005c382c);
    return;
  }
  if ((DAT_0074c03c == 4) && (-1 < DAT_0074be48)) {
    FUN_00558953(param_1,(byte *)s_3_0_1_2__8_4g__8_4g__8_4g_1_0_005c4ed0);
  }
  return;
}



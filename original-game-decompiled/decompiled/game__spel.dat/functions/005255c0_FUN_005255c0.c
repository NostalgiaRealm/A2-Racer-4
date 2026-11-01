
/* ==== FUN_005255c0 @ 005255c0 ==== 
 * signature: undefined __cdecl FUN_005255c0(double * param_1, int param_2)
 * body: 005255c0-005258c9
 */

void __cdecl FUN_005255c0(double *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int local_24;
  float local_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  DAT_0074c738 = DAT_0074bf98;
  DAT_0074bf98 = 0;
  if (param_1 != (double *)0x0) {
    local_18 = FUN_005164c0((uint)param_1);
    if (DAT_0074bff8 == local_18) {
      DAT_0074be68 = DAT_0074bff0;
      DAT_0074c788 = DAT_0074bff0;
    }
    if ((DAT_0074bfbc == 0) || (DAT_0074c644 - 1U <= DAT_0074c730 + DAT_0074bfbc)) {
      if (0 < DAT_0074be68) {
        uVar3 = FUN_00559348();
        uStack_1c = 0;
        local_20 = (float)(uint)((int)uVar3 - DAT_0074c650) * 0.001;
        FUN_005273a0(param_1,param_2,(double *)&local_10);
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_addpoint__add_p_d__v_d__to_hu_005c0c44);
      }
    }
    else {
      DAT_0074c730 = DAT_0074c644 - 1U;
      FUN_00559f8f(&local_24);
      FUN_0055b179(&local_24);
      uVar3 = FUN_00559348();
      uStack_1c = 0;
      DAT_0074c968 = DAT_0074c968 + 1;
      local_20 = (float)(uint)((int)uVar3 - DAT_0074c650) * 0.001;
      FUN_005273a0(param_1,param_2,(double *)&local_10);
      FUN_00558953(DAT_0074c5ec,(byte *)s_At__02d__02d__02d____2_5g_CPU_se_005c0cbc);
    }
    if (0x7fffffff < DAT_0074c6d0) {
      DAT_0074c6d0 = 0;
      for (iVar1 = DAT_0074c600; (iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0));
          iVar1 = *(int *)(iVar1 + 0x30)) {
        *(uint *)(iVar1 + 0x48) = DAT_0074c6d0;
      }
    }
    if (0x7fffffff < DAT_0074c6d4) {
      DAT_0074c6d4 = 0;
      for (piVar2 = DAT_0074c628; (piVar2 != (int *)0x0 && (*piVar2 != 0)); piVar2 = (int *)*piVar2)
      {
        piVar2[4] = DAT_0074c6d4;
      }
    }
    DAT_0074c660 = local_18;
    DAT_0074bf98 = DAT_0074c738;
    return;
  }
  FUN_00559f8f(&local_24);
  FUN_0055b179(&local_24);
  uVar3 = FUN_00559348();
  local_18 = (int)uVar3 - DAT_0074c650;
  uStack_14 = 0;
  FUN_00558953(DAT_0074c5ec,(byte *)s_At__02d__02d__02d____2_5g_CPU_se_005c0d90);
  return;
}



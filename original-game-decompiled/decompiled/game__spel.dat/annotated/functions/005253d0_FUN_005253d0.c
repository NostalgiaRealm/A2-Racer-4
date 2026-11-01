
/* ==== FUN_005253d0 @ 005253d0 ==== 
 * signature: undefined __cdecl FUN_005253d0(int * param_1)
 * body: 005253d0-005255b3
 */

void __cdecl FUN_005253d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  double *pdVar3;
  int *local_4;
  
  local_4 = DAT_0074c600;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_buildhull__start_build_hull_005c0c24);
    local_4 = DAT_0074c600;
  }
  for (; (piVar1 = DAT_0074c628, local_4 != (int *)0x0 && (local_4[0xc] != 0));
      local_4 = (int *)local_4[0xc]) {
    if ((local_4[0x14] & 0x600U) != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_buildhu_005c0bd4);
      FUN_0051e8e0(5,local_4);
      local_4 = param_1;
    }
  }
  for (; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)*piVar1) {
    if ((piVar1[5] & 0x10000000U) != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_buildhu_005c0b90);
      FUN_0051eb30(s_ERRONEOUS_005b9f2c,0,0,(int *)0x0,(int)piVar1);
      FUN_0051e8e0(5,(int *)0x0);
    }
    iVar2 = FUN_005164c0(piVar1[2]);
    if ((((0 < DAT_0074bfe8) && (iVar2 == DAT_0074bfe8 + -1)) ||
        ((DAT_0074bfe8 < 0 && (iVar2 == -1 - DAT_0074bfe8)))) ||
       ((0 < DAT_0074bfe4 && (iVar2 == DAT_0074bfe4 + -1)))) {
      if (DAT_0074be68 < 1) {
        return;
      }
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_buildhull__stop_point_or_cone_005c0ad8);
      return;
    }
  }
  DAT_0074c608 = DAT_0074c600;
  pdVar3 = (double *)FUN_00525ce0((int *)&local_4);
  while (pdVar3 != (double *)0x0) {
    DAT_0074c63c = DAT_0074c63c + -1;
    iVar2 = FUN_00524d10(pdVar3,local_4,DAT_0074becc);
    if (iVar2 == 0) break;
    pdVar3 = (double *)FUN_00525ce0((int *)&local_4);
  }
  if (DAT_0074c4e0 != 0) {
    FUN_00519f90();
  }
  if ((DAT_0074c63c != 0) && (pdVar3 == (double *)0x0)) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_buildhu_005c0b40);
    FUN_0051e8e0(5,(int *)0x0);
  }
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_buildhull__completed_the_hull_005c0b10);
  }
  return;
}



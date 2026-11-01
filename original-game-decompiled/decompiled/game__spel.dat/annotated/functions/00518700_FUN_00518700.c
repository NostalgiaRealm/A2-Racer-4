
/* ==== FUN_00518700 @ 00518700 ==== 
 * signature: undefined __cdecl FUN_00518700(int param_1)
 * body: 00518700-00518905
 */

void __cdecl FUN_00518700(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar4 = 0;
  local_1c = 0;
  local_18 = 0xffffffff;
  uStack_14 = 0x7fefffff;
  if ((((DAT_0074be5c != 0) || (DAT_0074be58 != 0)) || (DAT_0074be50 != 0)) || (DAT_0074bfe0 != 0))
  {
    iVar3 = param_1;
    if (DAT_0074bec8 == 0) {
      FUN_00518430(DAT_0074c600,0);
    }
    while ((iVar3 != 0 && (iVar2 = *(int *)(iVar3 + 0x30), iVar2 != 0))) {
      puVar1 = (uint *)(iVar3 + 0x50);
      iVar3 = iVar2;
      if ((*puVar1 & 0x40000) != 0) {
        iVar4 = iVar4 + 1;
      }
    }
    iVar3 = param_1;
    if ((DAT_0074be5c < 0) || ((0 < DAT_0074be5c && (DAT_0074be98 != 0)))) {
      for (; (iVar3 != 0 && (*(int *)(iVar3 + 0x30) != 0)); iVar3 = *(int *)(iVar3 + 0x30)) {
        if (((*(uint *)(iVar3 + 0x50) & 0x40000) != 0) &&
           (iVar2 = FUN_00519690(DAT_0074be60,*(int *)(iVar3 + 0x34)),
           (iVar2 != 0) != 0 < DAT_0074be5c)) {
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) {
            FUN_005164c0(DAT_0074be60);
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__good_vertex_p_d_d_005bbc64);
            return;
          }
          *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xfffbffff;
        }
      }
    }
    if (DAT_0074bfe0 != 0) {
      for (; (param_1 != 0 && (*(int *)(param_1 + 0x30) != 0)); param_1 = *(int *)(param_1 + 0x30))
      {
        if (((*(uint *)(param_1 + 0x50) & 0x40000) != 0) &&
           (iVar3 = FUN_0052ab60(*(int *)(param_1 + 0x18),(double *)&local_10), iVar3 == 0)) {
          iVar4 = iVar4 + -1;
          *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffbffff;
          if ((double)CONCAT44(uStack_c,local_10) < (double)CONCAT44(uStack_14,local_18)) {
            local_18 = local_10;
            uStack_14 = uStack_c;
            local_1c = param_1;
          }
        }
      }
      if ((iVar4 == 0) && (local_1c != 0)) {
        *(uint *)(local_1c + 0x50) = *(uint *)(local_1c + 0x50) | 0x40000;
        if (DAT_0074be68 == 0) {
          return;
        }
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findgood_all__f_d_is_closest___005bbcb4);
        return;
      }
    }
    DAT_0074c640 = iVar4;
    if (DAT_0074be68 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findgood_all___d_good_facets_r_005bbc28);
    }
  }
  return;
}



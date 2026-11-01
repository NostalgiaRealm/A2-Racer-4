
/* ==== FUN_00517f30 @ 00517f30 ==== 
 * signature: undefined __cdecl FUN_00517f30(int param_1)
 * body: 00517f30-0051803a
 */

void __cdecl FUN_00517f30(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int *local_4;
  
  local_4 = (int *)0x0;
  iVar1 = FUN_005164c0(*(uint *)(param_1 + 8));
  bVar4 = iVar1 == -1;
  if (bVar4) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkve_005bba78);
  }
  if ((*(uint *)(param_1 + 0x14) & 0xffffff) < DAT_0074c64c) {
    if (!bVar4) {
      if ((*(uint *)(param_1 + 0x14) & 0x8000000) != 0) {
        return;
      }
      iVar1 = FUN_00514af0(*(int **)(param_1 + 0xc));
      if (iVar1 == 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        return;
      }
      piVar3 = *(int **)(iVar1 + 4);
      piVar2 = (int *)(iVar1 + 4);
      if (piVar3 == (int *)0x0) {
        return;
      }
      do {
        piVar2 = piVar2 + 1;
        iVar1 = FUN_00514680(piVar3[0xd],param_1);
        if (iVar1 == 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkve_005bb9ec);
          bVar4 = true;
          local_4 = piVar3;
        }
        piVar3 = (int *)*piVar2;
      } while (piVar3 != (int *)0x0);
      if (!bVar4) {
        return;
      }
    }
  }
  else {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkve_005bba38);
  }
  FUN_0051eb30(s_ERRONEOUS_005b9f2c,0,0,(int *)0x0,param_1);
  FUN_0051e8e0(5,local_4);
  return;
}



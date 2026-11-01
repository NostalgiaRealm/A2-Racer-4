
/* ==== FUN_00537100 @ 00537100 ==== 
 * signature: undefined __cdecl FUN_00537100(int param_1, int param_2)
 * body: 00537100-0053727e
 */

void __cdecl FUN_00537100(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *local_8;
  int local_4;
  
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_vneighbors__update_005c6538);
  }
  local_4 = DAT_0074c6d0 + -1;
  *(int *)(param_2 + 0x48) = local_4;
  local_8 = FUN_005345e0(param_1);
  FUN_00514020((int *)&local_8,*(int *)(*(int *)(param_1 + 0x34) + 4));
  if (local_8 != (int *)0x0) {
    piVar6 = local_8 + 1;
    iVar2 = local_8[1];
    while (iVar2 != 0) {
      piVar6 = piVar6 + 1;
      iVar3 = *(int *)(iVar2 + 0xc);
      piVar1 = (int *)(iVar2 + 0xc);
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x4000000;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 4);
        piVar5 = (int *)(iVar3 + 8);
        while (iVar4 != 0) {
          if (*(int *)(iVar4 + 0x48) == local_4) {
            piVar5[-1] = 0;
          }
          iVar4 = *piVar5;
          piVar5 = piVar5 + 1;
        }
      }
      FUN_005141f0((int *)*piVar1);
      FUN_00514020(piVar1,param_2);
      if (*(int *)(*piVar1 + 8) == 0) {
        DAT_0074c900 = DAT_0074c900 + 1;
        if (1 < DAT_0074be68) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_vneighbors__delete_005c64f0);
        }
        FUN_00514450(*(int **)(param_2 + 0x34),iVar2);
        *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x8000000;
        FUN_00514020(&DAT_0074c6f0,iVar2);
      }
      iVar2 = *piVar6;
    }
  }
  FUN_00514ba0((int *)&local_8);
  if (2 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_vneighbors__merged_005c64ac);
  }
  return;
}



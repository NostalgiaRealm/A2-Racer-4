
/* ==== FUN_00535e80 @ 00535e80 ==== 
 * signature: undefined __cdecl FUN_00535e80(int param_1)
 * body: 00535e80-00535fd1
 */

void __cdecl FUN_00535e80(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  local_4 = 0;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mark_dupridges__identify_dupl_005c5e34);
  }
  iVar4 = param_1;
  if (param_1 != 0) {
    do {
      if (*(int *)(iVar4 + 0x30) == 0) break;
      if (((*(uint *)(iVar4 + 0x50) & 0x100000) != 0) &&
         (iVar1 = *(int *)(iVar4 + 0x3c), iVar1 != 0)) {
        piVar3 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar3 = piVar3 + 1;
          if (iVar1 == 2) {
            *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) | 0x200000;
          }
          else if (((*(uint *)(iVar1 + 0x50) & 0x100000) != 0) &&
                  (iVar2 = FUN_00514680(*(int *)(iVar1 + 0x3c),iVar4), iVar2 == 0)) {
            FUN_005344e0(iVar4,iVar1,5,(undefined4 *)0x0);
            local_4 = local_4 + 1;
            *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) | 0x600000;
          }
          iVar1 = *piVar3;
        }
      }
      piVar3 = (int *)(iVar4 + 0x30);
      iVar4 = *piVar3;
    } while (*piVar3 != 0);
    if (local_4 != 0) {
      do {
        if (*(int *)(param_1 + 0x30) == 0) break;
        if (((*(uint *)(param_1 + 0x50) & 0x200000) != 0) &&
           ((*(uint *)(param_1 + 0x50) & 0x400000) == 0)) {
          FUN_00535cf0(param_1);
        }
        param_1 = *(int *)(param_1 + 0x30);
      } while (param_1 != 0);
      if (DAT_0074c6e0 != 0) {
        piVar3 = (int *)(DAT_0074c6e0 + 4);
        iVar4 = *(int *)(DAT_0074c6e0 + 4);
        while (iVar4 != 0) {
          piVar3 = piVar3 + 1;
          if (*(int *)(iVar4 + 0x10) == 5) {
            FUN_00514020((int *)(*(int *)(iVar4 + 0xc) + 0x3c),*(int *)(iVar4 + 8));
            FUN_00535cf0(*(int *)(iVar4 + 8));
          }
          iVar4 = *piVar3;
        }
      }
      if (0 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mark_dupridges__found__d_dupl_005c5e04);
      }
    }
  }
  return;
}



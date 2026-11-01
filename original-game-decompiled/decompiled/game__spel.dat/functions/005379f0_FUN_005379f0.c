
/* ==== FUN_005379f0 @ 005379f0 ==== 
 * signature: undefined __cdecl FUN_005379f0(int param_1, int param_2)
 * body: 005379f0-00537ab8
 */

void __cdecl FUN_005379f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergeridges__merge_ridges_of_f_005c68a0);
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    piVar5 = *(int **)(iVar1 + 4);
    puVar2 = (undefined4 *)(iVar1 + 4);
    while (piVar5 != (int *)0x0) {
      if ((piVar5[1] == param_1) || (puVar4 = puVar2 + 1, piVar5[2] == param_1)) {
        iVar1 = *piVar5;
        if (iVar1 != 0) {
          piVar3 = (int *)(iVar1 + 4);
          iVar1 = *(int *)(iVar1 + 4);
          while (iVar1 != 0) {
            piVar3 = piVar3 + 1;
            *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x4000000;
            iVar1 = *piVar3;
          }
        }
        FUN_00518240(piVar5);
        puVar4 = puVar2;
      }
      puVar2 = puVar4;
      piVar5 = (int *)*puVar4;
    }
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    piVar5 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
    while (iVar1 != 0) {
      piVar5 = piVar5 + 1;
      if (*(int *)(iVar1 + 4) == param_1) {
        *(int *)(iVar1 + 4) = param_2;
      }
      else {
        *(int *)(iVar1 + 8) = param_2;
      }
      FUN_00514020((int *)(param_2 + 0x38),iVar1);
      iVar1 = *piVar5;
    }
  }
  return;
}



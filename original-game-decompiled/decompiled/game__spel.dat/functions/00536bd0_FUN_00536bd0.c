
/* ==== FUN_00536bd0 @ 00536bd0 ==== 
 * signature: undefined __cdecl FUN_00536bd0(int * param_1, int param_2)
 * body: 00536bd0-00536e16
 */

void __cdecl FUN_00536bd0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = DAT_0074c6d0 + 1;
  DAT_0074c6d0 = iVar6;
  for (piVar1 = (int *)param_1[8]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    if ((piVar1[0x12] == iVar6) || ((piVar1[0x14] & 0x400U) != 0)) {
      FUN_00518aa0(param_1);
    }
    piVar1[0x12] = iVar6;
    if (piVar1 == param_1) break;
  }
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  *(int *)(param_2 + 0x48) = DAT_0074c6d0;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_neighbors__delete_s_005c6388);
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    piVar1 = (int *)(iVar2 + 8);
    while (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x48) == iVar6) {
        piVar1[-1] = 0;
      }
      else {
        *(int *)(iVar3 + 0x48) = DAT_0074c6d0;
      }
      iVar3 = *piVar1;
      piVar1 = piVar1 + 1;
    }
  }
  FUN_005141f0(*(int **)(param_2 + 0x3c));
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_neighbors__update_n_005c635c);
  }
  for (piVar1 = (int *)param_1[8]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    iVar2 = piVar1[0xf];
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 4);
      piVar4 = (int *)(iVar2 + 8);
      while (iVar3 != 0) {
        if (*(int *)(iVar3 + 0x48) != iVar6) {
          if ((*(uint *)(iVar3 + 0x50) & 0x1000) == 0) {
            FUN_00514280(*(int **)(iVar3 + 0x3c),(int)piVar1);
            if (*(int *)(iVar3 + 0x48) != DAT_0074c6d0) {
              FUN_00514020((int *)(iVar3 + 0x3c),param_2);
              FUN_00514020((int *)(param_2 + 0x3c),iVar3);
              *(int *)(iVar3 + 0x48) = DAT_0074c6d0;
            }
          }
          else if (*(int *)(iVar3 + 0x48) == DAT_0074c6d0) {
            FUN_00535cf0(iVar3);
            FUN_00514280(*(int **)(iVar3 + 0x3c),(int)piVar1);
          }
          else {
            FUN_00514020((int *)(param_2 + 0x3c),iVar3);
            FUN_00514a80(*(int **)(iVar3 + 0x3c),(int)piVar1,param_2);
            *(int *)(iVar3 + 0x48) = DAT_0074c6d0;
            iVar2 = *(int *)(iVar3 + 0x38);
            if (iVar2 != 0) {
              piVar5 = (int *)(iVar2 + 4);
              iVar2 = *(int *)(iVar2 + 4);
              while (iVar2 != 0) {
                piVar5 = piVar5 + 1;
                if (*(int **)(iVar2 + 4) == piVar1) {
                  *(int *)(iVar2 + 4) = param_2;
                  break;
                }
                if (*(int **)(iVar2 + 8) == piVar1) {
                  *(int *)(iVar2 + 8) = param_2;
                  break;
                }
                iVar2 = *piVar5;
              }
            }
          }
        }
        iVar3 = *piVar4;
        piVar4 = piVar4 + 1;
      }
    }
    if (piVar1 == param_1) break;
  }
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_neighbors__deleted_005c6320);
  }
  return;
}



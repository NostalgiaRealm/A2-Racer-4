
/* ==== FUN_00538200 @ 00538200 ==== 
 * signature: int * __cdecl FUN_00538200(int param_1)
 * body: 00538200-0053834a
 */

int * __cdecl FUN_00538200(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 4);
    iVar1 = *(int *)(iVar3 + 4);
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      if ((*(uint *)(iVar1 + 0x50) & 0x1000) != 0) {
        return (int *)0x0;
      }
      iVar1 = *piVar2;
    }
  }
  iVar1 = *(int *)(iVar3 + 4);
  DAT_0074caa0 = DAT_0074caa0 + 1;
  if (iVar1 != 0) {
    if (*(int *)(iVar3 + 8) == 0) {
      local_4 = (int *)FUN_00514240(*(int **)(iVar1 + 0x34),0);
    }
    else {
      local_4 = (int *)FUN_0051a6d0(*(undefined4 *)(iVar1 + 0x34),
                                    *(undefined4 *)(*(int *)(iVar3 + 8) + 0x34));
    }
    FUN_00514ce0(local_4);
    FUN_00514450(local_4,param_1);
    piVar2 = *(int **)(param_1 + 0xc);
    if (piVar2 != (int *)0x0) {
      iVar3 = piVar2[1];
      iVar5 = 0;
      iVar1 = FUN_00514af0(piVar2);
      if (0 < iVar1) {
        iVar4 = 4;
        do {
          if (0xb < iVar4) {
            DAT_0074caa0 = DAT_0074caa0 + 1;
            FUN_0051a6a0((int *)&local_4,*(undefined4 *)(iVar3 + 0x34));
            if (local_4[1] == 0) {
              DAT_0074ca90 = DAT_0074ca90 + 1;
              FUN_00514ba0((int *)&local_4);
              return (int *)0x0;
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 4;
          iVar3 = *(int *)(iVar4 + *(int *)(param_1 + 0xc));
        } while (iVar5 < iVar1);
      }
    }
    if (2 < DAT_0074be68) {
      FUN_00514af0(local_4);
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_neighbor_intersections___d_ve_005c6ad0);
    }
    return local_4;
  }
  return (int *)0x0;
}



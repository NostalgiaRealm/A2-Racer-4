
/* ==== FUN_005385a0 @ 005385a0 ==== 
 * signature: undefined4 __cdecl FUN_005385a0(int param_1)
 * body: 005385a0-0053874b
 */

undefined4 __cdecl FUN_005385a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_4;
  
  local_4 = 0;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_remove_extravertices__test_f__005c6c30);
  }
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 4);
    piVar1 = (int *)(iVar2 + 8);
    while (iVar4 != 0) {
      *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) & 0xfeffffff;
      iVar4 = *piVar1;
      piVar1 = piVar1 + 1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)(iVar2 + 4);
    piVar1 = *(int **)(iVar2 + 4);
    while (piVar1 != (int *)0x0) {
      puVar3 = puVar3 + 1;
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        iVar4 = *(int *)(iVar2 + 4);
        piVar1 = (int *)(iVar2 + 8);
        while (iVar4 != 0) {
          *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) | 0x1000000;
          iVar4 = *piVar1;
          piVar1 = piVar1 + 1;
        }
      }
      piVar1 = (int *)*puVar3;
    }
  }
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 4);
    piVar1 = (int *)(iVar2 + 4);
    if (iVar4 != 0) {
      do {
        piVar5 = piVar1 + 1;
        if ((*(uint *)(iVar4 + 0x14) & 0x1000000) == 0) {
          DAT_0074cc90 = DAT_0074cc90 + 1;
          local_4 = 1;
          FUN_00514450(*(int **)(param_1 + 0x34),iVar4);
          FUN_00514280(*(int **)(iVar4 + 0xc),param_1);
          iVar2 = FUN_00514af0(*(int **)(iVar4 + 0xc));
          piVar5 = piVar1;
          if (iVar2 == 0) {
            *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) | 0x8000000;
            FUN_00514020(&DAT_0074c6f0,iVar4);
            DAT_0074cc98 = DAT_0074cc98 + 1;
            if (1 < DAT_0074be68) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qh_remove_extravertices__v_d_del_005c6bec);
            }
          }
          else if (2 < DAT_0074be68) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_remove_extravertices__v_d_rem_005c6ba0);
          }
        }
        iVar4 = *piVar5;
        piVar1 = piVar5;
      } while (iVar4 != 0);
      return local_4;
    }
  }
  return 0;
}




/* ==== FUN_00538a60 @ 00538a60 ==== 
 * signature: undefined __cdecl FUN_00538a60(int param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 00538a60-00538c77
 */

void __cdecl FUN_00538a60(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  bVar2 = false;
  if (((1 < DAT_0074be68) || ((*(uint *)(param_1 + 0x14) & 0xffffff) == DAT_0074c620)) ||
     ((*(uint *)(param_2 + 0x14) & 0xffffff) == DAT_0074c620)) {
    bVar2 = true;
  }
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_3 + 4);
    piVar6 = *(int **)(param_3 + 4);
    while (piVar6 != (int *)0x0) {
      puVar5 = puVar5 + 1;
      FUN_00538930(piVar6,param_1,param_2);
      piVar6 = (int *)*puVar5;
    }
  }
  if (param_4 == 0) {
    DAT_0074cca0 = DAT_0074cca0 + 1;
    if (bVar2) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_renamevertex__renamed_v_d_to_v_005c6e04);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 4);
      piVar6 = (int *)(iVar3 + 4);
      while (iVar1 != 0) {
        FUN_00535fe0(iVar1);
        FUN_00514450(*(int **)(iVar1 + 0x34),param_1);
        iVar3 = FUN_005385a0(iVar1);
        piVar4 = piVar6 + 1;
        if (iVar3 != 0) {
          piVar4 = piVar6;
        }
        piVar6 = piVar4;
        iVar1 = *piVar4;
      }
    }
    if ((*(uint *)(param_1 + 0x14) & 0x8000000) == 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
      FUN_00514020(&DAT_0074c6f0,param_1);
      return;
    }
  }
  else {
    iVar3 = FUN_00514af0(*(int **)(param_1 + 0xc));
    if (iVar3 == 2) {
      DAT_0074ccb0 = DAT_0074ccb0 + 1;
      if (bVar2) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_renamevertex__renamed_v_d_to_v_005c6dcc);
      }
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar3 != 0) {
        piVar6 = (int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 4);
        while (iVar3 != 0) {
          piVar6 = piVar6 + 1;
          FUN_00514450(*(int **)(iVar3 + 0x34),param_1);
          iVar3 = *piVar6;
        }
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
      FUN_00514020(&DAT_0074c6f0,param_1);
      return;
    }
    DAT_0074cca8 = DAT_0074cca8 + 1;
    if ((bVar2) || (DAT_0074be68 != 0)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_renamevertex__renamed_pinched_005c6d88);
    }
    FUN_00514450(*(int **)(param_4 + 0x34),param_1);
    FUN_00514280(*(int **)(param_1 + 0xc),param_4);
    FUN_005385a0(param_5);
  }
  return;
}



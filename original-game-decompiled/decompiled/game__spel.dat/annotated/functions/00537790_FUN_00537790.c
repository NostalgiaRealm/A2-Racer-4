
/* ==== FUN_00537790 @ 00537790 ==== 
 * signature: undefined __cdecl FUN_00537790(int param_1, int param_2)
 * body: 00537790-005378dd
 */

void __cdecl FUN_00537790(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar7 = param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 4);
  iVar10 = *(int *)(*(int *)(param_1 + 0x34) + 8);
  iVar2 = *(int *)(*(int *)(param_2 + 0x34) + 4);
  iVar3 = *(int *)(*(int *)(param_2 + 0x34) + 8);
  iVar9 = *(int *)(*(int *)(param_1 + 0x3c) + 4);
  iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
  iVar5 = *(int *)(*(int *)(param_2 + 0x3c) + 4);
  iVar6 = *(int *)(*(int *)(param_2 + 0x3c) + 8);
  iVar8 = iVar3;
  param_2 = iVar5;
  if (((iVar1 != iVar2) && (iVar8 = iVar2, param_2 = iVar6, iVar1 != iVar3)) &&
     (bVar11 = iVar10 == iVar2, iVar9 = iVar4, iVar10 = iVar1, bVar11)) {
    iVar8 = iVar3;
    param_2 = iVar5;
  }
  if ((*(uint *)(iVar8 + 0x14) & 0xffffff) < (*(uint *)(iVar10 + 0x14) & 0xffffff)) {
    *(int *)(*(int *)(iVar7 + 0x34) + 4) = iVar10;
    *(int *)(*(int *)(iVar7 + 0x34) + 8) = iVar8;
    if (iVar8 == iVar2) {
      *(uint *)(iVar7 + 0x50) = *(uint *)(iVar7 + 0x50) ^ 0x800;
    }
    *(int *)(*(int *)(iVar7 + 0x3c) + 4) = param_2;
    *(int *)(*(int *)(iVar7 + 0x3c) + 8) = iVar9;
  }
  else {
    *(int *)(*(int *)(iVar7 + 0x34) + 4) = iVar8;
    *(int *)(*(int *)(iVar7 + 0x34) + 8) = iVar10;
    if (iVar8 == iVar3) {
      *(uint *)(iVar7 + 0x50) = *(uint *)(iVar7 + 0x50) ^ 0x800;
    }
    *(int *)(*(int *)(iVar7 + 0x3c) + 4) = iVar9;
    *(int *)(*(int *)(iVar7 + 0x3c) + 8) = param_2;
  }
  FUN_00535cf0(iVar9);
  FUN_00514a80(*(int **)(iVar9 + 0x3c),param_1,iVar7);
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergefacet2d__merged_v_d_and_n_005c682c);
  }
  return;
}



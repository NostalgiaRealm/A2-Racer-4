
/* ==== FUN_005146f0 @ 005146f0 ==== 
 * signature: undefined __cdecl FUN_005146f0(undefined4 * param_1)
 * body: 005146f0-00514797
 */

void __cdecl FUN_005146f0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar6 = *piVar1;
    if (piVar1[iVar6 + 1] != 0) {
      iVar6 = piVar1[iVar6 + 1] + -1;
    }
    DAT_0074c7b0 = DAT_0074c7b0 + 1;
    DAT_0074c7b4 = DAT_0074c7b4 + 1 + iVar6;
    piVar3 = (int *)FUN_005147d0(iVar6 * 2);
    iVar5 = iVar6 + 1;
    piVar7 = piVar1;
    piVar8 = piVar3;
    while( true ) {
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 1;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      *piVar8 = *piVar7;
    }
    piVar3[*piVar3 + 1] = iVar6 + 1;
    if (DAT_0074c780 != 0) {
      piVar7 = *(int **)(DAT_0074c780 + 4);
      puVar2 = (undefined4 *)(DAT_0074c780 + 8);
      while (piVar7 != (int *)0x0) {
        if (piVar7 == piVar1) {
          puVar2[-1] = piVar3;
        }
        piVar7 = (int *)*puVar2;
        puVar2 = puVar2 + 1;
      }
    }
    FUN_005145f0(param_1);
    *param_1 = piVar3;
    return;
  }
  uVar4 = FUN_005147d0(3);
  *param_1 = uVar4;
  return;
}



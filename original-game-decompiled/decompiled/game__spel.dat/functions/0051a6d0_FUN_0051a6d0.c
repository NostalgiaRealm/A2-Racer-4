
/* ==== FUN_0051a6d0 @ 0051a6d0 ==== 
 * signature: undefined FUN_0051a6d0(void)
 * body: 0051a6d0-0051a745
 */

int FUN_0051a6d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_4;
  
  iVar3 = FUN_005147d0(DAT_0074c03c + -1);
  piVar4 = (int *)(param_1 + 4);
  piVar5 = (int *)(param_2 + 4);
  iVar1 = *piVar4;
  local_4 = iVar3;
  while ((iVar1 != 0 && (iVar2 = *piVar5, iVar2 != 0))) {
    if (iVar1 == iVar2) {
      FUN_00514020(&local_4,iVar1);
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
      iVar3 = local_4;
    }
    else if ((*(uint *)(iVar2 + 0x14) & 0xffffff) < (*(uint *)(iVar1 + 0x14) & 0xffffff)) {
      piVar4 = piVar4 + 1;
    }
    else {
      piVar5 = piVar5 + 1;
    }
    iVar1 = *piVar4;
  }
  return iVar3;
}



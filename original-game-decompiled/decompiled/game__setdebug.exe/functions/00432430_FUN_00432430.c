
/* ==== FUN_00432430 @ 00432430 ==== 
 * signature: undefined4 __register FUN_00432430(int * param_1, undefined * param_2)
 * body: 00432430-0043248b
 */

undefined4 FUN_00432430(int *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  PCNZCH pCVar3;
  PCNZCH pCVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar1 = FUN_00403c38(*param_1);
  iVar2 = FUN_00403c38((int)param_2);
  if (iVar2 <= iVar1) {
    iVar1 = FUN_00403c38((int)param_2);
    pCVar3 = FUN_00403dfc(param_2);
    pCVar4 = FUN_00403dfc((undefined *)*param_1);
    iVar1 = FUN_00407b9c(pCVar4,pCVar3,iVar1);
    if (iVar1 == 0) {
      uVar5 = 1;
      iVar1 = FUN_00403c38((int)param_2);
      FUN_00403e80(param_1,1,iVar1);
    }
  }
  return uVar5;
}



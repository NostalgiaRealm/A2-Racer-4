
/* ==== FUN_0043cb10 @ 0043cb10 ==== 
 * signature: undefined4 __register FUN_0043cb10(int * param_1, undefined * param_2)
 * body: 0043cb10-0043cb6b
 */

undefined4 FUN_0043cb10(int *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  PCNZCH pCVar3;
  PCNZCH pCVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar1 = FUN_00403edc(*param_1);
  iVar2 = FUN_00403edc((int)param_2);
  if (iVar2 <= iVar1) {
    iVar1 = FUN_00403edc((int)param_2);
    pCVar3 = FUN_004040a0(param_2);
    pCVar4 = FUN_004040a0((undefined *)*param_1);
    iVar1 = FUN_004083d8(pCVar4,pCVar3,iVar1);
    if (iVar1 == 0) {
      uVar5 = 1;
      iVar1 = FUN_00403edc((int)param_2);
      FUN_00404124(param_1,1,iVar1);
    }
  }
  return uVar5;
}



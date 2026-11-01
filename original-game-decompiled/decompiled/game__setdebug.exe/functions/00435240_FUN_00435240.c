
/* ==== FUN_00435240 @ 00435240 ==== 
 * signature: bool __register FUN_00435240(undefined * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00435240-0043526d
 */

bool FUN_00435240(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040b3e8(param_1,*(undefined **)(param_4 + -4));
  if (pCVar1 != (PCNZCH)0x0) {
    FUN_00403e80((int *)(param_4 + -4),(int)pCVar1,1);
  }
  return pCVar1 != (PCNZCH)0x0;
}



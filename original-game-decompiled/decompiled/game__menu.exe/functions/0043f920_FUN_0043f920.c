
/* ==== FUN_0043f920 @ 0043f920 ==== 
 * signature: bool __register FUN_0043f920(undefined * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0043f920-0043f94d
 */

bool FUN_0043f920(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040c0d8(param_1,*(undefined **)(param_4 + -4));
  if (pCVar1 != (PCNZCH)0x0) {
    FUN_00404124((int *)(param_4 + -4),(int)pCVar1,1);
  }
  return pCVar1 != (PCNZCH)0x0;
}



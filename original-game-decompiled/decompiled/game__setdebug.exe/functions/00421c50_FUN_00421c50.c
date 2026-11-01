
/* ==== FUN_00421c50 @ 00421c50 ==== 
 * signature: undefined __register FUN_00421c50(undefined4 * param_1, int * param_2)
 * body: 00421c50-00421c87
 */

void FUN_00421c50(undefined4 *param_1,int *param_2)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040b3e8(&DAT_00421c90,(undefined *)param_1);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00403a0c(param_2,param_1);
  }
  else {
    FUN_00403e40((int)param_1,(int)(pCVar1 + 1),0x7fffffff,param_2);
  }
  return;
}



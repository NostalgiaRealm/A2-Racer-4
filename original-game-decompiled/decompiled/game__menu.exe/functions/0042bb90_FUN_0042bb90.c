
/* ==== FUN_0042bb90 @ 0042bb90 ==== 
 * signature: undefined __register FUN_0042bb90(undefined4 * param_1, int * param_2)
 * body: 0042bb90-0042bbc7
 */

void FUN_0042bb90(undefined4 *param_1,int *param_2)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040c0d8(&DAT_0042bbd0,(undefined *)param_1);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00403cb0(param_2,param_1);
  }
  else {
    FUN_004040e4((int)param_1,(int)(pCVar1 + 1),0x7fffffff,param_2);
  }
  return;
}



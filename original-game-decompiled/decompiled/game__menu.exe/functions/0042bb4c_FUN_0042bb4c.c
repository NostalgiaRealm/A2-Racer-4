
/* ==== FUN_0042bb4c @ 0042bb4c ==== 
 * signature: undefined __register FUN_0042bb4c(undefined4 * param_1, int * param_2)
 * body: 0042bb4c-0042bb83
 */

void FUN_0042bb4c(undefined4 *param_1,int *param_2)

{
  PCNZCH pCVar1;
  
  pCVar1 = FUN_0040c0d8(&DAT_0042bb8c,(undefined *)param_1);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00403cb0(param_2,param_1);
  }
  else {
    FUN_004040e4((int)param_1,1,(uint)(pCVar1 + -1),param_2);
  }
  return;
}



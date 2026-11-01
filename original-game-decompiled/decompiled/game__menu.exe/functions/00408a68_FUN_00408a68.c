
/* ==== FUN_00408a68 @ 00408a68 ==== 
 * signature: undefined __register FUN_00408a68(undefined * param_1, int * param_2)
 * body: 00408a68-00408aa3
 */

void FUN_00408a68(undefined *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00408950(&DAT_00408aac,param_1);
  if ((iVar1 < 1) || (param_1[iVar1 + -1] != '.')) {
    FUN_00403c5c(param_2);
  }
  else {
    FUN_004040e4((int)param_1,iVar1,0x7fffffff,param_2);
  }
  return;
}



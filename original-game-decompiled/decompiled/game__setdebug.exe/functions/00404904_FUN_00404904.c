
/* ==== FUN_00404904 @ 00404904 ==== 
 * signature: undefined __register FUN_00404904(VARIANTARG * param_1, int param_2)
 * body: 00404904-00404923
 */

void FUN_00404904(VARIANTARG *param_1,int param_2)

{
  BSTR pOVar1;
  
  pOVar1 = FUN_00404638(*(LPCSTR *)(param_2 + 8));
  FUN_004046cc(param_1);
  (param_1->n1).n2.vt = 8;
  *(BSTR *)((int)&param_1->n1 + 8) = pOVar1;
  return;
}



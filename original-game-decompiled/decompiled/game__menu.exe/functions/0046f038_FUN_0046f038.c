
/* ==== FUN_0046f038 @ 0046f038 ==== 
 * signature: undefined __register FUN_0046f038(LPCSTR param_1, VARIANTARG * param_2)
 * body: 0046f038-0046f056
 */

void FUN_0046f038(LPCSTR param_1,VARIANTARG *param_2)

{
  BSTR pOVar1;
  
  FUN_004049ec(param_2);
  pOVar1 = FUN_00404950(param_1);
  *(BSTR *)((int)&param_2->n1 + 8) = pOVar1;
  (param_2->n1).n2.vt = 8;
  return;
}



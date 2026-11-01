
/* ==== FUN_00404c24 @ 00404c24 ==== 
 * signature: undefined __register FUN_00404c24(VARIANTARG * param_1, int param_2)
 * body: 00404c24-00404c43
 */

void FUN_00404c24(VARIANTARG *param_1,int param_2)

{
  BSTR pOVar1;
  
  pOVar1 = FUN_00404950(*(LPCSTR *)(param_2 + 8));
  FUN_004049ec(param_1);
  (param_1->n1).n2.vt = 8;
  *(BSTR *)((int)&param_1->n1 + 8) = pOVar1;
  return;
}



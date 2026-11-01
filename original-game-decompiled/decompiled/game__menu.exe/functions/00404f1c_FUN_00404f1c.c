
/* ==== FUN_00404f1c @ 00404f1c ==== 
 * signature: undefined __register FUN_00404f1c(VARIANTARG * param_1, OLECHAR * param_2)
 * body: 00404f1c-00404f4f
 */

void FUN_00404f1c(VARIANTARG *param_1,OLECHAR *param_2)

{
  BSTR pOVar1;
  
  if (7 < (param_1->n1).n2.vt) {
    FUN_004049ec(param_1);
  }
  pOVar1 = (BSTR)0x0;
  if ((param_2 != (OLECHAR *)0x0) && (pOVar1 = (BSTR)0x0, *(uint *)(param_2 + -2) >> 1 != 0)) {
    pOVar1 = SysAllocStringLen(param_2,*(uint *)(param_2 + -2) >> 1);
    if (pOVar1 == (BSTR)0x0) {
      FUN_00402808(1);
      return;
    }
  }
  (param_1->n1).n2.vt = 8;
  *(BSTR *)((int)&param_1->n1 + 8) = pOVar1;
  return;
}



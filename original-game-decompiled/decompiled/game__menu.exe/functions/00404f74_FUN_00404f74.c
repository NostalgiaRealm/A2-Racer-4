
/* ==== FUN_00404f74 @ 00404f74 ==== 
 * signature: undefined FUN_00404f74(void)
 * body: 00404f74-00404f93
 */

void FUN_00404f74(VARIANTARG *param_1,LPCSTR param_2)

{
  BSTR pOVar1;
  int iVar2;
  
  if (7 < (param_1->n1).n2.vt) {
    FUN_004049ec(param_1);
  }
  (param_1->n1).n2.vt = 8;
  pOVar1 = (BSTR)((int)&param_1->n1 + 8);
  pOVar1[0] = L'\0';
  pOVar1[1] = L'\0';
  iVar2 = 0;
  if (param_2 != (LPCSTR)0x0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  FUN_00404314(pOVar1,param_2,iVar2);
  return;
}



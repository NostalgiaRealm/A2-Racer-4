
/* ==== FUN_004043bc @ 004043bc ==== 
 * signature: undefined __register FUN_004043bc(BSTR param_1, OLECHAR * param_2)
 * body: 004043bc-004043f3
 */

void FUN_004043bc(BSTR param_1,OLECHAR *param_2)

{
  UINT UVar1;
  OLECHAR *pOVar2;
  
  UVar1 = 0;
  pOVar2 = param_2;
  if (param_2 != (OLECHAR *)0x0) {
    for (; *pOVar2 != L'\0'; pOVar2 = pOVar2 + 4) {
      if (pOVar2[1] == L'\0') {
LAB_004043e5:
        pOVar2 = pOVar2 + 1;
        break;
      }
      if (pOVar2[2] == L'\0') {
LAB_004043e2:
        pOVar2 = pOVar2 + 1;
        goto LAB_004043e5;
      }
      if (pOVar2[3] == L'\0') {
        pOVar2 = pOVar2 + 1;
        goto LAB_004043e2;
      }
    }
    UVar1 = (uint)((int)pOVar2 - (int)param_2) >> 1;
  }
  FUN_00404398(param_1,param_2,UVar1);
  return;
}



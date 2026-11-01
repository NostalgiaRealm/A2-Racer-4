
/* ==== FUN_00403ba0 @ 00403ba0 ==== 
 * signature: undefined __register FUN_00403ba0(int * param_1, LPCWSTR param_2)
 * body: 00403ba0-00403bd7
 */

void FUN_00403ba0(int *param_1,LPCWSTR param_2)

{
  uint uVar1;
  LPCWSTR pWVar2;
  
  uVar1 = 0;
  pWVar2 = param_2;
  if (param_2 != (LPCWSTR)0x0) {
    for (; *pWVar2 != L'\0'; pWVar2 = pWVar2 + 4) {
      if (pWVar2[1] == L'\0') {
LAB_00403bc9:
        pWVar2 = pWVar2 + 1;
        break;
      }
      if (pWVar2[2] == L'\0') {
LAB_00403bc6:
        pWVar2 = pWVar2 + 1;
        goto LAB_00403bc9;
      }
      if (pWVar2[3] == L'\0') {
        pWVar2 = pWVar2 + 1;
        goto LAB_00403bc6;
      }
    }
    uVar1 = (uint)((int)pWVar2 - (int)param_2) >> 1;
  }
  FUN_00403ad0(param_1,param_2,uVar1);
  return;
}



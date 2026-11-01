
/* ==== FUN_00404048 @ 00404048 ==== 
 * signature: undefined __register FUN_00404048(BSTR param_1, LPCSTR param_2, int param_3)
 * body: 00404048-004040ca
 */

void FUN_00404048(BSTR param_1,LPCSTR param_2,int param_3)

{
  UINT UVar1;
  WCHAR local_810 [1024];
  
  if (param_3 < 1) {
    FUN_00403fe8((undefined4 *)param_1);
  }
  else {
    if (param_3 < 0x400) {
      UVar1 = MultiByteToWideChar(0,0,param_2,param_3,local_810,0x400);
      if (0 < (int)UVar1) {
        FUN_004040cc(param_1,local_810,UVar1);
        return;
      }
    }
    UVar1 = MultiByteToWideChar(0,0,param_2,param_3,(LPWSTR)0x0,0);
    FUN_004040cc(param_1,(OLECHAR *)0x0,UVar1);
    MultiByteToWideChar(0,0,param_2,param_3,*(LPWSTR *)param_1,UVar1);
  }
  return;
}



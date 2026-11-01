
/* ==== FUN_00404638 @ 00404638 ==== 
 * signature: BSTR __register FUN_00404638(LPCSTR param_1)
 * body: 00404638-004046ba
 */

BSTR FUN_00404638(LPCSTR param_1)

{
  int cbMultiByte;
  int iVar1;
  LPCSTR lpMultiByteStr;
  UINT UVar2;
  BSTR lpWideCharStr;
  WCHAR *lpWideCharStr_00;
  WCHAR local_810 [1024];
  
  lpWideCharStr_00 = local_810;
  cbMultiByte = FUN_00403c38((int)param_1);
  iVar1 = FUN_00403c38((int)param_1);
  if (iVar1 < 0x400) {
    iVar1 = 0x400;
    lpMultiByteStr = FUN_00403dfc(param_1);
    UVar2 = MultiByteToWideChar(0,0,lpMultiByteStr,cbMultiByte,lpWideCharStr_00,iVar1);
    lpWideCharStr = SysAllocStringLen(local_810,UVar2);
  }
  else {
    UVar2 = MultiByteToWideChar(0,0,param_1,cbMultiByte,(LPWSTR)0x0,0);
    lpWideCharStr = SysAllocStringLen((OLECHAR *)0x0,UVar2);
    MultiByteToWideChar(0,0,param_1,cbMultiByte,lpWideCharStr,UVar2);
  }
  return lpWideCharStr;
}



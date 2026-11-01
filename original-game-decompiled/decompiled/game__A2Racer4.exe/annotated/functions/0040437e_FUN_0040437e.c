
/* ==== FUN_0040437e @ 0040437e ==== 
 * signature: int __cdecl FUN_0040437e(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 0040437e-00404406
 */

int __cdecl FUN_0040437e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_004080b4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_004080b4 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_004080b4 != (FARPROC)0x0) {
        DAT_004080b8 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_004080bc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_004043cd;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_004043cd:
    if (DAT_004080b8 != (FARPROC)0x0) {
      iVar1 = (*DAT_004080b8)();
      if ((iVar1 != 0) && (DAT_004080bc != (FARPROC)0x0)) {
        iVar1 = (*DAT_004080bc)(iVar1);
      }
    }
    iVar1 = (*DAT_004080b4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



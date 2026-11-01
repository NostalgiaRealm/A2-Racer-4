
/* ==== FUN_005666e2 @ 005666e2 ==== 
 * signature: int __cdecl FUN_005666e2(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 005666e2-0056676a
 */

int __cdecl FUN_005666e2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0074e014 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0074e014 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_0074e014 != (FARPROC)0x0) {
        DAT_0074e018 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_0074e01c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_00566731;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_00566731:
    if (DAT_0074e018 != (FARPROC)0x0) {
      iVar1 = (*DAT_0074e018)();
      if ((iVar1 != 0) && (DAT_0074e01c != (FARPROC)0x0)) {
        iVar1 = (*DAT_0074e01c)(iVar1);
      }
    }
    iVar1 = (*DAT_0074e014)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



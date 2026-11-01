
/* ==== FUN_10009170 @ 10009170 ==== 
 * signature: int __cdecl FUN_10009170(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 10009170-1000922a
 */

int __cdecl FUN_10009170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_10031610 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10031610 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10031610 != (FARPROC)0x0) {
        DAT_10031614 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10031618 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100091e3;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100091e3:
    if (DAT_10031614 != (FARPROC)0x0) {
      local_8 = (*DAT_10031614)();
    }
    if ((local_8 != 0) && (DAT_10031618 != (FARPROC)0x0)) {
      local_8 = (*DAT_10031618)(local_8);
    }
    iVar1 = (*DAT_10031610)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}




/* ==== FUN_0055926e @ 0055926e ==== 
 * signature: undefined4 __cdecl FUN_0055926e(LPCSTR param_1, byte param_2)
 * body: 0055926e-005592b1
 */

undefined4 __cdecl FUN_0055926e(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    FUN_00560c26(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    DAT_0074dc60 = 0xd;
    DAT_0074dc64 = 5;
  }
  return 0xffffffff;
}



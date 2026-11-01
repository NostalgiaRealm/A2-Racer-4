
/* ==== FUN_00405302 @ 00405302 ==== 
 * signature: undefined4 __cdecl FUN_00405302(LPCSTR param_1, byte param_2)
 * body: 00405302-00405345
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00405302(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    FUN_00404407(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    DAT_00407f44 = 0xd;
    _DAT_00407f48 = 5;
  }
  return 0xffffffff;
}



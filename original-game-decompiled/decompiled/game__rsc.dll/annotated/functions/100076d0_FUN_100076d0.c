
/* ==== FUN_100076d0 @ 100076d0 ==== 
 * signature: undefined4 __stdcall FUN_100076d0(void)
 * body: 100076d0-10007751
 */

undefined4 FUN_100076d0(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10007310();
  DAT_1002ff5c = TlsAlloc();
  if (((DAT_1002ff5c != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0x61), lpTlsValue != (DWORD *)0x0))
     && (BVar1 = TlsSetValue(DAT_1002ff5c,lpTlsValue), BVar1 != 0)) {
    FUN_10007790((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}




/* ==== FUN_100077b0 @ 100077b0 ==== 
 * signature: DWORD * __stdcall FUN_100077b0(void)
 * body: 100077b0-10007847
 */

DWORD * FUN_100077b0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *local_8;
  
  dwErrCode = GetLastError();
  local_8 = TlsGetValue(DAT_1002ff5c);
  if (local_8 == (DWORD *)0x0) {
    local_8 = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0xe7);
    if (local_8 != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1002ff5c,local_8);
      if (BVar1 != 0) {
        FUN_10007790((int)local_8);
        DVar2 = GetCurrentThreadId();
        *local_8 = DVar2;
        local_8[1] = 0xffffffff;
        goto LAB_10007837;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10007837:
  SetLastError(dwErrCode);
  return local_8;
}



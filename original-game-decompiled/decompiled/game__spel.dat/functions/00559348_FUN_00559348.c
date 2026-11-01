
/* ==== FUN_00559348 @ 00559348 ==== 
 * signature: undefined8 __stdcall FUN_00559348(void)
 * body: 00559348-0055938a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00559348(void)

{
  longlong lVar1;
  undefined8 uVar2;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __allmul(local_c.dwHighDateTime,0,0,1);
  lVar1 = (lVar1 - CONCAT44(_DAT_0074dc4c,_DAT_0074dc48)) + (ulonglong)local_c.dwLowDateTime;
  uVar2 = __aulldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),10000,0);
  return uVar2;
}



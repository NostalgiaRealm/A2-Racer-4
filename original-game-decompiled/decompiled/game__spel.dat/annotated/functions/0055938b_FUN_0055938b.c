
/* ==== FUN_0055938b @ 0055938b ==== 
 * signature: undefined __stdcall FUN_0055938b(void)
 * body: 0055938b-005593bf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055938b(void)

{
  longlong lVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __allmul(local_c.dwHighDateTime,0,0,1);
  _DAT_0074dc48 = lVar1 + (ulonglong)local_c.dwLowDateTime;
  return;
}



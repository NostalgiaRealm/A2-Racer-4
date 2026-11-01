
/* ==== FUN_0056521b @ 0056521b ==== 
 * signature: undefined4 __stdcall FUN_0056521b(void)
 * body: 0056521b-00565250
 */

undefined4 FUN_0056521b(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 != 0) && (local_98.dwPlatformId == 2)) {
    return 1;
  }
  return 0;
}



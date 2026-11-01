
/* ==== FUN_0040be14 @ 0040be14 ==== 
 * signature: undefined __register FUN_0040be14(void)
 * body: 0040be14-0040be68
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040be14(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_94);
  if (BVar1 != 0) {
    DAT_004aa0d0 = local_94.dwPlatformId;
    DAT_004aa0d4 = local_94.dwMajorVersion;
    DAT_004aa0d8 = local_94.dwMinorVersion;
    _DAT_004aa0dc = local_94.dwBuildNumber;
    FUN_00403e8c((int *)&DAT_004aa0e0,local_94.szCSDVersion,0x80);
  }
  return;
}



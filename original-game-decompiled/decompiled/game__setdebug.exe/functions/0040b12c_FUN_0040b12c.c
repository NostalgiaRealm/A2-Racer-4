
/* ==== FUN_0040b12c @ 0040b12c ==== 
 * signature: undefined __register FUN_0040b12c(void)
 * body: 0040b12c-0040b180
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b12c(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_94);
  if (BVar1 != 0) {
    DAT_004460c0 = local_94.dwPlatformId;
    DAT_004460c4 = local_94.dwMajorVersion;
    DAT_004460c8 = local_94.dwMinorVersion;
    _DAT_004460cc = local_94.dwBuildNumber;
    FUN_00403be8((int *)&DAT_004460d0,local_94.szCSDVersion,0x80);
  }
  return;
}



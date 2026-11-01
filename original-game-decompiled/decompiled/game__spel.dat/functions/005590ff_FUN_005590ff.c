
/* ==== FUN_005590ff @ 005590ff ==== 
 * signature: HANDLE __cdecl FUN_005590ff(LPCSTR param_1, uint * param_2)
 * body: 005590ff-005591c8
 */

HANDLE __cdecl FUN_005590ff(LPCSTR param_1,uint *param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  uint uVar3;
  _WIN32_FIND_DATAA local_144;
  
  pvVar1 = FindFirstFileA(param_1,&local_144);
  if (pvVar1 != (HANDLE)0xffffffff) {
    *param_2 = -(uint)(local_144.dwFileAttributes != 0x80) & local_144.dwFileAttributes;
    uVar3 = ___timet_from_ft(&local_144.ftCreationTime);
    param_2[1] = uVar3;
    uVar3 = ___timet_from_ft(&local_144.ftLastAccessTime);
    param_2[2] = uVar3;
    uVar3 = ___timet_from_ft(&local_144.ftLastWriteTime);
    param_2[3] = uVar3;
    param_2[4] = local_144.nFileSizeLow;
    FUN_0055ee40(param_2 + 5,(uint *)local_144.cFileName);
    return pvVar1;
  }
  DVar2 = GetLastError();
  if (1 < DVar2) {
    if (DVar2 < 4) {
      DAT_0074dc60 = 2;
      return (HANDLE)0xffffffff;
    }
    if (DVar2 == 8) {
      DAT_0074dc60 = 0xc;
      return (HANDLE)0xffffffff;
    }
    if (DVar2 == 0x12) {
      DAT_0074dc60 = 2;
      return (HANDLE)0xffffffff;
    }
  }
  DAT_0074dc60 = 0x16;
  return (HANDLE)0xffffffff;
}



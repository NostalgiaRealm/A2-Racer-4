
/* ==== FUN_00404ebe @ 00404ebe ==== 
 * signature: undefined4 __cdecl FUN_00404ebe(uint param_1)
 * body: 00404ebe-00404f14
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00404ebe(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = _DAT_00407f48;
  if ((param_1 < DAT_00409460) &&
     ((*(byte *)((&DAT_00409360)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_004044e8(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) {
      return 0;
    }
  }
  _DAT_00407f48 = DVar2;
  DAT_00407f44 = 9;
  return 0xffffffff;
}



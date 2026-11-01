
/* ==== FUN_005630b8 @ 005630b8 ==== 
 * signature: undefined4 __cdecl FUN_005630b8(uint param_1)
 * body: 005630b8-0056310e
 */

undefined4 __cdecl FUN_005630b8(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = DAT_0074dc64;
  if ((param_1 < DAT_007501a0) &&
     ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_0055a27d(param_1);
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
  DAT_0074dc64 = DVar2;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}



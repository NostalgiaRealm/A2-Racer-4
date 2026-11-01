
/* ==== FUN_00562b76 @ 00562b76 ==== 
 * signature: DWORD __cdecl FUN_00562b76(uint param_1, LONG param_2, DWORD param_3)
 * body: 00562b76-00562c0f
 */

DWORD __cdecl FUN_00562b76(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < DAT_007501a0) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)FUN_0055a27d(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        DAT_0074dc60 = 9;
        return 0xffffffff;
      }
      DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar2 == 0xffffffff) {
        uVar3 = GetLastError();
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        FUN_00560c26(uVar3);
        return 0xffffffff;
      }
      pbVar1 = (byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar2;
    }
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}



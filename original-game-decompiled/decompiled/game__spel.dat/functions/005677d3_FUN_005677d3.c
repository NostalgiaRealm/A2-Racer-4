
/* ==== FUN_005677d3 @ 005677d3 ==== 
 * signature: undefined8 __cdecl FUN_005677d3(uint param_1, LONG param_2, LONG param_3, DWORD param_4)
 * body: 005677d3-00567883
 */

undefined8 __cdecl FUN_005677d3(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  LONG local_8;
  
  if (param_1 < DAT_007501a0) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_00567869;
    local_8 = param_3;
    hFile = (HANDLE)FUN_0055a27d(param_1);
    if (hFile != (HANDLE)0xffffffff) {
      DVar3 = SetFilePointer(hFile,param_2,&local_8,param_4);
      if (DVar3 == 0xffffffff) {
        DVar2 = GetLastError();
        if (DVar2 != 0) {
          FUN_00560c26(DVar2);
          goto LAB_0056787a;
        }
      }
      pbVar1 = (byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_00567880;
    }
    DAT_0074dc60 = 9;
  }
  else {
LAB_00567869:
    DAT_0074dc64 = 0;
    DAT_0074dc60 = 9;
  }
LAB_0056787a:
  DVar3 = 0xffffffff;
  local_8 = -1;
LAB_00567880:
  return CONCAT44(local_8,DVar3);
}



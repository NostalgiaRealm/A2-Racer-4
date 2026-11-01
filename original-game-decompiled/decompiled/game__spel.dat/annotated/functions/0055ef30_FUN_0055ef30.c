
/* ==== FUN_0055ef30 @ 0055ef30 ==== 
 * signature: undefined4 __cdecl FUN_0055ef30(uint param_1)
 * body: 0055ef30-0055efe2
 */

undefined4 __cdecl FUN_0055ef30(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_007501a0 <= param_1) {
    DAT_0074dc64 = 0;
    DAT_0074dc60 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    DAT_0074dc60 = 9;
    DAT_0074dc64 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_0055a27d(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0055a27d(2);
      iVar2 = FUN_0055a27d(1);
      if (iVar2 == iVar1) goto LAB_0055efa9;
    }
    hObject = (HANDLE)FUN_0055a27d(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0055efab;
    }
  }
LAB_0055efa9:
  DVar4 = 0;
LAB_0055efab:
  FUN_0055a203(param_1);
  *(undefined1 *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_00560c26(DVar4);
  return 0xffffffff;
}



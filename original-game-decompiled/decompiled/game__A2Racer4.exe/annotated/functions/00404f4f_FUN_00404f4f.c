
/* ==== FUN_00404f4f @ 00404f4f ==== 
 * signature: undefined4 __cdecl FUN_00404f4f(uint param_1)
 * body: 00404f4f-00405001
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00404f4f(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_00409460 <= param_1) {
    _DAT_00407f48 = 0;
    DAT_00407f44 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_00409360)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    DAT_00407f44 = 9;
    _DAT_00407f48 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_004044e8(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_004044e8(2);
      iVar2 = FUN_004044e8(1);
      if (iVar2 == iVar1) goto LAB_00404fc8;
    }
    hObject = (HANDLE)FUN_004044e8(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00404fca;
    }
  }
LAB_00404fc8:
  DVar4 = 0;
LAB_00404fca:
  FUN_0040446e(param_1);
  *(undefined1 *)((&DAT_00409360)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_00404407(DVar4);
  return 0xffffffff;
}



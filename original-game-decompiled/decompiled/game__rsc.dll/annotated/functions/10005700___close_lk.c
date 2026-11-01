
/* ==== __close_lk @ 10005700 ==== 
 * signature: undefined4 __cdecl __close_lk(uint param_1)
 * body: 10005700-100057a9
 * note: Library Function - Single Match  __close_lk  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  ulong local_8;
  
  iVar1 = FUN_10002850(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10002850(1);
      iVar2 = FUN_10002850(2);
      if (iVar1 == iVar2) goto LAB_10005753;
    }
    hObject = (HANDLE)FUN_10002850(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_10005765;
    }
  }
LAB_10005753:
  local_8 = 0;
LAB_10005765:
  FUN_10002770(param_1);
  *(undefined1 *)((&DAT_10031ac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



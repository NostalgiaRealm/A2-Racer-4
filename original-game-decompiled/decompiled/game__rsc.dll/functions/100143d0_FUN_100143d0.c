
/* ==== FUN_100143d0 @ 100143d0 ==== 
 * signature: int __cdecl FUN_100143d0(LCID param_1, LCTYPE param_2, LPSTR param_3, int param_4, UINT param_5)
 * body: 100143d0-100144ce
 */

int __cdecl FUN_100143d0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d8e8;
  pcStack_10 = FUN_1000eb08;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10031798 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10031798 = 2;
    }
    else {
      DAT_10031798 = 1;
    }
  }
  if (DAT_10031798 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10031798 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x38) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)&stack0xffffffc8,iVar1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (param_4 == 0) {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
        else {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,param_3,param_4,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}




/* ==== FUN_00404710 @ 00404710 ==== 
 * signature: LPWSTR __cdecl FUN_00404710(LCID param_1, DWORD param_2, char * param_3, int param_4, LPSTR param_5, int param_6, UINT param_7, int param_8)
 * body: 00404710-0040481f
 */

LPWSTR __cdecl
FUN_00404710(LCID param_1,DWORD param_2,char *param_3,int param_4,LPSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  LPWSTR pWVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004064d0;
  pcStack_10 = FUN_00402a90;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_004080e0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return (LPWSTR)0x0;
      }
      DAT_004080e0 = 2;
    }
    else {
      DAT_004080e0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_00404934(param_3,param_4);
  }
  if (DAT_004080e0 != 2) {
    if (DAT_004080e0 == 1) {
      if (param_7 == 0) {
        param_7 = DAT_004080d8;
      }
      iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,
                                  (LPWSTR)0x0,0);
      if (iVar1 != 0) {
        local_8 = 0;
        FUN_00404f20();
        local_8 = 0xffffffff;
        pWVar2 = FUN_00404833();
        return pWVar2;
      }
    }
    ExceptionList = local_14;
    return (LPWSTR)0x0;
  }
  pWVar2 = (LPWSTR)LCMapStringA(param_1,param_2,param_3,param_4,param_5,param_6);
  ExceptionList = local_14;
  return pWVar2;
}



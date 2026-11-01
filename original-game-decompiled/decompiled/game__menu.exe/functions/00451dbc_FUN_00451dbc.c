
/* ==== FUN_00451dbc @ 00451dbc ==== 
 * signature: undefined __register FUN_00451dbc(int param_1, int param_2, int * param_3)
 * body: 00451dbc-00451e55
 */

void FUN_00451dbc(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint cbMultiByte;
  LPSTR lpMultiByteStr;
  LPCWSTR lpWideCharStr;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  
  pcStack_1c = (code *)0x451dd4;
  FUN_00451f50(param_1);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_1c = (code *)&stack0xfffffffc;
  iVar1 = FUN_00451e8c(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00403c5c(param_3);
  }
  else {
    lpWideCharStr = (LPCWSTR)(*(int *)(param_1 + 0xc) + *(int *)(iVar1 + 4));
    iVar1 = *(int *)(iVar1 + 8);
    cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,iVar1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_00404210(param_3,cbMultiByte);
    lpUsedDefaultChar = (LPBOOL)0x0;
    lpDefaultChar = (LPCSTR)0x0;
    lpMultiByteStr = FUN_004040a0((undefined *)*param_3);
    WideCharToMultiByte(0,0,lpWideCharStr,iVar1,lpMultiByteStr,cbMultiByte,lpDefaultChar,
                        lpUsedDefaultChar);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00451e5d;
  pcStack_20 = (code *)0x451e55;
  FUN_004521c0(param_1);
  return;
}



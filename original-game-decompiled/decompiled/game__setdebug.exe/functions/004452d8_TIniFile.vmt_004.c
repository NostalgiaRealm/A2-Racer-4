
/* ==== TIniFile.vmt_004 @ 004452d8 ==== 
 * signature: undefined TIniFile.vmt_004(void)
 * body: 004452d8-00445341
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_004(int param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  LPCSTR lpFileName;
  LPCSTR lpString;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined1 uStack_8;
  
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  lpString = FUN_00403dfc(param_4);
  lpKeyName = FUN_00403dfc(param_3);
  lpAppName = FUN_00403dfc(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    uStack_c = *(undefined4 *)(param_1 + 4);
    uStack_8 = 0xb;
    uVar2 = FUN_0040aa30((int)&DAT_00406ed0,'\x01',(undefined4 *)PTR_PTR_00446ce0,0,&uStack_c);
    FUN_0040346c(uVar2);
  }
  return;
}



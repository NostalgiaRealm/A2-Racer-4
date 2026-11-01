
/* ==== TIniFile.vmt_048 @ 004456c4 ==== 
 * signature: undefined TIniFile.vmt_048(void)
 * body: 004456c4-004456f0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_048(int param_1,undefined *param_2,undefined *param_3)

{
  LPCSTR lpFileName;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  LPCSTR lpString;
  
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = FUN_00403dfc(param_3);
  lpAppName = FUN_00403dfc(param_2);
  WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return;
}



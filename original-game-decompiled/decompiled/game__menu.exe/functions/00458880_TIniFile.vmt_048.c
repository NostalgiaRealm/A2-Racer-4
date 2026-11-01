
/* ==== TIniFile.vmt_048 @ 00458880 ==== 
 * signature: undefined TIniFile.vmt_048(void)
 * body: 00458880-004588ac
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_048(int param_1,undefined *param_2,undefined *param_3)

{
  LPCSTR lpFileName;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  LPCSTR lpString;
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = FUN_004040a0(param_3);
  lpAppName = FUN_004040a0(param_2);
  WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return;
}




/* ==== TIniFile.vmt_04c @ 004456f4 ==== 
 * signature: undefined TIniFile.vmt_04c(void)
 * body: 004456f4-0044570c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_04c(int param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,lpFileName);
  return;
}



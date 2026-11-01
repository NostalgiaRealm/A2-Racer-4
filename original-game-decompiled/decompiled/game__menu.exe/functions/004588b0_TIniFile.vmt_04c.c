
/* ==== TIniFile.vmt_04c @ 004588b0 ==== 
 * signature: undefined TIniFile.vmt_04c(void)
 * body: 004588b0-004588c8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_04c(int param_1)

{
  LPCSTR lpFileName;
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,lpFileName);
  return;
}



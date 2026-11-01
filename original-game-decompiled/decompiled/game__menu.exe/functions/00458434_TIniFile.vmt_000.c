
/* ==== TIniFile.vmt_000 @ 00458434 ==== 
 * signature: undefined __register TIniFile.vmt_000(int param_1, undefined * param_2, undefined * param_3, int * param_4, undefined * param_5)
 * body: 00458434-00458491
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_000(int param_1,undefined *param_2,undefined *param_3,int *param_4,
                     undefined *param_5)

{
  LPCSTR lpFileName;
  LPCSTR lpDefault;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  CHAR *lpReturnedString;
  DWORD DVar1;
  CHAR local_804 [2048];
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  DVar1 = 0x800;
  lpReturnedString = local_804;
  lpDefault = FUN_004040a0(param_5);
  lpKeyName = FUN_004040a0(param_3);
  lpAppName = FUN_004040a0(param_2);
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,DVar1,lpFileName);
  FUN_00403d44(param_4,(undefined4 *)local_804,DVar1);
  return;
}



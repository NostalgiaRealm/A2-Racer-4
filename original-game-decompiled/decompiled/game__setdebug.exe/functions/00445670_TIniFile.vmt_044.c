
/* ==== TIniFile.vmt_044 @ 00445670 ==== 
 * signature: undefined TIniFile.vmt_044(void)
 * body: 00445670-004456c0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_044(int param_1,undefined *param_2)

{
  LPCSTR lpFileName;
  LPCSTR lpAppName;
  BOOL BVar1;
  undefined4 uVar2;
  LPCSTR lpKeyName;
  LPCSTR lpString;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = (LPCSTR)0x0;
  lpAppName = FUN_00403dfc(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    uStack_10 = *(undefined4 *)(param_1 + 4);
    uStack_c = 0xb;
    uVar2 = FUN_0040aa30((int)&DAT_00406ed0,'\x01',(undefined4 *)PTR_PTR_00446ce0,0,&uStack_10);
    FUN_0040346c(uVar2);
  }
  return;
}



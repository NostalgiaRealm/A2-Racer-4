
/* ==== TIniFile.vmt_044 @ 0045882c ==== 
 * signature: undefined TIniFile.vmt_044(void)
 * body: 0045882c-0045887c
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
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  lpString = (LPCSTR)0x0;
  lpKeyName = (LPCSTR)0x0;
  lpAppName = FUN_004040a0(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    uStack_10 = *(undefined4 *)(param_1 + 4);
    uStack_c = 0xb;
    uVar2 = FUN_0040b6d0((int)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab938,0,&uStack_10);
    FUN_004036f4(uVar2);
  }
  return;
}



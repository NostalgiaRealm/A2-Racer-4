
/* ==== TIniFile.vmt_004 @ 00458494 ==== 
 * signature: undefined TIniFile.vmt_004(void)
 * body: 00458494-004584fd
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
  
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  lpString = FUN_004040a0(param_4);
  lpKeyName = FUN_004040a0(param_3);
  lpAppName = FUN_004040a0(param_2);
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  if (BVar1 == 0) {
    uStack_c = *(undefined4 *)(param_1 + 4);
    uStack_8 = 0xb;
    uVar2 = FUN_0040b6d0((int)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab938,0,&uStack_c);
    FUN_004036f4(uVar2);
  }
  return;
}



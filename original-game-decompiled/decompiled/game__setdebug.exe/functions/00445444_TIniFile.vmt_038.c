
/* ==== TIniFile.vmt_038 @ 00445444 ==== 
 * signature: undefined TIniFile.vmt_038(void)
 * body: 00445444-00445504
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_038(int param_1,undefined *param_2,int *param_3)

{
  LPCSTR lpFileName;
  LPCSTR lpAppName;
  int iVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpKeyName;
  LPCSTR lpDefault;
  DWORD DVar3;
  undefined4 uStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  int iStack_10;
  char *pcStack_c;
  int *piStack_8;
  
  puStack_1c = &stack0xfffffffc;
  iStack_10 = 0;
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x445470;
  piStack_8 = param_3;
  pcStack_c = (char *)FUN_004026b8(0x4000);
  pcStack_2c = thunk_FUN_00403434;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pcStack_34 = (code *)0x445489;
  puStack_28 = &stack0xfffffffc;
  FUN_0040f97c(piStack_8);
  pcStack_38 = thunk_FUN_00403434;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  pcStack_34 = (code *)&stack0xfffffffc;
  (**(code **)(*piStack_8 + 0x40))();
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  DVar3 = 0x4000;
  lpDefault = (LPCSTR)0x0;
  lpKeyName = (LPCSTR)0x0;
  pcVar2 = pcStack_c;
  lpAppName = FUN_00403dfc(param_2);
  DVar3 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,pcVar2,DVar3,lpFileName);
  pcVar2 = pcStack_c;
  if (DVar3 != 0) {
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + iVar1 + 1) {
      FUN_00403b70(&iStack_10,pcVar2);
      (**(code **)(*piStack_8 + 0x34))(piStack_8,iStack_10);
      iVar1 = FUN_00408020(pcVar2);
    }
  }
  *in_FS_OFFSET = uStack_3c;
  pcStack_34 = FUN_0044550c;
  pcStack_38 = (code *)0x445504;
  FUN_0040fa38(piStack_8);
  return;
}




/* ==== TIniFile.vmt_03c @ 00458500 ==== 
 * signature: undefined TIniFile.vmt_03c(void)
 * body: 00458500-004585b7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_03c(int param_1,int *param_2)

{
  LPCSTR lpFileName;
  DWORD DVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  code *pcStack_34;
  code *pcStack_30;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  int iStack_10;
  LPSTR pCStack_c;
  int *piStack_8;
  
  puStack_18 = &stack0xfffffffc;
  iStack_10 = 0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x458529;
  piStack_8 = param_2;
  pCStack_c = (LPSTR)FUN_0040277c(0x4000);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_30 = (code *)0x458542;
  puStack_24 = &stack0xfffffffc;
  FUN_00411434(piStack_8);
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  pcStack_30 = (code *)&stack0xfffffffc;
  (**(code **)(*piStack_8 + 0x40))();
  lpFileName = FUN_004040a0(*(undefined **)(param_1 + 4));
  DVar1 = GetPrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,pCStack_c,0x4000,lpFileName);
  pcVar3 = pCStack_c;
  if (DVar1 != 0) {
    for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + iVar2 + 1) {
      FUN_00403e14(&iStack_10,pcVar3);
      (**(code **)(*piStack_8 + 0x34))(piStack_8,iStack_10);
      iVar2 = FUN_00408b24(pcVar3);
    }
  }
  *in_FS_OFFSET = uStack_38;
  pcStack_30 = FUN_004585bf;
  pcStack_34 = (code *)0x4585b7;
  FUN_004114f0(piStack_8);
  return;
}



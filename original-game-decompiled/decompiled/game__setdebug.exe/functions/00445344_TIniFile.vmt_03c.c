
/* ==== TIniFile.vmt_03c @ 00445344 ==== 
 * signature: undefined TIniFile.vmt_03c(void)
 * body: 00445344-004453fb
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
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x44536d;
  piStack_8 = param_2;
  pCStack_c = (LPSTR)FUN_004026b8(0x4000);
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_30 = (code *)0x445386;
  puStack_24 = &stack0xfffffffc;
  FUN_0040f97c(piStack_8);
  pcStack_34 = thunk_FUN_00403434;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  pcStack_30 = (code *)&stack0xfffffffc;
  (**(code **)(*piStack_8 + 0x40))();
  lpFileName = FUN_00403dfc(*(undefined **)(param_1 + 4));
  DVar1 = GetPrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,pCStack_c,0x4000,lpFileName);
  pcVar3 = pCStack_c;
  if (DVar1 != 0) {
    for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + iVar2 + 1) {
      FUN_00403b70(&iStack_10,pcVar3);
      (**(code **)(*piStack_8 + 0x34))(piStack_8,iStack_10);
      iVar2 = FUN_00408020(pcVar3);
    }
  }
  *in_FS_OFFSET = uStack_38;
  pcStack_30 = FUN_00445403;
  pcStack_34 = (code *)0x4453fb;
  FUN_0040fa38(piStack_8);
  return;
}



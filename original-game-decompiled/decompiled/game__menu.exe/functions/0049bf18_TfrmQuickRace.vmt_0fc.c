
/* ==== TfrmQuickRace.vmt_0fc @ 0049bf18 ==== 
 * signature: undefined __register TfrmQuickRace.vmt_0fc(int param_1)
 * body: 0049bf18-0049bf79
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmQuickRace_vmt_0fc(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x1f) == '\0') {
    FUN_0047ff64(*(int **)PTR_DAT_004ab694);
  }
  else {
    TTimer_set_Enabled(*(int *)(param_1 + 0x344),'\0');
    iVar1 = FUN_0049812c();
    if (iVar1 == 2) {
      TTimer_set_Enabled(*(int *)(param_1 + 0x344),'\x01');
      return;
    }
    FUN_0047ff64(*(int **)PTR_DAT_004ab694);
  }
  return;
}



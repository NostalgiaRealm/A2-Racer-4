
/* ==== TfrmGarage.vmt_0fc @ 004991ac ==== 
 * signature: undefined TfrmGarage.vmt_0fc(void)
 * body: 004991ac-004991f1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmGarage_vmt_0fc(void)

{
  int iVar1;
  
  if (*(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0x1f) == '\0') {
    FUN_0047ff64(*(int **)PTR_DAT_004ab694);
  }
  else {
    iVar1 = FUN_0049812c();
    if (iVar1 != 2) {
      FUN_0047ff64(*(int **)PTR_DAT_004ab694);
      return;
    }
  }
  return;
}



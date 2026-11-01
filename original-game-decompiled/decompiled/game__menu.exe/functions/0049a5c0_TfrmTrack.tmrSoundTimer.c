
/* ==== TfrmTrack.tmrSoundTimer @ 0049a5c0 ==== 
 * signature: undefined TfrmTrack.tmrSoundTimer(void)
 * body: 0049a5c0-0049a63a
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmTrack_tmrSoundTimer(int param_1)

{
  bool bVar1;
  int iVar2;
  
  TTimer_set_Enabled(*(int *)(param_1 + 0x318),'\0');
  iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  bVar1 = FUN_00461c84(iVar2);
  if (bVar1) {
    iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
    FUN_0048063c(*(int **)PTR_DAT_004ab694,(undefined4 *)&UNK_0049a644,*(int *)(iVar2 + 8));
    return;
  }
  iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_0048063c(*(int **)PTR_DAT_004ab694,(undefined4 *)&UNK_0049a654,*(int *)(iVar2 + 8));
  return;
}



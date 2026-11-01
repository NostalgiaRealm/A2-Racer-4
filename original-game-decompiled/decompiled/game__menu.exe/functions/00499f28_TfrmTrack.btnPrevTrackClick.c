
/* ==== TfrmTrack.btnPrevTrackClick @ 00499f28 ==== 
 * signature: undefined TfrmTrack.btnPrevTrackClick(void)
 * body: 00499f28-00499f51
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmTrack_btnPrevTrackClick(int *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  
  uVar1 = FUN_00499f14(param_1);
  iVar2 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  FUN_00499d68(param_1,iVar2);
  FUN_00499f80(param_1);
  return;
}



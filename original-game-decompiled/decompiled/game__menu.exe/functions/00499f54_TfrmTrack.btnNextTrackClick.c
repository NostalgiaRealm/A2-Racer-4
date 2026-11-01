
/* ==== TfrmTrack.btnNextTrackClick @ 00499f54 ==== 
 * signature: undefined TfrmTrack.btnNextTrackClick(void)
 * body: 00499f54-00499f7d
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmTrack_btnNextTrackClick(int *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  
  uVar1 = FUN_00499f14(param_1);
  iVar2 = uVar1 + 1;
  if (SCARRY4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  FUN_00499d68(param_1,iVar2);
  FUN_00499f80(param_1);
  return;
}



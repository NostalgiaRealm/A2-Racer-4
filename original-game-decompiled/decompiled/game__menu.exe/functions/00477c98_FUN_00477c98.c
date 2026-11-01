
/* ==== FUN_00477c98 @ 00477c98 ==== 
 * signature: undefined FUN_00477c98(void)
 * body: 00477c98-00477d58
 */

void FUN_00477c98(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  puStack_10 = (undefined1 *)0x477caa;
  iStack_8 = param_2;
  FUN_00404090(param_2);
  puStack_14 = &UNK_00477d59;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00449c70(param_1,extraout_EDX,extraout_ECX);
  TBalloonForm_set_HideOnClick(param_1,0);
  TBalloonForm_set_BalloonPosition(param_1,1);
  FUN_0047d5a0(param_1);
  TForm_set_ClientWidth(param_1,0x96);
  iVar1 = TForm_get_ClientWidth(param_1);
  uVar2 = param_1[0xb4];
  iVar3 = iVar1 - *(int *)(uVar2 + 0x38);
  if (SBORROW4(iVar1,*(int *)(uVar2 + 0x38))) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar3 = extraout_EDX_00;
  }
  iVar1 = iVar3 + -6;
  if (SBORROW4(iVar3,6)) {
    thunk_FUN_00402808(uVar2);
    iVar1 = extraout_EDX_01;
  }
  TControl_set_Left((int *)param_1[0xb4],iVar1);
  TControl_set_Top((int *)param_1[0xb4],6);
  TBalloonForm_set_BalloonCaption(param_1,iStack_8);
  TGroupBox_set_Visible
            ((int *)param_1[0xb5],CONCAT31((int3)((uint)extraout_EDX_02 >> 8),1),extraout_ECX_00);
  param_1[0xb9] = 0x2a;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_00477d60;
  puStack_14 = (undefined *)0x477d58;
  FUN_00403c5c(&iStack_8);
  return;
}



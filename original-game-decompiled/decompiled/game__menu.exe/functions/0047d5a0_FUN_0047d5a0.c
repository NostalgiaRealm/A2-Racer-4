
/* ==== FUN_0047d5a0 @ 0047d5a0 ==== 
 * signature: undefined FUN_0047d5a0(void)
 * body: 0047d5a0-0047d6eb
 */

void FUN_0047d5a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  int iStack_8;
  
  puStack_14 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_18 = &UNK_0047d6ec;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TForm_set_BorderStyle((int)param_1,'\0');
  TForm_set_BorderWidth(param_1,0);
  TForm_set_BorderIcons((int)param_1,'\0');
  uVar1 = FUN_004317bc((int)param_1);
  iVar4 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < iVar4) {
    do {
      iVar2 = FUN_00431780((int)param_1,iVar4);
      if (iVar2 != param_1[0xb5]) {
        iVar2 = FUN_00431780((int)param_1,iVar4);
        if (iVar2 != param_1[0xb4]) {
          iVar2 = FUN_00431780((int)param_1,iVar4);
          if (*(char *)(iVar2 + 0x47) != '\0') {
            piVar3 = (int *)FUN_00431780((int)param_1,iVar4);
            FUN_00402f9c(piVar3);
          }
        }
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  TForm_set_ClientWidth(param_1,0x1b8);
  iVar2 = TForm_get_ClientWidth(param_1);
  uVar1 = param_1[0xb4];
  iVar4 = iVar2 - *(int *)(uVar1 + 0x38);
  if (SBORROW4(iVar2,*(int *)(uVar1 + 0x38))) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar4 = extraout_EDX;
  }
  iVar2 = iVar4 + -6;
  if (SBORROW4(iVar4,6)) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX_00;
  }
  TControl_set_Left((int *)param_1[0xb4],iVar2);
  TControl_set_Top((int *)param_1[0xb4],6);
  TControl_set_Left((int *)param_1[0xb5],6);
  TControl_set_Top((int *)param_1[0xb5],6);
  if (*(char *)((int)param_1 + 0x2d9) == '\0') {
    TGroupBox_set_Visible
              ((int *)param_1[0xb5],CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1),extraout_ECX);
  }
  else {
    TGroupBox_set_Visible((int *)param_1[0xb5],0,extraout_ECX);
  }
  TBalloonForm_get_BalloonCaption(param_1,&iStack_8);
  TBalloonForm_set_BalloonCaption(param_1,iStack_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_0047d6f3;
  puStack_18 = (undefined *)0x47d6eb;
  FUN_00403c5c(&iStack_8);
  return;
}



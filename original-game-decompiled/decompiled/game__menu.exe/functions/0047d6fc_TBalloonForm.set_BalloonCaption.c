
/* ==== TBalloonForm.set_BalloonCaption @ 0047d6fc ==== 
 * signature: undefined TBalloonForm.set_BalloonCaption(void)
 * body: 0047d6fc-0047d828
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TBalloonForm_set_BalloonCaption(int *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  int iVar5;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  uint *puStack_8;
  
  puStack_18 = (undefined1 *)0x47d710;
  puStack_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_1c = &UNK_0047d829;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar5 = *(int *)(param_1[0xb5] + 0x3c);
  puStack_18 = &stack0xfffffffc;
  TGroupBox_set_Caption(param_1[0xb5],puStack_8);
  TLabel_set_WordWrap((int *)param_1[0xb5],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX)
  ;
  (**(code **)(*(int *)param_1[0xb5] + 0x8c))((int *)param_1[0xb5],0);
  piVar1 = (int *)param_1[0xb5];
  iVar4 = *(int *)(param_1[0xb4] + 0x30) - piVar1[0xc];
  if (SBORROW4(*(int *)(param_1[0xb4] + 0x30),piVar1[0xc])) {
    piVar1 = (int *)thunk_FUN_00402808((uint)piVar1);
    iVar4 = extraout_EDX_00;
  }
  TControl_set_Width(piVar1,iVar4);
  uVar2 = *(int *)(param_1[0xb5] + 0x3c) - iVar5;
  if (SBORROW4(*(int *)(param_1[0xb5] + 0x3c),iVar5)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  if (uVar2 != 0) {
    uVar3 = TForm_get_ClientHeight(param_1);
    iVar5 = uVar3 + uVar2;
    if (SCARRY4(uVar3,uVar2)) {
      thunk_FUN_00402808(uVar3);
      iVar5 = extraout_EDX_01;
    }
    TForm_set_ClientHeight(param_1,iVar5);
    uVar3 = FUN_004317bc((int)param_1);
    iVar5 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      thunk_FUN_00402808(uVar3);
    }
    if (-1 < iVar5) {
      do {
        iVar4 = FUN_00431780((int)param_1,iVar5);
        if (iVar4 != param_1[0xb5]) {
          iVar4 = FUN_00431780((int)param_1,iVar5);
          if (iVar4 != param_1[0xb4]) {
            iVar4 = FUN_00431780((int)param_1,iVar5);
            if (*(char *)(iVar4 + 0x47) != '\0') {
              iVar4 = FUN_00431780((int)param_1,iVar5);
              uVar3 = *(int *)(iVar4 + 0x34) + uVar2;
              if (SCARRY4(*(int *)(iVar4 + 0x34),uVar2)) {
                uVar3 = thunk_FUN_00402808(uVar3);
              }
              piVar1 = (int *)FUN_00431780((int)param_1,iVar5);
              TControl_set_Top(piVar1,uVar3);
            }
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_0047d830;
  puStack_1c = (undefined *)0x47d828;
  FUN_00403c5c((int *)&puStack_8);
  return;
}



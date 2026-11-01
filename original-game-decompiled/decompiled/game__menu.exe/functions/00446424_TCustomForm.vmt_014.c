
/* ==== TCustomForm.vmt_014 @ 00446424 ==== 
 * signature: undefined TCustomForm.vmt_014(void)
 * body: 00446424-00446623
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_014(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int nNumber;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x446437;
  FUN_00431324((int)param_1);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  bVar2 = false;
  *(byte *)(param_1 + 0x87) = DAT_004ac4d1 ^ 1;
  pcStack_14 = (code *)&stack0xfffffffc;
  TWinControl_vmt_014(param_1,param_2);
  if ((param_1[0x91] != 0) && (0 < param_1[0x96])) {
    if (((*(byte *)(param_1 + 0x22) & 0x10) != 0) &&
       (param_1[0x91] != *(int *)(DAT_004ac7d8 + 0x34))) {
      iVar3 = param_1[0x91];
      iVar4 = *(int *)(DAT_004ac7d8 + 0x34);
      piVar1 = (int *)param_1[0x16];
      nNumber = TFont_get_Height((int)piVar1);
      iVar3 = MulDiv(nNumber,iVar4,iVar3);
      TFont_set_Height(piVar1,iVar3);
    }
    param_1[0x91] = *(int *)(DAT_004ac7d8 + 0x34);
    iVar3 = FUN_00446754((int)param_1);
    if (iVar3 != param_1[0x96]) {
      bVar2 = true;
      FUN_004459ac((int)param_1,iVar3,param_1[0x96]);
      FUN_004344f8((int)param_1,iVar3,param_1[0x96]);
      if ((*(byte *)(param_1 + 0x22) & 4) != 0) {
        iVar4 = MulDiv(param_1[0x94],iVar3,param_1[0x96]);
        param_1[0x94] = iVar4;
      }
      if ((*(byte *)(param_1 + 0x22) & 8) != 0) {
        iVar3 = MulDiv(param_1[0x95],iVar3,param_1[0x96]);
        param_1[0x95] = iVar3;
      }
    }
  }
  if (0 < param_1[0x94]) {
    FUN_0042e1b0(param_1,param_1[0x94]);
  }
  if (0 < param_1[0x95]) {
    FUN_0042e1f4(param_1,param_1[0x95]);
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  if (!bVar2) {
    FUN_004459ac((int)param_1,1,1);
    FUN_004344f8((int)param_1,1,1);
  }
  FUN_0042f720((int)param_1,0xb03d,0,0);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0044662b;
  pcStack_18 = (code *)0x446623;
  FUN_0043132c((int)param_1);
  return;
}



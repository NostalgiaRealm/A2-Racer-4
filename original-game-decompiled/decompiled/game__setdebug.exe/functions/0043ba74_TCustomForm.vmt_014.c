
/* ==== TCustomForm.vmt_014 @ 0043ba74 ==== 
 * signature: undefined TCustomForm.vmt_014(void)
 * body: 0043ba74-0043bc73
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
  
  pcStack_14 = (code *)0x43ba87;
  FUN_00427384((int)param_1);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  bVar2 = false;
  *(byte *)(param_1 + 0x87) = DAT_004474c9 ^ 1;
  pcStack_14 = (code *)&stack0xfffffffc;
  TWinControl_vmt_014(param_1,param_2);
  if ((param_1[0x91] != 0) && (0 < param_1[0x96])) {
    if (((*(byte *)(param_1 + 0x22) & 0x10) != 0) &&
       (param_1[0x91] != *(int *)(DAT_004477c8 + 0x34))) {
      iVar3 = param_1[0x91];
      iVar4 = *(int *)(DAT_004477c8 + 0x34);
      piVar1 = (int *)param_1[0x16];
      nNumber = TFont_get_Height((int)piVar1);
      iVar3 = MulDiv(nNumber,iVar4,iVar3);
      TFont_set_Height(piVar1,iVar3);
    }
    param_1[0x91] = *(int *)(DAT_004477c8 + 0x34);
    iVar3 = FUN_0043bda4((int)param_1);
    if (iVar3 != param_1[0x96]) {
      bVar2 = true;
      FUN_0043affc((int)param_1,iVar3,param_1[0x96]);
      FUN_0042a404((int)param_1,iVar3,param_1[0x96]);
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
    FUN_00424270(param_1,param_1[0x94]);
  }
  if (0 < param_1[0x95]) {
    FUN_004242b4(param_1,param_1[0x95]);
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  if (!bVar2) {
    FUN_0043affc((int)param_1,1,1);
    FUN_0042a404((int)param_1,1,1);
  }
  FUN_00425780((int)param_1,0xb03d,0,0);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0043bc7b;
  pcStack_18 = (code *)0x43bc73;
  FUN_0042738c((int)param_1);
  return;
}



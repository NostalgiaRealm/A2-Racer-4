
/* ==== TDaviSpeedButton.Destroy @ 004753e8 ==== 
 * signature: undefined TDaviSpeedButton.Destroy(void)
 * body: 004753e8-00475471
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviSpeedButton_Destroy(int *param_1,char param_2)

{
  uint uVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte bStack_9;
  int *piStack_8;
  
  pcStack_10 = (code *)0x4753f3;
  piStack_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  bStack_9 = extraout_DL;
  uVar1 = FUN_00402f9c((int *)piStack_8[0x4d]);
  bVar2 = SBORROW4(DAT_004ab460,1);
  DAT_004ab460 = DAT_004ab460 + -1;
  if (bVar2) {
    thunk_FUN_00402808(uVar1);
  }
  FUN_00402f9c((int *)piStack_8[0x4b]);
  piStack_8[0x4b] = 0;
  if (DAT_004ab460 == 0) {
    FUN_00402f9c(DAT_004ab45c);
    DAT_004ab45c = (int *)0x0;
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00475479;
  pcStack_14 = (code *)0x475471;
  TGraphicControl_Destroy(piStack_8,bStack_9 & 0xfc);
  return;
}



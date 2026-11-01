
/* ==== TCustomGDIButton.Destroy @ 004681e0 ==== 
 * signature: undefined TCustomGDIButton.Destroy(void)
 * body: 004681e0-00468231
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomGDIButton_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte bStack_9;
  int *piStack_8;
  
  pcStack_10 = (code *)0x4681eb;
  piStack_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  bStack_9 = extraout_DL;
  TGDIButton_set_Definition(piStack_8,0);
  FUN_0040c968(piStack_8 + 0x5f);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00468239;
  pcStack_14 = (code *)0x468231;
  TWinControlWrapper_Destroy(piStack_8,bStack_9 & 0xfc);
  return;
}



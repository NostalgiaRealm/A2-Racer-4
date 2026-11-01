
/* ==== TObjectList.Destroy @ 00451a4c ==== 
 * signature: undefined TObjectList.Destroy(void)
 * body: 00451a4c-00451a99
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TObjectList_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte bStack_9;
  int *piStack_8;
  
  pcStack_10 = (code *)0x451a57;
  piStack_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  bStack_9 = extraout_DL;
  FUN_00451ac4(piStack_8);
  FUN_00402f9c((int *)piStack_8[1]);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00451aa1;
  pcStack_14 = (code *)0x451a99;
  TDaviObject_Destroy(piStack_8,bStack_9 & 0xfc);
  return;
}



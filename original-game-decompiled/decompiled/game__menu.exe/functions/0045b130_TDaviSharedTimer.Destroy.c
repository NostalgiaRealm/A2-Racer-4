
/* ==== TDaviSharedTimer.Destroy @ 0045b130 ==== 
 * signature: undefined TDaviSharedTimer.Destroy(void)
 * body: 0045b130-0045b180
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviSharedTimer_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte bStack_9;
  int *piStack_8;
  
  pcStack_10 = (code *)0x45b13b;
  piStack_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  bStack_9 = extraout_DL;
  FUN_0040c968(piStack_8 + 2);
  FUN_0040c968(piStack_8 + 1);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0045b188;
  pcStack_14 = (code *)0x45b180;
  TDaviObject_Destroy(piStack_8,bStack_9 & 0xfc);
  return;
}



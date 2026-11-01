
/* ==== TDaviTimer.Destroy @ 0045af98 ==== 
 * signature: undefined TDaviTimer.Destroy(void)
 * body: 0045af98-0045afdc
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviTimer_Destroy(int *param_1,char param_2)

{
  undefined4 extraout_ECX;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte bStack_9;
  int *piStack_8;
  
  pcStack_10 = (code *)0x45afa3;
  piStack_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  bStack_9 = extraout_DL;
  TDaviTimer_set_Enabled((int)piStack_8,0,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0045afe4;
  pcStack_14 = (code *)0x45afdc;
  TComponent_Destroy(piStack_8,bStack_9 & 0xfc);
  return;
}




/* ==== TDaviLoopProperties.Destroy @ 0045a45c ==== 
 * signature: undefined TDaviLoopProperties.Destroy(void)
 * body: 0045a45c-0045a496
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviLoopProperties_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  code *pcStack_10;
  int *piStack_8;
  
  pcStack_10 = (code *)0x45a467;
  piStack_8 = FUN_004032fc(param_1,param_2);
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0045a49e;
  uStack_14 = 0x45a496;
  TPersistent_Destroy(piStack_8,extraout_DL & 0xfc);
  return;
}



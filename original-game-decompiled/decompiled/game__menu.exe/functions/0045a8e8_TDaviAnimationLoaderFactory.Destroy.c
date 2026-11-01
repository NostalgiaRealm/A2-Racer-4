
/* ==== TDaviAnimationLoaderFactory.Destroy @ 0045a8e8 ==== 
 * signature: undefined TDaviAnimationLoaderFactory.Destroy(void)
 * body: 0045a8e8-0045a92d
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviAnimationLoaderFactory_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte bStack_9;
  int *piStack_8;
  
  pcStack_10 = (code *)0x45a8f3;
  piStack_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  bStack_9 = extraout_DL;
  FUN_0040c968(piStack_8 + 1);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0045a935;
  pcStack_14 = (code *)0x45a92d;
  TDaviObject_Destroy(piStack_8,bStack_9 & 0xfc);
  return;
}



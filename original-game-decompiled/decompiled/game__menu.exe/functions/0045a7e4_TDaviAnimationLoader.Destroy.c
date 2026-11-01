
/* ==== TDaviAnimationLoader.Destroy @ 0045a7e4 ==== 
 * signature: undefined __register TDaviAnimationLoader.Destroy(int * param_1, char param_2)
 * body: 0045a7e4-0045a829
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviAnimationLoader_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte local_9;
  int *local_8;
  
  pcStack_10 = (code *)0x45a7ef;
  local_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040c968(local_8 + 2);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0045a831;
  pcStack_14 = (code *)0x45a829;
  TPersistent_Destroy(local_8,local_9 & 0xfc);
  return;
}




/* ==== TDaviDADLoader.Destroy @ 004595d4 ==== 
 * signature: undefined __register TDaviDADLoader.Destroy(int * param_1, char param_2)
 * body: 004595d4-00459621
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviDADLoader_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte local_9;
  int *local_8;
  
  pcStack_10 = (code *)0x4595df;
  local_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  local_9 = extraout_DL;
  (**(code **)(*local_8 + 0x10))();
  FUN_0040c968(local_8 + 4);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00459629;
  pcStack_14 = (code *)0x459621;
  TDaviAnimationLoader_Destroy(local_8,local_9 & 0xfc);
  return;
}



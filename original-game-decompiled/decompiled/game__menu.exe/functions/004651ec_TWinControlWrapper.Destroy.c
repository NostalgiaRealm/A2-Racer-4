
/* ==== TWinControlWrapper.Destroy @ 004651ec ==== 
 * signature: undefined __register TWinControlWrapper.Destroy(int * param_1, char param_2)
 * body: 004651ec-00465272
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TWinControlWrapper_Destroy(int *param_1,char param_2)

{
  int iVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte local_9;
  int *local_8;
  
  pcStack_10 = (code *)0x4651f7;
  local_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar1 = local_8[0x4a];
  local_9 = extraout_DL;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x28) = local_8[0x4c];
    *(int *)(iVar1 + 0x2c) = local_8[0x4d];
    local_8[0x4c] = 0;
    local_8[0x4d] = 0;
    local_8[0x4a] = 0;
    pcStack_10 = (code *)&stack0xfffffffc;
    FUN_0042f720(0,2,0,0);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0046527a;
  pcStack_14 = (code *)0x465272;
  TGraphicControl_Destroy(local_8,local_9 & 0xfc);
  return;
}



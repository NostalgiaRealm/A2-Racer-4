
/* ==== TCustomForm.Destroy @ 00446124 ==== 
 * signature: undefined __register TCustomForm.Destroy(int * param_1, char param_2)
 * body: 00446124-004461ed
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomForm_Destroy(int *param_1,char param_2)

{
  bool bVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte local_9;
  int *local_8;
  
  pcStack_10 = (code *)0x44612f;
  local_8 = FUN_004032fc(param_1,param_2);
  local_9 = extraout_DL;
  if ((*(byte *)(local_8 + 8) & 8) == 0) {
    pcStack_10 = (code *)0x44614a;
    FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  }
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  if ((char)local_8[0x87] != '\0') {
    pcStack_10 = (code *)&stack0xfffffffc;
    (**(code **)(*local_8 + 0xc4))();
  }
  FUN_00448718((int)local_8,'\0');
  bVar1 = FUN_00434cdc((int)local_8);
  if (bVar1) {
    (**(code **)(*local_8 + 0x9c))();
  }
  FUN_0044b228(DAT_004ac7d8,(int)local_8);
  FUN_00402f9c((int *)local_8[0x88]);
  FUN_00402f9c((int *)local_8[0x8a]);
  FUN_0040c968(local_8 + 0xb2);
  TScrollingWinControl_Destroy(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004461f5;
  pcStack_14 = (code *)0x4461ed;
  FUN_0040c944(*(int *)PTR_DAT_004ab9ec);
  return;
}



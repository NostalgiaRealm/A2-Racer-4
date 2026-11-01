
/* ==== TCustomForm.Destroy @ 0043b774 ==== 
 * signature: undefined __register TCustomForm.Destroy(int * param_1, char param_2)
 * body: 0043b774-0043b83d
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
  
  pcStack_10 = (code *)0x43b77f;
  local_8 = FUN_00403074(param_1,param_2);
  local_9 = extraout_DL;
  if ((*(byte *)(local_8 + 8) & 8) == 0) {
    pcStack_10 = (code *)0x43b79a;
    FUN_0040bc08(*(int *)PTR_DAT_00446d7c);
  }
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  if ((char)local_8[0x87] != '\0') {
    pcStack_10 = (code *)&stack0xfffffffc;
    (**(code **)(*local_8 + 0xc4))();
  }
  FUN_0043dd68((int)local_8,'\0');
  bVar1 = FUN_0042abb0((int)local_8);
  if (bVar1) {
    (**(code **)(*local_8 + 0x9c))();
  }
  FUN_004402a0(DAT_004477c8,(int)local_8);
  FUN_00402d14((int *)local_8[0x88]);
  FUN_00402d14((int *)local_8[0x8a]);
  FUN_0040bc78(local_8 + 0xb2);
  TScrollingWinControl_Destroy(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0043b845;
  pcStack_14 = (code *)0x43b83d;
  FUN_0040bc54(*(int *)PTR_DAT_00446d7c);
  return;
}



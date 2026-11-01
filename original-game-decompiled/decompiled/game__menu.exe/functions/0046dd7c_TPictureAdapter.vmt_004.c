
/* ==== TPictureAdapter.vmt_004 @ 0046dd7c ==== 
 * signature: undefined __register TPictureAdapter.vmt_004(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0046dd7c-0046dde9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPictureAdapter_vmt_004(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int *local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  pcStack_10 = (code *)0x46dd98;
  local_8 = param_1;
  local_c = TGraphic_vmt_00c((int *)&PTR_TPersistent_vmt_000_0046d380,'\x01',param_3);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_00405894(local_c + 8,*(undefined4 **)(local_8 + 0xc));
  FUN_0041b4a4(*(int **)(local_8 + 0x1c),local_c);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0046ddf1;
  *(undefined1 *)(local_8 + 0x18) = 0;
  pcStack_14 = (code *)0x46dde9;
  FUN_00402f9c(local_c);
  return;
}



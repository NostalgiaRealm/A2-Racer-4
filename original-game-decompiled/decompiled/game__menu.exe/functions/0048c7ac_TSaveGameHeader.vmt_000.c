
/* ==== TSaveGameHeader.vmt_000 @ 0048c7ac ==== 
 * signature: undefined __register TSaveGameHeader.vmt_000(int param_1)
 * body: 0048c7ac-0048c800
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSaveGameHeader_vmt_000(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00403e80(&local_8,(byte *)(param_1 + 8));
  FUN_0045ee68(param_1,0x48c814,local_8);
  FUN_0045ef0c(param_1,0x48c824,*(undefined4 *)(param_1 + 0x3c));
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0048c808;
  pcStack_14 = (code *)0x48c800;
  FUN_00403c5c(&local_8);
  return;
}



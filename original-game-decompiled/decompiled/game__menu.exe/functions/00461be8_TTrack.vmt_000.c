
/* ==== TTrack.vmt_000 @ 00461be8 ==== 
 * signature: undefined TTrack.vmt_000(void)
 * body: 00461be8-00461c44
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTrack_vmt_000(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int iStack_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00403e80(&iStack_8,(byte *)(param_1 + 0xc));
  FUN_0045ee68(param_1,0x461c58,iStack_8);
  uVar1 = FUN_00461c7c(param_1,0);
  FUN_0045ef0c(param_1,0x461c68,uVar1);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00461c4c;
  pcStack_14 = (code *)0x461c44;
  FUN_00403c5c(&iStack_8);
  return;
}




/* ==== FUN_00474114 @ 00474114 ==== 
 * signature: undefined __register FUN_00474114(uint param_1, undefined4 param_2, undefined4 param_3)
 * body: 00474114-00474191
 */

void FUN_00474114(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar2 = param_1 & 0x7f;
  if ((&DAT_004ad1f8)[uVar2] == 0) {
    piVar1 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',param_3);
    (&DAT_004ad1f8)[uVar2] = piVar1;
    FUN_00403e14((int *)&local_8,*(char **)(&DAT_004ab188 + uVar2 * 4));
    FUN_0041e384((&DAT_004ad1f8)[param_1 & 0xff],DAT_004ac4dc,local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00474199;
  pcStack_18 = (code *)0x474191;
  FUN_00403c5c((int *)&local_8);
  return;
}



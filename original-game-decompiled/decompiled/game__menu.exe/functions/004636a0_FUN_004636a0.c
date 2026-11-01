
/* ==== FUN_004636a0 @ 004636a0 ==== 
 * signature: undefined FUN_004636a0(void)
 * body: 004636a0-004636fe
 */

void FUN_004636a0(undefined4 param_1,undefined *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  undefined *puStack_8;
  
  puStack_14 = (undefined1 *)0x4636b1;
  puStack_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_18 = &UNK_004636ff;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004040a0(puStack_8);
  xvga_src_fopen();
  uVar1 = xvga_src_filelength();
  if ((int)uVar1 < 0) {
    thunk_FUN_00402808(uVar1);
  }
  xvga_src_fclose();
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_00463706;
  puStack_18 = (undefined *)0x4636fe;
  FUN_00403c5c((int *)&puStack_8);
  return;
}




/* ==== FUN_00440ccc @ 00440ccc ==== 
 * signature: undefined __register FUN_00440ccc(void)
 * body: 00440ccc-00440cfc;00440d17-00440d1d
 */

void FUN_00440ccc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_004477c4 != 0) {
    pcStack_18 = thunk_FUN_00403180;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    FUN_00442c38(DAT_004477c4);
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}




/* ==== FUN_0044bc6c @ 0044bc6c ==== 
 * signature: undefined __register FUN_0044bc6c(void)
 * body: 0044bc6c-0044bc9c;0044bcb7-0044bcbd
 */

void FUN_0044bc6c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_004ac7d4 != 0) {
    pcStack_18 = thunk_FUN_00403408;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    FUN_0044ddc4(DAT_004ac7d4);
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}



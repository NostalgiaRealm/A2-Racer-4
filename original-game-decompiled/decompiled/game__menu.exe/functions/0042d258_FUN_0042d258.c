
/* ==== FUN_0042d258 @ 0042d258 ==== 
 * signature: undefined __register FUN_0042d258(void)
 * body: 0042d258-0042d2ca;0042d2e8-0042d307;0042d30f-0042d312
 */

void FUN_0042d258(void)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_18 = (undefined1 *)0x42d268;
  local_c = (undefined4 *)FUN_00410750(DAT_004ac78c);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (-1 < local_c[2] + -1) {
    local_8 = 0;
    puStack_18 = &stack0xfffffffc;
    local_10 = local_c[2];
    do {
      puStack_24 = (undefined1 *)0x42d29a;
      local_14 = (int *)FUN_004102b0(local_c,local_8);
      puStack_24 = (undefined1 *)0x42d2a5;
      cVar1 = FUN_00419374((int)local_14);
      if (cVar1 != '\0') {
        pcStack_28 = thunk_FUN_004036bc;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        FUN_0042d494(local_14);
        FUN_00403794();
        puStack_24 = (undefined1 *)0x42d2c9;
        FUN_00403794();
        return;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x42d30f;
  pcStack_1c = (code *)0x42d307;
  FUN_004107b4(DAT_004ac78c);
  return;
}



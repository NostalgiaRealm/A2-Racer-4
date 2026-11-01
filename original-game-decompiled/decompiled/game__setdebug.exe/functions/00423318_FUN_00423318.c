
/* ==== FUN_00423318 @ 00423318 ==== 
 * signature: undefined __register FUN_00423318(void)
 * body: 00423318-0042338a;004233a8-004233c7;004233cf-004233d2
 */

void FUN_00423318(void)

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
  
  puStack_18 = (undefined1 *)0x423328;
  local_c = (undefined4 *)FUN_0040f38c(DAT_0044777c);
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (-1 < local_c[2] + -1) {
    local_8 = 0;
    puStack_18 = &stack0xfffffffc;
    local_10 = local_c[2];
    do {
      puStack_24 = (undefined1 *)0x42335a;
      local_14 = (int *)FUN_0040f024(local_c,local_8);
      puStack_24 = (undefined1 *)0x423365;
      cVar1 = FUN_004172cc((int)local_14);
      if (cVar1 != '\0') {
        pcStack_28 = thunk_FUN_00403434;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        FUN_00423554(local_14);
        FUN_0040350c();
        puStack_24 = (undefined1 *)0x423389;
        FUN_0040350c();
        return;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x4233cf;
  pcStack_1c = (code *)0x4233c7;
  FUN_0040f3f0(DAT_0044777c);
  return;
}



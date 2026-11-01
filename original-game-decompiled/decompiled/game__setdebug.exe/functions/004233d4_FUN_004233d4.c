
/* ==== FUN_004233d4 @ 004233d4 ==== 
 * signature: undefined __register FUN_004233d4(void)
 * body: 004233d4-00423449;00423451-00423471
 */

void FUN_004233d4(void)

{
  int iVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  pcStack_14 = (code *)0x4233e4;
  local_c = (undefined4 *)FUN_0040f38c(DAT_0044777c);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  iVar1 = local_c[2] + -1;
  if (-1 < local_c[2] + -1) {
    do {
      local_8 = iVar1;
      puStack_20 = (undefined1 *)0x42340f;
      local_10 = (int *)FUN_0040f024(local_c,local_8);
      puStack_20 = (undefined1 *)0x42341a;
      cVar2 = FUN_004172cc((int)local_10);
      if (cVar2 != '\0') {
        pcStack_24 = thunk_FUN_00403434;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_00423554(local_10);
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x423451;
        pcStack_24 = (code *)0x423449;
        FUN_00417328((int)local_10);
        return;
      }
      local_8 = local_8 + -1;
      iVar1 = local_8;
    } while (local_8 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00423479;
  pcStack_18 = (code *)0x423471;
  FUN_0040f3f0(DAT_0044777c);
  return;
}



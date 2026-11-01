
/* ==== FUN_0041a3d0 @ 0041a3d0 ==== 
 * signature: undefined __register FUN_0041a3d0(void)
 * body: 0041a3d0-0041a445;0041a44d-0041a46d
 */

void FUN_0041a3d0(void)

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
  
  pcStack_14 = (code *)0x41a3e0;
  local_c = (undefined4 *)FUN_0040f38c(DAT_004465bc);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  iVar1 = local_c[2] + -1;
  if (-1 < local_c[2] + -1) {
    do {
      local_8 = iVar1;
      puStack_20 = (undefined1 *)0x41a40b;
      local_10 = (int *)FUN_0040f024(local_c,local_8);
      puStack_20 = (undefined1 *)0x41a416;
      cVar2 = FUN_004172cc((int)local_10);
      if (cVar2 != '\0') {
        pcStack_24 = thunk_FUN_00403434;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_0041a560(local_10);
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x41a44d;
        pcStack_24 = (code *)0x41a445;
        FUN_00417328((int)local_10);
        return;
      }
      local_8 = local_8 + -1;
      iVar1 = local_8;
    } while (local_8 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0041a475;
  pcStack_18 = (code *)0x41a46d;
  FUN_0040f3f0(DAT_004465bc);
  return;
}



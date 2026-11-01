
/* ==== FUN_0042d314 @ 0042d314 ==== 
 * signature: undefined __register FUN_0042d314(void)
 * body: 0042d314-0042d389;0042d391-0042d3b1
 */

void FUN_0042d314(void)

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
  
  pcStack_14 = (code *)0x42d324;
  local_c = (undefined4 *)FUN_00410750(DAT_004ac78c);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  iVar1 = local_c[2] + -1;
  if (-1 < local_c[2] + -1) {
    do {
      local_8 = iVar1;
      puStack_20 = (undefined1 *)0x42d34f;
      local_10 = (int *)FUN_004102b0(local_c,local_8);
      puStack_20 = (undefined1 *)0x42d35a;
      cVar2 = FUN_00419374((int)local_10);
      if (cVar2 != '\0') {
        pcStack_24 = thunk_FUN_004036bc;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_0042d494(local_10);
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x42d391;
        pcStack_24 = (code *)0x42d389;
        FUN_004193d0((int)local_10);
        return;
      }
      local_8 = local_8 + -1;
      iVar1 = local_8;
    } while (local_8 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0042d3b9;
  pcStack_18 = (code *)0x42d3b1;
  FUN_004107b4(DAT_004ac78c);
  return;
}



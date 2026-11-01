
/* ==== FUN_0041cbf4 @ 0041cbf4 ==== 
 * signature: undefined __register FUN_0041cbf4(void)
 * body: 0041cbf4-0041cc69;0041cc71-0041cc91
 */

void FUN_0041cbf4(void)

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
  
  pcStack_14 = (code *)0x41cc04;
  local_c = (undefined4 *)FUN_00410750(DAT_004aa5e0);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  iVar1 = local_c[2] + -1;
  if (-1 < local_c[2] + -1) {
    do {
      local_8 = iVar1;
      puStack_20 = (undefined1 *)0x41cc2f;
      local_10 = (int *)FUN_004102b0(local_c,local_8);
      puStack_20 = (undefined1 *)0x41cc3a;
      cVar2 = FUN_00419374((int)local_10);
      if (cVar2 != '\0') {
        pcStack_24 = thunk_FUN_004036bc;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_0041cd84(local_10);
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x41cc71;
        pcStack_24 = (code *)0x41cc69;
        FUN_004193d0((int)local_10);
        return;
      }
      local_8 = local_8 + -1;
      iVar1 = local_8;
    } while (local_8 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0041cc99;
  pcStack_18 = (code *)0x41cc91;
  FUN_004107b4(DAT_004aa5e0);
  return;
}



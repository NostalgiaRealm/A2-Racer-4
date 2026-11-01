
/* ==== FUN_00452d8c @ 00452d8c ==== 
 * signature: undefined __register FUN_00452d8c(undefined4 param_1)
 * body: 00452d8c-00452deb;00452e2d-00452e42
 */

void FUN_00452d8c(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  code *pcStack_12c;
  undefined1 *puStack_128;
  undefined4 local_124;
  code *pcStack_120;
  code *pcStack_11c;
  int local_c;
  undefined4 local_8;
  
  pcStack_11c = (code *)&stack0xfffffffc;
  puStack_128 = &stack0xfffffffc;
  local_c = 0;
  pcStack_120 = thunk_FUN_004036bc;
  local_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_124;
  pcStack_12c = thunk_FUN_00403408;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (DAT_004aab3c != 0) {
    FUN_00453214(DAT_004aab3c);
    *(undefined1 *)(DAT_004aab3c + 4) = 1;
    FUN_0040c968(&DAT_004aab3c);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  *in_FS_OFFSET = uStack_130;
  *in_FS_OFFSET = local_124;
  pcStack_11c = FUN_00452e4a;
  pcStack_120 = (code *)0x452e42;
  FUN_00403c5c(&local_c);
  return;
}



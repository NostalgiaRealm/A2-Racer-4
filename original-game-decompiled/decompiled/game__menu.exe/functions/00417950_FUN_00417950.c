
/* ==== FUN_00417950 @ 00417950 ==== 
 * signature: undefined __register FUN_00417950(void)
 * body: 00417950-004179ec
 */

void FUN_00417950(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  int local_8;
  
  local_8 = 0;
  pcStack_18 = (code *)0x417967;
  puVar1 = (undefined4 *)FUN_00410750(DAT_004ac6a8);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  while (local_8 < (int)puVar1[2]) {
    iVar3 = FUN_004102b0(puVar1,local_8);
    FUN_0041912c(iVar3);
    local_8 = local_8 + 1;
    FUN_004194f8(iVar3);
  }
  FUN_004178e4(DAT_004ac6a0);
  FUN_004178e4(DAT_004ac6a4);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_004179f4;
  if (-1 < local_8 + -1) {
    iVar3 = 0;
    do {
      pcStack_1c = (code *)0x4179d9;
      iVar2 = FUN_004102b0(puVar1,iVar3);
      pcStack_1c = (code *)0x4179de;
      FUN_004193d0(iVar2);
      iVar3 = iVar3 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  pcStack_1c = (code *)0x4179ec;
  FUN_004107b4(DAT_004ac6a8);
  return;
}



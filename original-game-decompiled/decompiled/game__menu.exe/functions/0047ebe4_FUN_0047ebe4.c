
/* ==== FUN_0047ebe4 @ 0047ebe4 ==== 
 * signature: undefined __register FUN_0047ebe4(int param_1)
 * body: 0047ebe4-0047ec79
 */

void FUN_0047ebe4(int param_1)

{
  LPCSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  local_c = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    FUN_00403f28((int *)&local_8,*(undefined4 **)(param_1 + 0x38),(undefined4 *)&DAT_0047ec90);
    lpFileName = FUN_004040a0(local_8);
    RemoveFontResourceA(lpFileName);
    FUN_00403f28((int *)&local_c,*(undefined4 **)(param_1 + 0x38),(undefined4 *)&DAT_0047ec90);
    FUN_004088e4(local_c);
    FUN_00403f28((int *)&local_10,*(undefined4 **)(param_1 + 0x38),(undefined4 *)&DAT_0047eca0);
    FUN_004088e4(local_10);
    FUN_00402f9c(*(int **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0047ec81;
  pcStack_1c = (code *)0x47ec79;
  FUN_00403c80((int *)&local_10,3);
  return;
}



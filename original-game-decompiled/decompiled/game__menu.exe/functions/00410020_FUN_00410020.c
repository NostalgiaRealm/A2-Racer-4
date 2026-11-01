
/* ==== FUN_00410020 @ 00410020 ==== 
 * signature: undefined __register FUN_00410020(undefined4 * param_1, undefined4 param_2)
 * body: 00410020-004100ae
 */

void FUN_00410020(undefined4 *param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar2;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  char local_e;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar2 = &stack0xfffffffc;
  puStack_14 = (undefined1 *)0x410036;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040c8f8(DAT_004ac618);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_e = (*(ushort *)(local_8 + 8) & 0x201) == 0;
  puStack_14 = &stack0xfffffffc;
  if ((bool)local_e) {
    pcStack_20 = (code *)0x41006b;
    puStack_14 = &stack0xfffffffc;
    FUN_0040fe74();
  }
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  ppuVar1 = (undefined **)FUN_00402ee0(local_8);
  local_d = FUN_0040ff78(ppuVar1,extraout_EDX,extraout_ECX,(int)puVar2);
  if (local_e != '\0') {
    FUN_0040fed4();
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_004100b6;
  if (local_e != '\0') {
    pcStack_24 = (code *)0x4100ae;
    FUN_0040ff04();
  }
  return;
}



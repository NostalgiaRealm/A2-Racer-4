
/* ==== FUN_0040ede4 @ 0040ede4 ==== 
 * signature: undefined __register FUN_0040ede4(undefined4 * param_1, undefined4 param_2)
 * body: 0040ede4-0040ee72
 */

void FUN_0040ede4(undefined4 *param_1,undefined4 param_2)

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
  puStack_14 = (undefined1 *)0x40edfa;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040bc08(DAT_00447610);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_e = (*(ushort *)(local_8 + 8) & 0x201) == 0;
  puStack_14 = &stack0xfffffffc;
  if ((bool)local_e) {
    pcStack_20 = (code *)0x40ee2f;
    puStack_14 = &stack0xfffffffc;
    FUN_0040ec38();
  }
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  ppuVar1 = (undefined **)FUN_00402c5c(local_8);
  local_d = FUN_0040ed3c(ppuVar1,extraout_EDX,extraout_ECX,(int)puVar2);
  if (local_e != '\0') {
    FUN_0040ec98();
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_0040ee7a;
  if (local_e != '\0') {
    pcStack_24 = (code *)0x40ee72;
    FUN_0040ecc8();
  }
  return;
}



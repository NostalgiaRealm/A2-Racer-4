
/* ==== FUN_004c9ff0 @ 004c9ff0 ==== 
 * signature: undefined __cdecl FUN_004c9ff0(int param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 004c9ff0-004ca01b;004ca01f-004ca03b;004ca03f-004ca068;004ca06c-004ca095;004ca099-004ca0c6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ca01c-004ca01e 004ca03c-004ca03e 004ca069-004ca06b 004ca096-004ca098
 */

void __cdecl FUN_004c9ff0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_007409f8 == 0) {
    if (DAT_007409f4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____palette_was_not_initial_005b5b78);
    }
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____illegal_palette_base_en_005b5c04);
    }
    iVar2 = param_2 + param_3;
    if ((iVar2 < 0) || (0x100 < iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____trying_to_reference_an_i_005b5bc4);
    }
    if ((param_4 != 0) && ((param_4 != 0x40 && (param_4 != 0x80)))) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____illegal_flag_value__d_005b5c30);
    }
    if (param_2 < iVar2) {
      puVar1 = (undefined1 *)(param_1 + 3 + param_2 * 4);
      iVar2 = iVar2 - param_2;
      do {
        *puVar1 = (char)param_4;
        puVar1 = puVar1 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_5 != 0) {
      FUN_004c9e70(param_1,param_2,param_3);
    }
  }
  return;
}




/* ==== FUN_00465da0 @ 00465da0 ==== 
 * signature: undefined __cdecl FUN_00465da0(int param_1)
 * body: 00465da0-00465de2;00465de6-00465de6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00465de3-00465de5
 */

void __cdecl FUN_00465da0(int param_1)

{
  if ((-1 < param_1) && (param_1 < DAT_00712108)) {
    if ((&DAT_0070a244)[param_1 * 0xd0] != -1) {
      FUN_004a7a50((&DAT_0070a244)[param_1 * 0xd0]);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Invalid_Path_Index___d__005a71bc);
}



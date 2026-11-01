
/* ==== FUN_00463c40 @ 00463c40 ==== 
 * signature: undefined __cdecl FUN_00463c40(int param_1)
 * body: 00463c40-00463c64;00463c68-00463c94
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00463c65-00463c67
 */

void __cdecl FUN_00463c40(int param_1)

{
  if ((-1 < param_1) && (param_1 < DAT_00712108)) {
    if ((&DAT_0070a244)[param_1 * 0xd0] != -1) {
      FUN_004aa5a0((&DAT_0070a244)[param_1 * 0xd0]);
      FUN_004a7a50((&DAT_0070a244)[param_1 * 0xd0]);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Path_does_not_exist__Pat_005a6488);
}



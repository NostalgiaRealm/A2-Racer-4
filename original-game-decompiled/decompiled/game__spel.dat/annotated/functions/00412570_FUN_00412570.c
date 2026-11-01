
/* ==== FUN_00412570 @ 00412570 ==== 
 * signature: undefined __cdecl FUN_00412570(int param_1)
 * body: 00412570-004125ad;004125b1-0041277b;0041277f-004127b2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004125ae-004125b0 0041277c-0041277e
 */

/* WARNING: Switch with 1 destination removed at 0x004125cd : 19 cases all go to same destination */

void __cdecl FUN_00412570(int param_1)

{
  if ((DAT_006fb8c0 != 0) && (DAT_006fb89c != 0)) {
    if ((param_1 < 0) || (0x12 < param_1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____Illegal_FSM_object_inde_00592898);
    }
    if (0x29 < (uint)(&DAT_005ce9ec)[param_1 * 0xa5]) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____State_missing_in_switch_005928e4);
    }
    FUN_00419e00(param_1);
    if (-1 < (int)(&DAT_005ce9e8)[param_1 * 0xa5]) {
      FUN_00417ea0(param_1);
    }
    if ((-1 < param_1) && (param_1 < 6)) {
      FUN_00412410(param_1);
      return;
    }
    FUN_004124b0(param_1);
  }
  return;
}



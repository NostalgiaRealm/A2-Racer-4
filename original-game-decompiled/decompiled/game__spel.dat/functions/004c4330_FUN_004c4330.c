
/* ==== FUN_004c4330 @ 004c4330 ==== 
 * signature: undefined4 __cdecl FUN_004c4330(int param_1, uint param_2, int param_3)
 * body: 004c4330-004c4355;004c435c-004c43b0;004c43b4-004c43f3
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4356-004c435b 004c43b1-004c43b3
 */

undefined4 __cdecl FUN_004c4330(int param_1,uint param_2,int param_3)

{
  if (param_1 == 0) {
    if ((-1 < (int)param_2) && ((int)param_2 < 0x15)) {
      DAT_005b3794 = param_2;
      DAT_005b3798 = (&DAT_005b37b0)[param_2 * 5];
      DAT_005b379c = (&DAT_005b37b4)[param_2 * 5];
      DAT_005b37a0 = (&DAT_005b37b8)[param_2 * 5];
      DAT_007408e0 = *(undefined4 *)(&DAT_005b37bc + param_2 * 0x14);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_predefined_screen_005b3a0c);
  }
  if (param_1 == 1) {
    if (param_3 == 1) {
      DAT_005b37a4 = DAT_005b37a4 | param_2;
      return 0;
    }
    DAT_005b37a4 = param_2;
    return 0;
  }
  if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____unknown_variable___d__r_005b3a50);
  }
  DAT_005b37ac = param_2;
  return 0;
}



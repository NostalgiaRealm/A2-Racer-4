
/* ==== FUN_004ceba0 @ 004ceba0 ==== 
 * signature: undefined __cdecl FUN_004ceba0(int param_1)
 * body: 004ceba0-004cebbc;004cebc0-004cebdc;004cebe0-004cec05;004cec09-004cec29
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cebbd-004cebbf 004cebdd-004cebdf 004cec06-004cec08
 */

void __cdecl FUN_004ceba0(int param_1)

{
  if (DAT_0074b2f4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____draw_mouse__Mouse_is_n_005b6d34);
  }
  if (DAT_005b6b2c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____draw_mouse__You_can_t_c_005b6cf0);
  }
  if ((DAT_005b6b2c == 2) && (DAT_0074b2fc == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____draw_mouse__No_mouse_a_005b6cbc);
  }
  if ((DAT_005b6b08 != -1) && (DAT_005b6b0c != -1)) {
    FUN_004ce950(param_1);
  }
  return;
}



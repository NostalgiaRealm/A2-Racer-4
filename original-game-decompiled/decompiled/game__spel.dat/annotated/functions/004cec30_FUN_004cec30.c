
/* ==== FUN_004cec30 @ 004cec30 ==== 
 * signature: undefined __cdecl FUN_004cec30(int param_1)
 * body: 004cec30-004cec4c;004cec50-004cec6c;004cec70-004cec95;004cec99-004cecdc
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cec4d-004cec4f 004cec6d-004cec6f 004cec96-004cec98
 */

void __cdecl FUN_004cec30(int param_1)

{
  int iVar1;
  
  if (DAT_0074b2f4 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____draw_mouse__Mouse_is_n_005b6d34);
  }
  if (DAT_005b6b2c == 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____draw_mouse__You_can_t_c_005b6cf0);
  }
  if ((DAT_005b6b2c == 2) && (DAT_0074b2fc == 0)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____draw_mouse__No_mouse_a_005b6cbc);
  }
  iVar1 = *(int *)(*(int *)(DAT_00740a1c + 8 + DAT_005b6b24 * 0xc) + 4 + DAT_005b6b28 * 8);
  FUN_004ce6d0(param_1);
  FUN_004c8f30(param_1,iVar1,DAT_0074b2ec,DAT_0074b2f0,3);
  return;
}



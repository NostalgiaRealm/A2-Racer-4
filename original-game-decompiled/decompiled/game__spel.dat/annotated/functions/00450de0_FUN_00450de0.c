
/* ==== FUN_00450de0 @ 00450de0 ==== 
 * signature: undefined __stdcall FUN_00450de0(void)
 * body: 00450de0-00450e08;00450e0c-00450e65
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00450e09-00450e0b
 */

void FUN_00450de0(void)

{
  int iVar1;
  
  if ((-1 < DAT_006fb88c) && (DAT_006fb88c < DAT_006fb6e4)) {
    iVar1 = FUN_004475b0();
    if (0 < iVar1) {
      if (17000000 < DAT_00740dc8) {
        FUN_00450950(&DAT_006fb6e8 + DAT_006fb88c * 0xe,1);
        FUN_004508a0();
        return;
      }
      FUN_004475a0(0);
      FUN_004c3fa0((byte *)s__d_total_memory___d_needed_for_m_005a281c);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Illegal_index_music___d_o_005a27f4);
}



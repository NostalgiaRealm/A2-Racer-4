
/* ==== FUN_00450e70 @ 00450e70 ==== 
 * signature: undefined __stdcall FUN_00450e70(void)
 * body: 00450e70-00450ec8;00450ecc-00450edf
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00450ec9-00450ecb
 */

void FUN_00450e70(void)

{
  int iVar1;
  
  iVar1 = FUN_004475b0();
  if (iVar1 != 0) {
    iVar1 = FUN_00450900(&DAT_006fb6e8 + DAT_006fb88c * 0xe);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s___d__Static_sound_source_for_m_005a287c);
    }
    iVar1 = FUN_0049eb50(&DAT_006fbb5c,iVar1);
    FUN_0049e570(iVar1);
  }
  return;
}



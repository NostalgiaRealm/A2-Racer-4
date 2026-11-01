
/* ==== FUN_004cd2d0 @ 004cd2d0 ==== 
 * signature: undefined4 __stdcall FUN_004cd2d0(void)
 * body: 004cd2d0-004cd311;004cd315-004cd324
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cd312-004cd314
 */

undefined4 FUN_004cd2d0(void)

{
  int iVar1;
  
  FUN_004c3fa0((byte *)s_getting_screen_mode_info_005b651c);
  iVar1 = (**(code **)(*DAT_0074088c + 0x20))(DAT_0074088c,0,0,0,FUN_004cd280);
  if (iVar1 != 0) {
    FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____could_not_get_mode_info_005b64ec);
  }
  FUN_004c3fa0((byte *)s_done_getting_screen_mode_info_005b64cc);
  return 0;
}



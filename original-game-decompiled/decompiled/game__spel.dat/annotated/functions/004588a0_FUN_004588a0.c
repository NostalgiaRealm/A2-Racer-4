
/* ==== FUN_004588a0 @ 004588a0 ==== 
 * signature: undefined4 __stdcall FUN_004588a0(void)
 * body: 004588a0-004588bc;004588c0-004588e3
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004588bd-004588bf
 */

undefined4 FUN_004588a0(void)

{
  if (DAT_006fd130 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____please_call_init_anims___005a4c14);
  }
  FUN_004ce360();
  FUN_004ce3e0(0x5a4830,(int *)&DAT_005a4768);
  FUN_004cc520(&DAT_00741430);
  return 0;
}



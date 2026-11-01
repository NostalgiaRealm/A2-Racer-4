
/* ==== FUN_004cce20 @ 004cce20 ==== 
 * signature: undefined4 __cdecl FUN_004cce20(int param_1)
 * body: 004cce20-004cce52;004cce5d-004cce7a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cce53-004cce5c
 */

undefined4 __cdecl FUN_004cce20(int param_1)

{
  if (DAT_00740de0 == 0) {
    DAT_00740db0 = LocalAlloc(0x40,param_1 * 0xd8);
    if (DAT_00740db0 == (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____not_enough_memory_to_re_005b4e64);
    }
    DAT_00740dd8 = param_1;
    DAT_00740ddc = 0;
    DAT_00740de0 = 1;
  }
  return 0;
}



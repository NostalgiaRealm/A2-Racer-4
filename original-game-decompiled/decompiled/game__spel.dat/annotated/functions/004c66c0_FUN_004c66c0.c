
/* ==== FUN_004c66c0 @ 004c66c0 ==== 
 * signature: undefined4 __cdecl FUN_004c66c0(int param_1)
 * body: 004c66c0-004c66f2;004c66fd-004c671a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c66f3-004c66fc
 */

undefined4 __cdecl FUN_004c66c0(int param_1)

{
  if (DAT_0074094c == 0) {
    DAT_00740930 = LocalAlloc(0x40,param_1 * 0xd8);
    if (DAT_00740930 == (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____not_enough_memory_to_re_005b4e64);
    }
    DAT_00740944 = param_1;
    DAT_00740948 = 0;
    DAT_0074094c = 1;
  }
  return 0;
}



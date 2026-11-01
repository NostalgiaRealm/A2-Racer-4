
/* ==== FUN_004b8840 @ 004b8840 ==== 
 * signature: undefined __cdecl FUN_004b8840(int param_1)
 * body: 004b8840-004b885f;004b8864-004b8879
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b8860-004b8863
 */

void __cdecl FUN_004b8840(int param_1)

{
  if (param_1 == 0) {
    DAT_0073b20c = 0;
    return;
  }
  if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Unknown_texture_source_t_005b14c0);
  }
  DAT_0073b20c = 1;
  return;
}



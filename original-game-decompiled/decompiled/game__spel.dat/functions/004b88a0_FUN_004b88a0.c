
/* ==== FUN_004b88a0 @ 004b88a0 ==== 
 * signature: undefined __cdecl FUN_004b88a0(float param_1)
 * body: 004b88a0-004b88e7;004b88f9-004b8905
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b88e8-004b88f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004b88a0(float param_1)

{
  if ((1.0 < param_1) && (param_1 <= 256.0)) {
    _DAT_005b1498 = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____illegal_texture_partion_005b1504);
}



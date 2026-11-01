
/* ==== FUN_00405430 @ 00405430 ==== 
 * signature: bool __cdecl FUN_00405430(int param_1)
 * body: 00405430-00405452;00405456-0040547b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00405453-00405455
 */

bool __cdecl FUN_00405430(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x13)) {
    return *(int *)(*(int *)(&DAT_005cea04 + param_1 * 0x294) +
                   *(int *)(&DAT_005ce9fc + param_1 * 0x294) * 8) == -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Illegal_FSM_object_inde_0058f89c);
}



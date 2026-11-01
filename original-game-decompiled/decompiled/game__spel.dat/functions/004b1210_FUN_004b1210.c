
/* ==== FUN_004b1210 @ 004b1210 ==== 
 * signature: undefined __thiscall FUN_004b1210(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004b1210-004b123b;004b123f-004b125c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b123c-004b123e
 */

void __thiscall FUN_004b1210(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)((int)this + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Cannot_set_position_loc_005b0a7c);
  }
  *(undefined4 *)((int)this + 0xbc) = param_1;
  *(undefined4 *)((int)this + 0xc0) = param_2;
  *(undefined4 *)((int)this + 0xc4) = param_3;
  return;
}



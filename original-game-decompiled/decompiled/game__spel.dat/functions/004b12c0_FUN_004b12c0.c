
/* ==== FUN_004b12c0 @ 004b12c0 ==== 
 * signature: undefined __thiscall FUN_004b12c0(void * this, undefined4 * param_1)
 * body: 004b12c0-004b12eb;004b12ef-004b130e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b12ec-004b12ee
 */

void __thiscall FUN_004b12c0(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Cannot_get_target_lock_o_005b0b24);
  }
  *param_1 = *(undefined4 *)((int)this + 0xcc);
  param_1[1] = *(undefined4 *)((int)this + 0xd0);
  param_1[2] = *(undefined4 *)((int)this + 0xd4);
  return;
}



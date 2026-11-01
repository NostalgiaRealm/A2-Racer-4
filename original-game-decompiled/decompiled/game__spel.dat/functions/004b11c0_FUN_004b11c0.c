
/* ==== FUN_004b11c0 @ 004b11c0 ==== 
 * signature: undefined __thiscall FUN_004b11c0(void * this, undefined4 * param_1)
 * body: 004b11c0-004b11eb;004b11ef-004b120e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b11ec-004b11ee
 */

void __thiscall FUN_004b11c0(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Cannot_get_position_loc_005b09d4);
  }
  *param_1 = *(undefined4 *)((int)this + 0xbc);
  param_1[1] = *(undefined4 *)((int)this + 0xc0);
  param_1[2] = *(undefined4 *)((int)this + 0xc4);
  return;
}



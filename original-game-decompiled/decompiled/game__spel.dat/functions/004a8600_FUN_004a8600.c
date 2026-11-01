
/* ==== FUN_004a8600 @ 004a8600 ==== 
 * signature: undefined4 __thiscall FUN_004a8600(void * this, int param_1)
 * body: 004a8600-004a8624;004a8628-004a8630
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a8625-004a8627
 */

undefined4 __thiscall FUN_004a8600(void *this,int param_1)

{
  if (*(int *)((int)this + 0xac) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Sub_object_not_yet_init_005afcac);
  }
  return *(undefined4 *)((int)this + param_1 * 4 + 0x7c);
}



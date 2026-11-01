
/* ==== FUN_0042b140 @ 0042b140 ==== 
 * signature: undefined __thiscall FUN_0042b140(void * this, int param_1)
 * body: 0042b140-0042b166;0042b16a-0042b179
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042b167-0042b169
 */

void __thiscall FUN_0042b140(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 100)) {
    FUN_0042aea0((int)((int)this + param_1 * 0x24));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Maximum_connected_object_00596f58);
}



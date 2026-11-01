
/* ==== FUN_004930f0 @ 004930f0 ==== 
 * signature: undefined __thiscall FUN_004930f0(void * this, undefined4 param_1)
 * body: 004930f0-0049310d;00493111-00493121
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0049310e-00493110
 */

void __thiscall FUN_004930f0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Element_not_initted_yet__005ad0b0);
  }
  (**(code **)(**(int **)((int)this + 4) + 0x28))(param_1);
  return;
}



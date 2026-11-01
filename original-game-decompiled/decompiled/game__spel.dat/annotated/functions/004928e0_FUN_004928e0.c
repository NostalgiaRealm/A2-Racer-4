
/* ==== FUN_004928e0 @ 004928e0 ==== 
 * signature: undefined __thiscall FUN_004928e0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004928e0-004928fa;004928fe-00492923
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004928fb-004928fd
 */

void __thiscall FUN_004928e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)((int)this + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Element_not_initted_yet__005acf24);
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  FUN_0047bc50(*(void **)((int)this + 4),(undefined4 *)((int)this + 0x18));
  return;
}



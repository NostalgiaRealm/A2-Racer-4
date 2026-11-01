
/* ==== FUN_004ab0d0 @ 004ab0d0 ==== 
 * signature: undefined4 __thiscall FUN_004ab0d0(void * this, int param_1)
 * body: 004ab0d0-004ab0f7;004ab0fb-004ab103
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ab0f8-004ab0fa
 */

undefined4 __thiscall FUN_004ab0d0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 0xb)) {
    return *(undefined4 *)((int)this + param_1 * 4 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____obstacle___d__waypoint_o_005b0268);
}




/* ==== FUN_004bf8f0 @ 004bf8f0 ==== 
 * signature: undefined __thiscall FUN_004bf8f0(void * this, int param_1, undefined2 param_2)
 * body: 004bf8f0-004bf90b;004bf90f-004bf934;004bf94c-004bf95f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bf90c-004bf90e 004bf935-004bf94b
 */

void __thiscall FUN_004bf8f0(void *this,int param_1,undefined2 param_2)

{
  if (*(int *)((int)this + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____mesh_has_not_been_initi_005b2664);
  }
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x94))) {
    *(undefined2 *)(*(int *)((int)this + 0x90) + param_1 * 2) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____getting_index____d___is_005b24cc);
}



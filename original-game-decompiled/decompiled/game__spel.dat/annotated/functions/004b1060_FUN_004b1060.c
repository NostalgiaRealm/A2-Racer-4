
/* ==== FUN_004b1060 @ 004b1060 ==== 
 * signature: undefined __thiscall FUN_004b1060(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004b1060-004b1091;004b1095-004b10af
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b1092-004b1094
 */

void __thiscall FUN_004b1060(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(int *)((int)this + 0x74) != 1) && (*(int *)((int)this + 0x7c) != 1)) {
    *(undefined4 *)((int)this + 8) = param_1;
    *(undefined4 *)((int)this + 0xc) = param_2;
    *(undefined4 *)((int)this + 0x10) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____Cannot_set_position_in_c_005b0870);
}



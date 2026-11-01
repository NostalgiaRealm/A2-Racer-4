
/* ==== FUN_004c3590 @ 004c3590 ==== 
 * signature: int __thiscall FUN_004c3590(void * this, int param_1)
 * body: 004c3590-004c35ba;004c35be-004c35e7;004c35eb-004c360c;004c3610-004c3628
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c35bb-004c35bd 004c35e8-004c35ea 004c360d-004c360f
 */

int __thiscall FUN_004c3590(void *this,int param_1)

{
  if (*(int *)((int)this + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 4))) {
    if (*(char *)(*(int *)((int)this + 0x10) + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    return *(int *)this + param_1 * 0x1d8;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}




/* ==== FUN_004b82f0 @ 004b82f0 ==== 
 * signature: int __thiscall FUN_004b82f0(void * this, int param_1)
 * body: 004b82f0-004b831a;004b831e-004b8347;004b834b-004b836c;004b8370-004b837d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b831b-004b831d 004b8348-004b834a 004b836d-004b836f
 */

int __thiscall FUN_004b82f0(void *this,int param_1)

{
  if (*(int *)((int)this + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 4))) {
    if (*(char *)(*(int *)((int)this + 0x10) + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    return param_1 * 0x10 + *(int *)this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



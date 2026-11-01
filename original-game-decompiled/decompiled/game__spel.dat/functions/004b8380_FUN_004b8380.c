
/* ==== FUN_004b8380 @ 004b8380 ==== 
 * signature: int __thiscall FUN_004b8380(void * this, int param_1)
 * body: 004b8380-004b83aa;004b83ae-004b83d7;004b83db-004b83fc;004b8400-004b840b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b83ab-004b83ad 004b83d8-004b83da 004b83fd-004b83ff
 */

int __thiscall FUN_004b8380(void *this,int param_1)

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
    return param_1 * 9 + *(int *)this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



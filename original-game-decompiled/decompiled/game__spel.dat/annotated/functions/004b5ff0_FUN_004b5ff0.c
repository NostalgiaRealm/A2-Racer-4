
/* ==== FUN_004b5ff0 @ 004b5ff0 ==== 
 * signature: int __thiscall FUN_004b5ff0(void * this, int param_1)
 * body: 004b5ff0-004b601c;004b6020-004b6041;004b6045-004b605e;004b6062-004b607b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b601d-004b601f 004b6042-004b6044 004b605f-004b6061
 */

int __thiscall FUN_004b5ff0(void *this,int param_1)

{
  if (*(int *)((int)this + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 4))) {
    if (*(char *)(*(int *)((int)this + 0x10) + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    return param_1 * 0xa9 + *(int *)this;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



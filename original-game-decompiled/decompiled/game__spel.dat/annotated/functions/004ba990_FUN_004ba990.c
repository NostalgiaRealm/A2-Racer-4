
/* ==== FUN_004ba990 @ 004ba990 ==== 
 * signature: int __thiscall FUN_004ba990(void * this, int param_1)
 * body: 004ba990-004ba9bc;004ba9c0-004ba9e1;004ba9e5-004ba9fe;004baa02-004baa10
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ba9bd-004ba9bf 004ba9e2-004ba9e4 004ba9ff-004baa01
 */

int __thiscall FUN_004ba990(void *this,int param_1)

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
    return *(int *)this + param_1 * 0x48;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



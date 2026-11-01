
/* ==== FUN_004b6080 @ 004b6080 ==== 
 * signature: int __thiscall FUN_004b6080(void * this, int param_1)
 * body: 004b6080-004b60ac;004b60b0-004b60d1;004b60d5-004b60ee;004b60f2-004b610c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b60ad-004b60af 004b60d2-004b60d4 004b60ef-004b60f1
 */

int __thiscall FUN_004b6080(void *this,int param_1)

{
  if (*(int *)((int)this + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 4))) {
    if (*(char *)(*(int *)((int)this + 0x10) + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    return *(int *)this + param_1 * 0xac;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



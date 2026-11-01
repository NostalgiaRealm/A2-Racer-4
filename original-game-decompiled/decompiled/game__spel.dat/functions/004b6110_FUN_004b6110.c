
/* ==== FUN_004b6110 @ 004b6110 ==== 
 * signature: int __thiscall FUN_004b6110(void * this, int param_1)
 * body: 004b6110-004b613c;004b6140-004b6161;004b6165-004b617e;004b6182-004b618d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b613d-004b613f 004b6162-004b6164 004b617f-004b6181
 */

int __thiscall FUN_004b6110(void *this,int param_1)

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
    return *(int *)this + param_1 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



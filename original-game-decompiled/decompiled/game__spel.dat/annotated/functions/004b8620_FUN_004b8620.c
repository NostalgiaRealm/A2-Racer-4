
/* ==== FUN_004b8620 @ 004b8620 ==== 
 * signature: int __thiscall FUN_004b8620(void * this, int param_1)
 * body: 004b8620-004b864a;004b864e-004b8677;004b867b-004b869c;004b86a0-004b86ae
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b864b-004b864d 004b8678-004b867a 004b869d-004b869f
 */

int __thiscall FUN_004b8620(void *this,int param_1)

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
    return param_1 * 0x19 + *(int *)this;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



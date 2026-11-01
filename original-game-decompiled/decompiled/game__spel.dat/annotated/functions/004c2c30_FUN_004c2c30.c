
/* ==== FUN_004c2c30 @ 004c2c30 ==== 
 * signature: int __thiscall FUN_004c2c30(void * this, int param_1)
 * body: 004c2c30-004c2c5a;004c2c5e-004c2c87;004c2c8b-004c2cac;004c2cb0-004c2cc1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c2c5b-004c2c5d 004c2c88-004c2c8a 004c2cad-004c2caf
 */

int __thiscall FUN_004c2c30(void *this,int param_1)

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
    return param_1 * 0xb0 + *(int *)this;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



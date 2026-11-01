
/* ==== FUN_004c2cd0 @ 004c2cd0 ==== 
 * signature: int __thiscall FUN_004c2cd0(void * this, int param_1)
 * body: 004c2cd0-004c2cfa;004c2cfe-004c2d27;004c2d2b-004c2d4c;004c2d50-004c2d61
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c2cfb-004c2cfd 004c2d28-004c2d2a 004c2d4d-004c2d4f
 */

int __thiscall FUN_004c2cd0(void *this,int param_1)

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
    return param_1 * 0xb0 + *(int *)this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



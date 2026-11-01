
/* ==== FUN_004b8410 @ 004b8410 ==== 
 * signature: int __thiscall FUN_004b8410(void * this, int param_1)
 * body: 004b8410-004b843a;004b843e-004b8467;004b846b-004b848c;004b8490-004b84a4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b843b-004b843d 004b8468-004b846a 004b848d-004b848f
 */

int __thiscall FUN_004b8410(void *this,int param_1)

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
    return param_1 * 0x15 + *(int *)this;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



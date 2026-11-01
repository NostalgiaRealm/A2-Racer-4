
/* ==== FUN_004b8150 @ 004b8150 ==== 
 * signature: int __stdcall FUN_004b8150(int param_1)
 * body: 004b8150-004b8188;004b818c-004b81b8;004b81bc-004b81e1;004b81e5-004b8220;004b8224-004b8250;004b8254-004b8278;004b827c-004b82b0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b8189-004b818b 004b81b9-004b81bb 004b81e2-004b81e4 004b8221-004b8223 004b8251-004b8253 004b8279-004b827b 004b82b1-004b82bc
 */

int FUN_004b8150(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
    }
    if ((param_1 < 0) || (DAT_0073b16c <= param_1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b178 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    if (*(int *)(param_1 * 9 + DAT_0073b168) <= iVar1) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s___s__d___no_free_index_in_index_f_005b1424);
    }
    if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
    }
    if ((param_1 < 0) || (DAT_0073b16c <= param_1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b178 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    if (*(int *)(*(int *)(param_1 * 9 + 4 + DAT_0073b168) + iVar1 * 4) == -1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



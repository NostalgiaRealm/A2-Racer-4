
/* ==== FUN_004b7810 @ 004b7810 ==== 
 * signature: undefined __fastcall FUN_004b7810(int param_1)
 * body: 004b7810-004b787b;004b787f-004b78d2;004b78d6-004b78fd;004b7901-004b7926;004b792a-004b7965
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b787c-004b787e 004b78d3-004b78d5 004b78fe-004b7900 004b7927-004b7929
 */

void __fastcall FUN_004b7810(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004c3fa0((byte *)s__s__d____005b13a4);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar2 = 0;
    do {
      FUN_004c3fa0((byte *)s__s__d____005b13a4);
      if ((iVar2 < 0) || (DAT_0073b16c <= iVar1)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
      }
      if (*(char *)(DAT_0073b178 + iVar1) != '\0') {
        FUN_004c3fa0((byte *)s__s__d____005b13a4);
        if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar2 < 0) || (DAT_0073b16c <= iVar1)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(DAT_0073b178 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        FUN_00559d4e(*(LPVOID *)(iVar2 + 4 + DAT_0073b168));
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 9;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  FUN_004c3fa0((byte *)s__s__d____005b13a4);
  return;
}



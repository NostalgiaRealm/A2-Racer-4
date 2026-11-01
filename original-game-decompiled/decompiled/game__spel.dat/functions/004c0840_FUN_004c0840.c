
/* ==== FUN_004c0840 @ 004c0840 ==== 
 * signature: undefined4 __cdecl FUN_004c0840(uint param_1)
 * body: 004c0840-004c0890;004c0894-004c08b9;004c08bd-004c08de;004c08e2-004c08f2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c0891-004c0893 004c08ba-004c08bc 004c08df-004c08e1
 */

undefined4 __cdecl FUN_004c0840(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((DAT_0073b77c != 0) && (DAT_0073b4fd != 0)) {
    uVar1 = param_1 | 2;
  }
  if (DAT_0073b784[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < DAT_0073b78c) && (DAT_0073b78c < DAT_0073b784[1])) {
    if (*(char *)(DAT_0073b784[4] + DAT_0073b78c) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    FUN_004c0f50(*(void **)(*DAT_0073b784 + DAT_0073b78c * 4),uVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



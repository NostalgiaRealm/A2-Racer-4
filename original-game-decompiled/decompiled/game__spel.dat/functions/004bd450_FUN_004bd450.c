
/* ==== FUN_004bd450 @ 004bd450 ==== 
 * signature: undefined __stdcall FUN_004bd450(int param_1)
 * body: 004bd450-004bd450
 */

void FUN_004bd450(int param_1)

{
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < param_1) && (param_1 < DAT_0073b5cc)) {
    if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    FUN_004be340((int *)(DAT_0073b5c8 + param_1 * 0xac));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



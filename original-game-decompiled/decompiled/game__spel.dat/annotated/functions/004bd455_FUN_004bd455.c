
/* ==== FUN_004bd455 @ 004bd455 ==== 
 * signature: undefined __cdecl FUN_004bd455(int param_1)
 * body: 004bd455-004bd4f7
 */

void __cdecl FUN_004bd455(int param_1)

{
  int in_EAX;
  
  if (in_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < param_1) && (param_1 < DAT_0073b5cc)) {
    if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    FUN_004be340((int *)(DAT_0073b5c8 + param_1 * 0xac));
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



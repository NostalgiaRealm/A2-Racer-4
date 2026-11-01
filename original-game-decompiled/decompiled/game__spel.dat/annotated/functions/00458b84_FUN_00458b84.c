
/* ==== FUN_00458b84 @ 00458b84 ==== 
 * signature: int __stdcall FUN_00458b84(int param_1)
 * body: 00458b84-00458b8f
 */

int FUN_00458b84(int param_1)

{
  if ((-1 < param_1) && (param_1 < DAT_006fd148)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Text_index_incorrect__In_005a4e74);
}




/* ==== FUN_00404c84 @ 00404c84 ==== 
 * signature: undefined4 __stdcall FUN_00404c84(int param_1)
 * body: 00404c84-00404c8f
 */

undefined4 FUN_00404c84(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x13)) {
    if (2.0 < *(float *)(&DAT_005cea54 + param_1 * 0x294)) {
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f580);
}



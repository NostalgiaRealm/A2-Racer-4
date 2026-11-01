
/* ==== FUN_00404b61 @ 00404b61 ==== 
 * signature: undefined4 __cdecl FUN_00404b61(int param_1)
 * body: 00404b61-00404b92;00404b96-00404bd3
 */

undefined4 __cdecl FUN_00404b61(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x13)) {
    if (*(float *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0xc4 + DAT_00715e50) < 0.0) {
      return 1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f4b8);
}



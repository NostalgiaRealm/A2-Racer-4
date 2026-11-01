
/* ==== FUN_004653b0 @ 004653b0 ==== 
 * signature: undefined __cdecl FUN_004653b0(int param_1)
 * body: 004653b0-004653f2;004653f6-004653f6
 */

void __cdecl FUN_004653b0(int param_1)

{
  if ((-1 < param_1) && (param_1 < DAT_00712108)) {
    if ((&DAT_0070a244)[param_1 * 0xd0] != -1) {
      FUN_004a7a50((&DAT_0070a244)[param_1 * 0xd0]);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Invalid_Path_Index___d__005a6e20);
}



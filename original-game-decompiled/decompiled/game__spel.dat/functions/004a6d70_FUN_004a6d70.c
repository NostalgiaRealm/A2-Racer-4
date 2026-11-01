
/* ==== FUN_004a6d70 @ 004a6d70 ==== 
 * signature: int __cdecl FUN_004a6d70(int param_1, int param_2, int param_3)
 * body: 004a6d70-004a6d97;004a6d9b-004a6dbc;004a6dc0-004a6ddc;004a6de0-004a6e7e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6d98-004a6d9a 004a6dbd-004a6dbf 004a6ddd-004a6ddf
 */

int __cdecl FUN_004a6d70(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 < 0) || (DAT_00715f04 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_chunk___d_005af910);
  }
  if ((param_3 < 0) || (1 < param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_side___d_005af948);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_lane___d_005af92c);
  }
  if (param_3 == 0) {
    iVar1 = *(int *)(DAT_00715254 + param_1 * 4);
    if (*(int *)(DAT_00715f00 + 0xf4 + iVar1 * 0x994) <= param_2) {
      return 0;
    }
    return *(int *)(DAT_00715f00 + 0x134 + (param_2 + iVar1 * 0x265) * 4);
  }
  if (param_3 != 1) {
    return param_1;
  }
  iVar1 = *(int *)(DAT_00715254 + param_1 * 4);
  if (*(int *)(DAT_00715f00 + 0xf8 + iVar1 * 0x994) <= param_2) {
    return 0;
  }
  return *(int *)(DAT_00715f00 + 0x164 + (param_2 + iVar1 * 0x265) * 4);
}



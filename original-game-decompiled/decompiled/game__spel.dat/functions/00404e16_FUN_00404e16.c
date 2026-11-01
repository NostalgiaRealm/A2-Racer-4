
/* ==== FUN_00404e16 @ 00404e16 ==== 
 * signature: bool __cdecl FUN_00404e16(int param_1)
 * body: 00404e16-00404e42;00404e46-00404e90
 */

bool __cdecl FUN_00404e16(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = FUN_0040e2f0(*(int *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x34 +
                                 DAT_00715e50),
                         *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50));
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f6c0);
}



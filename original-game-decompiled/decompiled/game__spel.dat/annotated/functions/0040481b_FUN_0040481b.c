
/* ==== FUN_0040481b @ 0040481b ==== 
 * signature: bool __stdcall FUN_0040481b(int param_1)
 * body: 0040481b-0040481f
 */

bool FUN_0040481b(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = FUN_00429360(*(int *)(&DAT_005cea34 + param_1 * 0x294));
    return (bool)('\x01' - (iVar1 != 0));
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058f2a8);
}



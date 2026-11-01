
/* ==== FUN_00404ae3 @ 00404ae3 ==== 
 * signature: undefined4 __cdecl FUN_00404ae3(int param_1)
 * body: 00404ae3-00404b12;00404b16-00404b60
 */

undefined4 __cdecl FUN_00404ae3(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined8 uVar2;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    uVar2 = FUN_00419120(*(int *)(&DAT_005cea34 + param_1 * 0x294),
                         *(int *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x3c +
                                 DAT_00715e50));
    if ((int)uVar2 == -1) {
      bVar1 = FUN_00404820(param_1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        return 1;
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f448);
}



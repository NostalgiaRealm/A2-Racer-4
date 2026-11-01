
/* ==== FUN_00415c60 @ 00415c60 ==== 
 * signature: undefined __cdecl FUN_00415c60(char * param_1)
 * body: 00415c60-00415ced
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00415cee-00415cf1
 */

void __cdecl FUN_00415c60(char *param_1)

{
  switch((&DAT_005d1bac)[(int)param_1 * 0xe]) {
  case 0:
    FUN_00414950(param_1);
    return;
  case 1:
    FUN_00414c00((int)param_1);
    return;
  case 2:
    FUN_00414c80((int)param_1);
    return;
  case 3:
    FUN_00414cc0(param_1);
    return;
  case 4:
    FUN_00414d60((int)param_1);
    return;
  case 5:
    FUN_00414f30((int)param_1);
    return;
  case 6:
    FUN_004150e0((int)param_1);
    return;
  case 7:
  case 8:
    FUN_00414bd0(param_1);
    return;
  case 9:
  case 10:
    FUN_00414bc0(param_1);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Traffic_object_has_illeg_00592e6c);
  }
}



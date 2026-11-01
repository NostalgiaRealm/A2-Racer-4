
/* ==== FUN_0043f63d @ 0043f63d ==== 
 * signature: int __stdcall FUN_0043f63d(int param_1)
 * body: 0043f63d-0043f63f
 */

int FUN_0043f63d(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == DAT_006fbaa4) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Trying_to_get_position_o_0059c044);
  }
  iVar1 = 0;
  if (0 < DAT_005d2ab0) {
    piVar2 = &DAT_005973c8;
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x16;
    } while (iVar1 < DAT_005d2ab0);
  }
  return -1;
}




/* ==== FUN_004cece0 @ 004cece0 ==== 
 * signature: undefined4 __stdcall FUN_004cece0(void)
 * body: 004cece0-004cecfd;004ced01-004ced7f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cecfe-004ced00
 */

undefined4 FUN_004cece0(void)

{
  int iVar1;
  int local_4;
  
  if (DAT_0074b2f4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____handle_mouse__Mouse_is_005b6d64);
  }
  FUN_004ce640(&DAT_0074b2ec,&DAT_0074b2f0,&local_4);
  if ((DAT_0074b2f8 != 0) && (DAT_0074b300 != 0)) {
    if (DAT_005b6b2c == 1) {
      SetCursor(DAT_0074b314);
    }
    else if ((DAT_005b6b2c == 2) &&
            ((DAT_005b6b08 != DAT_0074b2ec || (DAT_005b6b0c != DAT_0074b2f0)))) {
      iVar1 = FUN_004ceec0();
      FUN_004ceba0(iVar1);
      iVar1 = FUN_004ceec0();
      FUN_004cec30(iVar1);
      return 0;
    }
  }
  return 0;
}



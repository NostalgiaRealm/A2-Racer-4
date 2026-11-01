
/* ==== FUN_0044bd10 @ 0044bd10 ==== 
 * signature: undefined __stdcall FUN_0044bd10(void)
 * body: 0044bd10-0044be6c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044be6d-0044be7c
 */

void FUN_0044bd10(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00447370();
  switch(uVar1) {
  case 0:
    DAT_006fb894 = 1;
    DAT_006fb890 = 0;
    DAT_006fb8d0 = 0;
    FUN_004a6b00(0);
    return;
  case 1:
    DAT_006fb8d0 = 0;
    DAT_006fb890 = 1;
    DAT_006fb894 = 1;
    FUN_004a6b00(0);
    return;
  case 2:
  case 3:
    DAT_006fb894 = 0;
    DAT_006fb890 = 1;
    DAT_006fb8d0 = 1;
    FUN_004a6b00(1);
    return;
  case 4:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 2;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  case 5:
  case 6:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 0;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  case 7:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 3;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  case 8:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 4;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  case 9:
    DAT_006fb8d0 = 1;
    DAT_006fb890 = 5;
    DAT_006fb894 = 0;
    FUN_004a6b00(1);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__set_game_display___s__d____Inva_005a1270);
  }
}



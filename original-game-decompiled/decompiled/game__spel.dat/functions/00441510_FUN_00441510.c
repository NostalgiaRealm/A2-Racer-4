
/* ==== FUN_00441510 @ 00441510 ==== 
 * signature: undefined __stdcall FUN_00441510(void)
 * body: 00441510-0044152d;00441531-00441562;00441566-004415dc
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044152e-00441530 00441563-00441565
 */

void FUN_00441510(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (DAT_006cdfe8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Progress_clock_wasn_t_in_0059ce2c);
  }
  if (DAT_006cdfec == 0) {
    DAT_006cdfe8 = 0;
    return;
  }
  if ((-1 < DAT_006cd044) && (DAT_006cd044 < 0x3e9)) {
    GetTickCount();
    iVar1 = DAT_006cd044;
    iVar3 = 0;
    if (0 < DAT_006cd044) {
      do {
        lVar4 = __ftol();
        iVar2 = (int)lVar4;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (100 < iVar2) {
          iVar2 = 100;
        }
        (&DAT_006cd048)[iVar3] = iVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    FUN_00441430();
    DAT_006cdfe8 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__g_nr_times_called_incorr_0059ce78);
}



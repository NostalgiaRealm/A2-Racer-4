
/* ==== FUN_004415e0 @ 004415e0 ==== 
 * signature: undefined __stdcall FUN_004415e0(void)
 * body: 004415e0-0044160d;00441611-00441653;0044165c-004416a8;004416ac-004416df;004416e3-004416ee
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044160e-00441610 00441654-0044165b 004416a9-004416ab 004416e0-004416e2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004415e0(void)

{
  DWORD DVar1;
  int iVar2;
  
  if (DAT_006cdfec != 0) {
    if ((-1 < DAT_006cd044) && (DAT_006cd044 < 1000)) {
      DVar1 = GetTickCount();
      (&DAT_006cc09c)[DAT_006cd044] = DVar1 - DAT_006cd03c;
      DAT_006cd044 = DAT_006cd044 + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__g_nr_times_called_incorr_0059cec8);
  }
  if ((DAT_006cd044 < 0) || (999 < DAT_006cd044)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__g_nr_times_called_incorr_0059cf18);
  }
  _DAT_006cdff0 = (&DAT_006cd048)[DAT_006cd044];
  if (_DAT_006cdff0 < 0) {
    _DAT_006cdff0 = 0;
  }
  else if (100 < _DAT_006cdff0) {
    _DAT_006cdff0 = 100;
  }
  FUN_004416f0();
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x28))(DAT_0073b4b4);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____D3DError_Begin_Scene_____0059cf68);
  }
  FUN_004882f0(&DAT_007126e8);
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x2c))(DAT_0073b4b4);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____D3DError_End_Scene____s_0059cfb4);
  }
  winmain();
  DAT_006cd044 = DAT_006cd044 + 1;
  return;
}



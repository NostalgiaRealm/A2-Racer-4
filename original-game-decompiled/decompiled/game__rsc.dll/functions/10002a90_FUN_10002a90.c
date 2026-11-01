
/* ==== FUN_10002a90 @ 10002a90 ==== 
 * signature: undefined4 __stdcall FUN_10002a90(undefined4 param_1, int param_2)
 * body: 10002a90-10002bc8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002a90(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    DAT_100314ac = GetVersion();
    iVar1 = FUN_10008200(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_100314b8 = DAT_100314ac >> 8 & 0xff;
    DAT_100314b4 = DAT_100314ac & 0xff;
    _DAT_100314b0 = DAT_100314b4 * 0x100 + _DAT_100314b8;
    DAT_100314ac = DAT_100314ac >> 0x10;
    iVar1 = FUN_100076d0();
    if (iVar1 == 0) {
      FUN_10008250();
      return 0;
    }
    DAT_10032f64 = GetCommandLineA();
    DAT_1003141c = FUN_10007fe0();
    FUN_10006f40();
    FUN_10007ad0();
    FUN_10007980();
    FUN_100074d0();
    DAT_10031418 = DAT_10031418 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_10031418 < 1) {
      return 0;
    }
    DAT_10031418 = DAT_10031418 + -1;
    if (DAT_100314e4 == 0) {
      FUN_10007550();
    }
    uVar2 = FUN_10004c20(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_10005530();
    }
    __ioterm();
    FUN_10007760();
    FUN_10008250();
  }
  else if (param_2 == 3) {
    FUN_10007850((LPVOID)0x0);
  }
  return 1;
}



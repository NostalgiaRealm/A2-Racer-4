
/* ==== FUN_10014590 @ 10014590 ==== 
 * signature: uint __cdecl FUN_10014590(uint param_1)
 * body: 10014590-10014622
 */

uint __cdecl FUN_10014590(uint param_1)

{
  bool bVar1;
  
  if (DAT_1003163c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_100317c4);
    bVar1 = DAT_100317b4 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_100317c4);
      FUN_100073f0(0x13);
    }
    param_1 = FUN_10014630(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_100317c4);
    }
    else {
      FUN_10007490(0x13);
    }
  }
  return param_1;
}



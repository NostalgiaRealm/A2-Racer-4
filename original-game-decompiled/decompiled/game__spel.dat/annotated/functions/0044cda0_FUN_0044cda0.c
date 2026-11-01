
/* ==== FUN_0044cda0 @ 0044cda0 ==== 
 * signature: undefined __cdecl FUN_0044cda0(undefined4 param_1)
 * body: 0044cda0-0044ce7f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0044cda0(undefined4 param_1)

{
  DAT_006fb8a0 = param_1;
  switch(param_1) {
  case 0:
    _DAT_006fb8c4 = 0;
    DAT_006fb8c0 = 1;
    DAT_006fba9c = 1;
    return;
  case 1:
    _DAT_006fb8c4 = 0;
    FUN_0043c120(2,thunk_FUN_0043c5d0,FUN_0043c650,FUN_0043c660);
    return;
  case 2:
    _DAT_006fb8c4 = 0;
    return;
  case 3:
    _DAT_006fb8c4 = 1;
    FUN_0043c120(4,FUN_0043ab70,FUN_0043ac80,FUN_0043ad40);
    return;
  case 4:
    DAT_006fb8c0 = 0;
    DAT_006fba9c = 0;
    DAT_006fb89c = 0;
    return;
  case 6:
    _DAT_006fb8c4 = 1;
    FUN_0043c120(0xc,FUN_0043bc20,FUN_0043bd60,FUN_0043be50);
    return;
  case 8:
    _DAT_006fb8c4 = 1;
    FUN_0043c120(0xb,FUN_0043a910,FUN_0043a980,FUN_0043a9f0);
  }
  return;
}



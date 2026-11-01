
/* ==== FUN_004c8690 @ 004c8690 ==== 
 * signature: undefined __cdecl FUN_004c8690(undefined4 param_1, byte param_2, undefined4 param_3, undefined4 param_4, uint param_5, uint param_6, uint param_7, uint param_8)
 * body: 004c8690-004c87ea
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004c8690(undefined4 param_1,byte param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  
  if ((param_2 & 0x20) == 0) {
    _DAT_00740998 = 0;
    DAT_007409bc = 0;
    for (uVar1 = param_5; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
      DAT_007409bc = DAT_007409bc + 1;
    }
    DAT_0074098c = 0;
    for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
      DAT_0074098c = DAT_0074098c + 1;
    }
    DAT_0074099c = param_5;
    _DAT_007409ac = 8 - DAT_0074098c;
    DAT_007409c0 = 0;
    for (uVar1 = param_6; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
      DAT_007409c0 = DAT_007409c0 + 1;
    }
    DAT_00740990 = 0;
    for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
      DAT_00740990 = DAT_00740990 + 1;
    }
    DAT_007409a0 = param_6;
    _DAT_007409b0 = 8 - DAT_00740990;
    DAT_007409c4 = 0;
    for (uVar1 = param_7; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
      DAT_007409c4 = DAT_007409c4 + 1;
    }
    DAT_00740994 = 0;
    for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
      DAT_00740994 = DAT_00740994 + 1;
    }
    _DAT_007409b4 = 8 - DAT_00740994;
    DAT_007409a4 = param_7;
    if ((param_2 & 1) != 0) {
      DAT_007409c8 = 0;
      for (uVar1 = param_8; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
        DAT_007409c8 = DAT_007409c8 + 1;
      }
      for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
        _DAT_00740998 = _DAT_00740998 + 1;
      }
      DAT_007409b8 = 8 - _DAT_00740998;
      _DAT_007409a8 = param_8;
      FUN_004c3fa0((byte *)s_RGBA___d__d__d__d_005b56f8);
      return;
    }
    DAT_007409c8 = 0x20;
    _DAT_00740998 = 0;
    DAT_007409b8 = 0;
    _DAT_007409a8 = 0;
    FUN_004c3fa0((byte *)s_RGB___d__d__d_005b56e8);
  }
  return;
}



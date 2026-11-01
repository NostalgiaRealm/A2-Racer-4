
/* ==== FUN_0043fdd0 @ 0043fdd0 ==== 
 * signature: undefined __cdecl FUN_0043fdd0(undefined4 param_1)
 * body: 0043fdd0-0043fe12
 */

void __cdecl FUN_0043fdd0(undefined4 param_1)

{
  longlong lVar1;
  
  FUN_004a6800(0x7128b0);
  lVar1 = __ftol();
  DAT_006cbee8 = (int)lVar1;
  if ((int)lVar1 <= DAT_006cbeec) {
    DAT_006cbeec = 0;
    DAT_006cbef0 = param_1;
    return;
  }
  DAT_006cbef0 = param_1;
  return;
}



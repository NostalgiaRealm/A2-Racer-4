
/* ==== FUN_00569269 @ 00569269 ==== 
 * signature: DWORD __cdecl FUN_00569269(uint param_1)
 * body: 00569269-005692e0
 */

DWORD __cdecl FUN_00569269(uint param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  if ((param_1 < DAT_007501a0) &&
     ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    DVar1 = FUN_00562b76(param_1,0,1);
    DVar2 = 0xffffffff;
    if (DVar1 != 0xffffffff) {
      DVar2 = FUN_00562b76(param_1,0,2);
      if (DVar1 != DVar2) {
        FUN_00562b76(param_1,DVar1,0);
      }
    }
    return DVar2;
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}



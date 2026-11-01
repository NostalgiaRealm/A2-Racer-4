
/* ==== FUN_005164c0 @ 005164c0 ==== 
 * signature: int __cdecl FUN_005164c0(uint param_1)
 * body: 005164c0-0051652b
 */

int __cdecl FUN_005164c0(uint param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -3;
  }
  if (param_1 == DAT_0074c5f0) {
    return -2;
  }
  if ((DAT_0074c048 <= param_1) && (param_1 < DAT_0074c048 + DAT_0074c03c * DAT_0074c044 * 8)) {
    return (int)(CONCAT44((int)(param_1 - DAT_0074c048) >> 0x1f,(int)(param_1 - DAT_0074c048) >> 3)
                / (longlong)DAT_0074c03c);
  }
  iVar1 = FUN_005146b0(DAT_0074c6ec,param_1);
  if (iVar1 != -1) {
    return iVar1 + DAT_0074c044;
  }
  return -1;
}



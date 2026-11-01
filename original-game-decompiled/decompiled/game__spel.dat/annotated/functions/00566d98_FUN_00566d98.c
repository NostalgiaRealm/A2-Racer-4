
/* ==== FUN_00566d98 @ 00566d98 ==== 
 * signature: undefined4 __stdcall FUN_00566d98(undefined4 param_1, uint param_2)
 * body: 00566d98-00566dbe
 */

undefined4 FUN_00566d98(undefined4 param_1,uint param_2)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    FUN_00566d26();
    return in_EAX;
  }
  FUN_00566d26();
  return in_EAX;
}



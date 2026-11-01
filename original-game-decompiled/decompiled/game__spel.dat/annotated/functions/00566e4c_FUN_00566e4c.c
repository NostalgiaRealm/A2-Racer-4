
/* ==== FUN_00566e4c @ 00566e4c ==== 
 * signature: undefined4 __stdcall FUN_00566e4c(uint param_1)
 * body: 00566e4c-00566e72
 */

undefined4 FUN_00566e4c(uint param_1)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    FUN_00566d39();
    return in_EAX;
  }
  FUN_00566d39();
  return in_EAX;
}



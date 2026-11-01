
/* ==== FUN_00562e15 @ 00562e15 ==== 
 * signature: byte * __cdecl FUN_00562e15(byte * param_1, byte * param_2)
 * body: 00562e15-00562e5c
 */

byte * __cdecl FUN_00562e15(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  if (param_2 <= param_1) {
    return (byte *)0x0;
  }
  if (DAT_007501bc != 0) {
    pbVar1 = param_2 + -1;
    if ((*(byte *)((int)&DAT_007502c0 + param_2[-1] + 1) & 4) != 0) {
      return param_2 + -2;
    }
    do {
      pbVar1 = pbVar1 + -1;
      if (pbVar1 < param_1) break;
    } while ((*(byte *)((int)&DAT_007502c0 + *pbVar1 + 1) & 4) != 0);
    param_2 = param_2 + -((int)param_2 - (int)pbVar1 & 1U);
  }
  return param_2 + -1;
}



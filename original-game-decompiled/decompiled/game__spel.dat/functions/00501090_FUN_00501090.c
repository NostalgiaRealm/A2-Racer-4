
/* ==== FUN_00501090 @ 00501090 ==== 
 * signature: uint __cdecl FUN_00501090(byte * param_1, byte * param_2)
 * body: 00501090-005010e2
 */

uint __cdecl FUN_00501090(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 == (byte *)0x0) {
    return (uint)(param_2 != (byte *)0x0);
  }
  if (param_2 == (byte *)0x0) {
    return 0xffffffff;
  }
  while( true ) {
    bVar1 = *param_1;
    bVar2 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar2 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}




/* ==== FUN_10015240 @ 10015240 ==== 
 * signature: byte * __cdecl FUN_10015240(byte * param_1, uint param_2)
 * body: 10015240-1001532c
 */

byte * __cdecl FUN_10015240(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (DAT_1003184c == 0) {
    param_1 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_100073f0(0x19);
    while( true ) {
      uVar1 = (ushort)*param_1;
      if (uVar1 == 0) break;
      if (((&DAT_10031961)[uVar1] & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar1) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (*pbVar2 == 0) {
          FUN_10007490(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(*param_1,*pbVar2)) {
          FUN_10007490(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2;
      param_1 = param_1 + 1;
    }
    FUN_10007490(0x19);
    if (param_2 != uVar1) {
      param_1 = (byte *)0x0;
    }
  }
  return param_1;
}



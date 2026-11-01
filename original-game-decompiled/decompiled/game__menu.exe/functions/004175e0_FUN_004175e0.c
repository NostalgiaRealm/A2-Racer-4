
/* ==== FUN_004175e0 @ 004175e0 ==== 
 * signature: uint __register FUN_004175e0(byte * param_1, int param_2)
 * body: 004175e0-004175f0
 */

uint FUN_004175e0(byte *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    sVar1 = (short)uVar2 << 5;
    uVar2 = (uint)CONCAT11((char)((ushort)sVar1 >> 8),
                           ((byte)sVar1 | (byte)(uVar2 >> 8) >> 3) ^ *param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uVar2;
}



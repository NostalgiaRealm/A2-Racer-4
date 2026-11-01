
/* ==== FUN_004321a0 @ 004321a0 ==== 
 * signature: short __register FUN_004321a0(short param_1, byte param_2)
 * body: 004321a0-004321d7
 */

short FUN_004321a0(short param_1,byte param_2)

{
  short sVar1;
  char cStack_5;
  
  sVar1 = 0;
  cStack_5 = (char)((ushort)param_1 >> 8);
  if (cStack_5 == '\0') {
    sVar1 = param_1;
    if ((param_2 & 1) != 0) {
      sVar1 = param_1 + 0x2000;
    }
    if ((param_2 & 4) != 0) {
      sVar1 = sVar1 + 0x4000;
    }
    if ((param_2 & 2) != 0) {
      sVar1 = sVar1 + -0x8000;
    }
  }
  return sVar1;
}



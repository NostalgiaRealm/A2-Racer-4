
/* ==== FUN_0043c880 @ 0043c880 ==== 
 * signature: short __register FUN_0043c880(short param_1, byte param_2)
 * body: 0043c880-0043c8b7
 */

short FUN_0043c880(short param_1,byte param_2)

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



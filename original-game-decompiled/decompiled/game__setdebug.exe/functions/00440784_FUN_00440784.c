
/* ==== FUN_00440784 @ 00440784 ==== 
 * signature: undefined FUN_00440784(void)
 * body: 00440784-004407a3
 */

void FUN_00440784(int param_1)

{
  *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + -1;
  if ((*(short *)(param_1 + 0x80) == 0) && ((*(byte *)(param_1 + 0x82) & 0x10) != 0)) {
    FUN_004407a4();
  }
  return;
}



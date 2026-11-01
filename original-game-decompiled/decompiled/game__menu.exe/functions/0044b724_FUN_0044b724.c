
/* ==== FUN_0044b724 @ 0044b724 ==== 
 * signature: undefined FUN_0044b724(void)
 * body: 0044b724-0044b743
 */

void FUN_0044b724(int param_1)

{
  *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + -1;
  if ((*(short *)(param_1 + 0x80) == 0) && ((*(byte *)(param_1 + 0x82) & 0x10) != 0)) {
    FUN_0044b744();
  }
  return;
}



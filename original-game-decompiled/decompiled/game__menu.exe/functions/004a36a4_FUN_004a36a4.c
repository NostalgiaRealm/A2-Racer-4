
/* ==== FUN_004a36a4 @ 004a36a4 ==== 
 * signature: undefined FUN_004a36a4(void)
 * body: 004a36a4-004a36b9
 */

void FUN_004a36a4(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x2d5)) {
    *(char *)(param_1 + 0x2d5) = param_2;
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return;
}



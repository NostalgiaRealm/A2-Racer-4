
/* ==== FUN_0048dcb4 @ 0048dcb4 ==== 
 * signature: undefined FUN_0048dcb4(void)
 * body: 0048dcb4-0048dccf
 */

void FUN_0048dcb4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  if (100 < param_2) {
    *(undefined4 *)(param_1 + 0x10) = 100;
  }
  return;
}



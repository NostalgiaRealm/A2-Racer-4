
/* ==== FUN_00475d2c @ 00475d2c ==== 
 * signature: undefined FUN_00475d2c(void)
 * body: 00475d2c-00475d61
 */

void FUN_00475d2c(int param_1)

{
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  iStack_c = *(int *)(param_1 + 0x138);
  if ((iStack_c != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    uStack_10 = 0xb018;
    uStack_4 = 0;
    iStack_8 = param_1;
    FUN_004317dc(*(int *)(param_1 + 0x24),(int)&uStack_10);
  }
  return;
}



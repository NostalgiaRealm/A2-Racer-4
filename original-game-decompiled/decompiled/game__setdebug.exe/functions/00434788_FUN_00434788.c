
/* ==== FUN_00434788 @ 00434788 ==== 
 * signature: undefined FUN_00434788(void)
 * body: 00434788-0043478f
 */

void FUN_00434788(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x5000003c)) {
    *(char *)(param_1 + 0x5000003c) = param_2;
    (**(code **)(*(int *)(param_1 + 0x50000000) + 0x38))((int *)(param_1 + 0x50000000),1);
  }
  return;
}



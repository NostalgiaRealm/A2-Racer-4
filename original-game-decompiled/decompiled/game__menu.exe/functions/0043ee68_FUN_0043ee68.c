
/* ==== FUN_0043ee68 @ 0043ee68 ==== 
 * signature: undefined FUN_0043ee68(void)
 * body: 0043ee68-0043ee6f
 */

void FUN_0043ee68(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x5000003c)) {
    *(char *)(param_1 + 0x5000003c) = param_2;
    (**(code **)(*(int *)(param_1 + 0x50000000) + 0x38))((int *)(param_1 + 0x50000000),1);
  }
  return;
}



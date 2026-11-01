
/* ==== FUN_00438248 @ 00438248 ==== 
 * signature: undefined FUN_00438248(void)
 * body: 00438248-00438262
 */

void FUN_00438248(int param_1,int param_2)

{
  if (((param_2 != 0) && (param_2 != *(int *)(param_1 + 100))) &&
     (*(char *)(*(int *)(param_2 + 0x14) + 0x10) == *(char *)(param_1 + 0x48))) {
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + *(int *)(param_1 + 0x4c);
  }
  return;
}



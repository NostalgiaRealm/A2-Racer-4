
/* ==== FUN_00454504 @ 00454504 ==== 
 * signature: undefined FUN_00454504(void)
 * body: 00454504-00454532
 */

void FUN_00454504(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < iVar1) {
    do {
      *param_3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}



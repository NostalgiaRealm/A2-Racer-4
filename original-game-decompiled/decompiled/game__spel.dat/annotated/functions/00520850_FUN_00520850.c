
/* ==== FUN_00520850 @ 00520850 ==== 
 * signature: undefined FUN_00520850(void)
 * body: 00520850-00520876
 */

int FUN_00520850(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; (param_1 != 0 && (*(int *)(param_1 + 0x24) == 0));
      param_1 = *(int *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



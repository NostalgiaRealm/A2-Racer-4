
/* ==== FUN_004303ac @ 004303ac ==== 
 * signature: undefined FUN_004303ac(void)
 * body: 004303ac-004303cb
 */

undefined4 FUN_004303ac(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x20))();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



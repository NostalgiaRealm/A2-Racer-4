
/* ==== FUN_0043f080 @ 0043f080 ==== 
 * signature: undefined FUN_0043f080(void)
 * body: 0043f080-0043f097
 */

int FUN_0043f080(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = FUN_0043f334(*(int *)(param_1 + 0x58),param_1);
  }
  return iVar1;
}



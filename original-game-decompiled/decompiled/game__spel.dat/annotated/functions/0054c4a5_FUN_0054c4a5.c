
/* ==== FUN_0054c4a5 @ 0054c4a5 ==== 
 * signature: int * __thiscall FUN_0054c4a5(void * this, byte param_1)
 * body: 0054c4a5-0054c4c3
 */

int * __thiscall FUN_0054c4a5(void *this,byte param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + -4);
  FUN_0054b956(piVar1);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(piVar1);
  }
  return piVar1;
}



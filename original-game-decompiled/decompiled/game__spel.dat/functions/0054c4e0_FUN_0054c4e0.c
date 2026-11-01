
/* ==== FUN_0054c4e0 @ 0054c4e0 ==== 
 * signature: int * __thiscall FUN_0054c4e0(void * this, byte param_1)
 * body: 0054c4e0-0054c4fe
 */

int * __thiscall FUN_0054c4e0(void *this,byte param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + -8);
  FUN_0054b912(piVar1);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(piVar1);
  }
  return piVar1;
}



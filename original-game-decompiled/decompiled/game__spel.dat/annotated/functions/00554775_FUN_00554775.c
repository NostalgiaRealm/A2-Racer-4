
/* ==== FUN_00554775 @ 00554775 ==== 
 * signature: undefined4 __thiscall FUN_00554775(void * this, int * param_1)
 * body: 00554775-005547b3
 */

undefined4 __thiscall FUN_00554775(void *this,int *param_1)

{
  if (*(char *)((int)this + 4) == '\0') {
    Peek(this);
  }
  if ((char)param_1[1] == '\0') {
    Peek(param_1);
  }
  if (*(int *)this == 0) {
    if (*param_1 != 0) {
      return 0;
    }
  }
  else if (*param_1 == 0) {
    return 0;
  }
  return 1;
}



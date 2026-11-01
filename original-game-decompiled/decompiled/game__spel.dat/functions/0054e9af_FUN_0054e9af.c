
/* ==== FUN_0054e9af @ 0054e9af ==== 
 * signature: undefined4 __thiscall FUN_0054e9af(void * this, int * param_1)
 * body: 0054e9af-0054e9ed
 */

undefined4 __thiscall FUN_0054e9af(void *this,int *param_1)

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



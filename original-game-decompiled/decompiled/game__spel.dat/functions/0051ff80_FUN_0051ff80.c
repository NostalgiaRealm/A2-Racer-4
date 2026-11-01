
/* ==== FUN_0051ff80 @ 0051ff80 ==== 
 * signature: undefined4 __thiscall FUN_0051ff80(void * this, int param_1, int param_2)
 * body: 0051ff80-0051ffd2
 */

undefined4 __thiscall FUN_0051ff80(void *this,int param_1,int param_2)

{
  if (param_2 == 0) {
    if ((*(int *)((int)this + 8) == param_1) || (*(int *)((int)this + 0xc) == param_1)) {
      return 1;
    }
  }
  else {
    if ((*(int *)((int)this + 8) == param_1) && (*(int *)((int)this + 0xc) == param_2)) {
      return 1;
    }
    if ((*(int *)((int)this + 0xc) == param_1) && (*(int *)((int)this + 8) == param_2)) {
      return 1;
    }
  }
  return 0;
}



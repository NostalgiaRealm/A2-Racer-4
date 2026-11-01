
/* ==== FUN_005689a0 @ 005689a0 ==== 
 * signature: undefined4 __thiscall FUN_005689a0(void * this, int param_1)
 * body: 005689a0-005689c6
 */

undefined4 __thiscall FUN_005689a0(void *this,int param_1)

{
  if (((param_1 < 0x800) && (*(int *)((int)this + param_1 * 4 + 8) != 0)) &&
     (*(int *)((int)this + 4) != 0)) {
    return 1;
  }
  return 0;
}



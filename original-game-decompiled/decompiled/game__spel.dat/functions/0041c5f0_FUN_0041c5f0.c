
/* ==== FUN_0041c5f0 @ 0041c5f0 ==== 
 * signature: undefined4 __thiscall FUN_0041c5f0(void * this, int param_1)
 * body: 0041c5f0-0041c600
 */

undefined4 __thiscall FUN_0041c5f0(void *this,int param_1)

{
  return CONCAT31((int3)((uint)*(int *)((int)this + 0xc) >> 8),
                  *(int *)(*(int *)((int)this + 0xc) + param_1 * 4) == -1);
}



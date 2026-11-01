
/* ==== FUN_004f2450 @ 004f2450 ==== 
 * signature: undefined __thiscall FUN_004f2450(void * this, undefined4 * param_1)
 * body: 004f2450-004f2478
 */

void __thiscall FUN_004f2450(void *this,undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = *(undefined4 *)((int)this + 0x88);
  if (*(int *)((int)this + 0x88) != 0) {
    *(undefined4 **)(*(int *)((int)this + 0x88) + 4) = param_1;
  }
  *(undefined4 **)((int)this + 0x88) = param_1;
  return;
}



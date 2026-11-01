
/* ==== FUN_004d0d20 @ 004d0d20 ==== 
 * signature: undefined __thiscall FUN_004d0d20(void * this, undefined4 param_1, int param_2, int param_3)
 * body: 004d0d20-004d0d3f
 */

void __thiscall FUN_004d0d20(void *this,undefined4 param_1,int param_2,int param_3)

{
  **(undefined4 **)((int)this + 0xc) = param_1;
  **(int **)((int)this + 0x1c) = param_2;
  **(int **)((int)this + 0x2c) = param_3 - param_2;
  return;
}



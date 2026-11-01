
/* ==== FUN_004d0d40 @ 004d0d40 ==== 
 * signature: undefined __thiscall FUN_004d0d40(void * this, int param_1, int param_2)
 * body: 004d0d40-004d0d5b
 */

void __thiscall FUN_004d0d40(void *this,int param_1,int param_2)

{
  **(int **)((int)this + 0x10) = param_1;
  **(int **)((int)this + 0x20) = param_1;
  **(int **)((int)this + 0x30) = param_2 - param_1;
  return;
}



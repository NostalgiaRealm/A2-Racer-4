
/* ==== FUN_005397a0 @ 005397a0 ==== 
 * signature: undefined4 * __thiscall FUN_005397a0(void * this, int param_1, undefined4 param_2)
 * body: 005397a0-005397d1
 */

undefined4 * __thiscall FUN_005397a0(void *this,int param_1,undefined4 param_2)

{
  FUN_00539700(this,param_2);
  *(undefined ***)this = &PTR_FUN_00578c54;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  return this;
}



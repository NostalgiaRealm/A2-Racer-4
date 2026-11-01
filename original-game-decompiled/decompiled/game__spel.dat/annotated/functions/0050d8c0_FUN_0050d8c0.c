
/* ==== FUN_0050d8c0 @ 0050d8c0 ==== 
 * signature: undefined4 * __thiscall FUN_0050d8c0(void * this, undefined4 param_1, int * param_2)
 * body: 0050d8c0-0050d8f6
 */

undefined4 * __thiscall FUN_0050d8c0(void *this,undefined4 param_1,int *param_2)

{
  FUN_0050d4f0(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_0057898c;
  *(float *)((int)this + 0x98) = *(float *)((int)this + 0x78) * (float)param_2[0xe];
  *(int *)((int)this + 0x9c) = param_2[0xf];
  return this;
}



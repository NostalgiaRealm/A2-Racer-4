
/* ==== FUN_0050d280 @ 0050d280 ==== 
 * signature: undefined4 * __thiscall FUN_0050d280(void * this, char * param_1, undefined4 param_2)
 * body: 0050d280-0050d2b0
 */

undefined4 * __thiscall FUN_0050d280(void *this,char *param_1,undefined4 param_2)

{
  FUN_0050d040(this,param_1);
  *(undefined ***)((int)this + 0x20) = &PTR_FUN_00578964;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined ***)this = &PTR_FUN_00578958;
  *(undefined ***)((int)this + 0x20) = &PTR_FUN_00578954;
  return this;
}



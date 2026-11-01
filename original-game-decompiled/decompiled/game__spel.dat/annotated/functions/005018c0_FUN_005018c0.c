
/* ==== FUN_005018c0 @ 005018c0 ==== 
 * signature: undefined4 * __thiscall FUN_005018c0(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 005018c0-005018ea
 */

undefined4 * __thiscall FUN_005018c0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  puVar1 = FUN_004f5aa0(4,param_1);
  *(undefined4 **)((int)this + 0xc) = puVar1;
  return this;
}



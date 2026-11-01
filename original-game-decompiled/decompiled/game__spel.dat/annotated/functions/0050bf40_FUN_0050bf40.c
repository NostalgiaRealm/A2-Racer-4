
/* ==== FUN_0050bf40 @ 0050bf40 ==== 
 * signature: undefined __thiscall FUN_0050bf40(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0050bf40-0050bf64
 */

void __thiscall FUN_0050bf40(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0050dfd0(*(void **)((int)this + 8),param_1,
                       (float)((float10)(double)CONCAT44(param_3,param_2) -
                              (float10)*(double *)((int)this + 0x18)));
  *(uint *)(param_1 + 4) = uVar1;
  return;
}



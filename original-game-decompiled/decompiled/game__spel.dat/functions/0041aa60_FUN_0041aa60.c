
/* ==== FUN_0041aa60 @ 0041aa60 ==== 
 * signature: undefined __thiscall FUN_0041aa60(void * this, undefined4 param_1)
 * body: 0041aa60-0041aa7b
 */

void __thiscall FUN_0041aa60(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041ae70(param_1);
  if (iVar1 != -1) {
    *(int *)((int)this + 0x1d0) = iVar1;
  }
  return;
}




/* ==== FUN_00551357 @ 00551357 ==== 
 * signature: undefined1 * __thiscall FUN_00551357(void * this, undefined4 param_1)
 * body: 00551357-00551378
 */

undefined1 * __thiscall FUN_00551357(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if ((*(void **)((int)this + 4) != (void *)0x0) &&
     (uVar1 = FUN_00551379(*(void **)((int)this + 4),param_1), (short)uVar1 != -1)) {
    return this;
  }
  *(undefined1 *)this = 1;
  return this;
}



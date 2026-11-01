
/* ==== FUN_004de0b0 @ 004de0b0 ==== 
 * signature: undefined __thiscall FUN_004de0b0(void * this, undefined4 param_1)
 * body: 004de0b0-004de0d5
 */

void __thiscall FUN_004de0b0(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)((int)this + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x18))(1);
    *(undefined4 *)((int)this + 0x18) = unaff_retaddr;
    return;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  return;
}




/* ==== FUN_004ddfd0 @ 004ddfd0 ==== 
 * signature: undefined __thiscall FUN_004ddfd0(void * this, undefined4 param_1)
 * body: 004ddfd0-004ddff5
 */

void __thiscall FUN_004ddfd0(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x10))(1);
    *(undefined4 *)((int)this + 0x10) = unaff_retaddr;
    return;
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  return;
}



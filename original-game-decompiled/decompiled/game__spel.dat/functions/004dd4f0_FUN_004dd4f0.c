
/* ==== FUN_004dd4f0 @ 004dd4f0 ==== 
 * signature: undefined __thiscall FUN_004dd4f0(void * this, undefined4 param_1)
 * body: 004dd4f0-004dd515
 */

void __thiscall FUN_004dd4f0(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 8))(1);
    *(undefined4 *)((int)this + 8) = unaff_retaddr;
    return;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return;
}




/* ==== FUN_0047bda0 @ 0047bda0 ==== 
 * signature: undefined __thiscall FUN_0047bda0(void * this, undefined4 param_1)
 * body: 0047bda0-0047bdbe
 */

void __thiscall FUN_0047bda0(void *this,undefined4 param_1)

{
  if (*(code **)((int)this + 0x30) != (code *)0x0) {
    (**(code **)((int)this + 0x30))(this);
  }
  (*(code *)**(undefined4 **)this)(param_1);
  return;
}




/* ==== FUN_004e3d00 @ 004e3d00 ==== 
 * signature: undefined __thiscall FUN_004e3d00(void * this, undefined4 param_1)
 * body: 004e3d00-004e3d25
 */

void __thiscall FUN_004e3d00(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)((int)this + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x14))(1);
    *(undefined4 *)((int)this + 0x14) = unaff_retaddr;
    return;
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  return;
}



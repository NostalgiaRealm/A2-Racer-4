
/* ==== FUN_004dd520 @ 004dd520 ==== 
 * signature: undefined __thiscall FUN_004dd520(void * this, undefined4 param_1)
 * body: 004dd520-004dd545
 */

void __thiscall FUN_004dd520(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0xc))(1);
    *(undefined4 *)((int)this + 0xc) = unaff_retaddr;
    return;
  }
  *(undefined4 *)((int)this + 0xc) = param_1;
  return;
}



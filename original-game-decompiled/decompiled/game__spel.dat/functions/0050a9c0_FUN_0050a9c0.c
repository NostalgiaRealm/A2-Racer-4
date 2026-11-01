
/* ==== FUN_0050a9c0 @ 0050a9c0 ==== 
 * signature: undefined4 * __thiscall FUN_0050a9c0(void * this, undefined4 param_1)
 * body: 0050a9c0-0050aa0c
 */

undefined4 * __thiscall FUN_0050a9c0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  *(undefined ***)this = &PTR_FUN_00578884;
  *(undefined2 *)((int)this + 0x28) = 0x10;
  *(undefined2 *)((int)this + 0x2a) = 0;
  uVar1 = FUN_004f5a90(0x40);
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined ***)this = &PTR_FUN_00578870;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xbf800000;
  return this;
}



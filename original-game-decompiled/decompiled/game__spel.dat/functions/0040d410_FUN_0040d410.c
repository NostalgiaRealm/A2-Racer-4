
/* ==== FUN_0040d410 @ 0040d410 ==== 
 * signature: undefined __thiscall FUN_0040d410(void * this, undefined4 param_1)
 * body: 0040d410-0040d467
 */

void __thiscall FUN_0040d410(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x6c) = 0xc1200000;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0x3f800000;
  puVar2 = (undefined4 *)((int)this + 0x24);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 0x10) = 1;
  return;
}



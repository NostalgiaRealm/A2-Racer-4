
/* ==== FUN_004f5b20 @ 004f5b20 ==== 
 * signature: undefined __thiscall FUN_004f5b20(void * this, undefined4 * param_1, short param_2)
 * body: 004f5b20-004f5b71
 */

void __thiscall FUN_004f5b20(void *this,undefined4 *param_1,short param_2)

{
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *(short *)((int)this + 0x12) = param_2 + -0x20;
    *param_1 = *(undefined4 *)((int)this + 4);
    *(undefined4 **)((int)this + 4) = param_1;
    uVar1 = (int)param_1 + 0x23U & 0xffffffe0;
    *(uint *)((int)this + 8) = uVar1;
    *(uint *)((int)this + 0xc) = *(ushort *)((int)this + 0x12) + uVar1;
    *(undefined4 *)this = *(undefined4 *)((int)this + 4);
    return;
  }
  *(undefined2 *)((int)this + 0x12) = 0;
  FUN_004f5be0(this,0);
  *(undefined4 *)this = *(undefined4 *)((int)this + 4);
  return;
}



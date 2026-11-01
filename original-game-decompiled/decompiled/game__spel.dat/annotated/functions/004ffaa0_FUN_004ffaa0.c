
/* ==== FUN_004ffaa0 @ 004ffaa0 ==== 
 * signature: undefined __thiscall FUN_004ffaa0(void * this, undefined4 param_1)
 * body: 004ffaa0-004ffaf3
 */

void __thiscall FUN_004ffaa0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = operator_new(0x14);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)((int)puVar1 + 6) = 0;
    puVar1[2] = puVar1 + 3;
    *(undefined2 *)(puVar1 + 1) = 2;
    puVar2 = puVar1;
  }
  *puVar2 = param_1;
  if (*(ushort *)((int)this + 0x1c) <= *(ushort *)((int)this + 0x1e)) {
    FUN_004f6060((ushort *)((int)this + 0x1c));
  }
  *(undefined4 **)(*(int *)((int)this + 0x20) + (uint)*(ushort *)((int)this + 0x1e) * 4) = puVar2;
  *(short *)((int)this + 0x1e) = *(short *)((int)this + 0x1e) + 1;
  return;
}



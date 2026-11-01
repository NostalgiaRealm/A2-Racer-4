
/* ==== FUN_00508850 @ 00508850 ==== 
 * signature: undefined __thiscall FUN_00508850(void * this, undefined4 param_1, undefined4 param_2)
 * body: 00508850-005088c9
 */

void __thiscall FUN_00508850(void *this,undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xf0);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar2);
  if (*(int *)((int)this + 0x68) == 0) {
    pvVar1 = operator_new(0x30);
    *(void **)((int)this + 0x68) = pvVar1;
    *(undefined4 *)((int)pvVar1 + 0x2c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x68) + 0x28) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x68) + 0x24) = 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x68) + 8) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x68) + 4) = param_2;
  **(undefined4 **)((int)this + 0x68) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x68) + 0x20) = param_1;
  *(undefined4 *)(*(int *)((int)this + 0x68) + 0x1c) = param_1;
  *(undefined4 *)(*(int *)((int)this + 0x68) + 0x18) = param_1;
  return;
}



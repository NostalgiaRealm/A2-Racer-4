
/* ==== FUN_00508b10 @ 00508b10 ==== 
 * signature: undefined __thiscall FUN_00508b10(void * this, undefined4 param_1, undefined4 param_2)
 * body: 00508b10-00508b8a
 */

void __thiscall FUN_00508b10(void *this,undefined4 param_1,undefined4 param_2)

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
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x68) + 0x1c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x68) + 0x18) = 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x68) + 0x14) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x68) + 0x10) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x68) + 0xc) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x68) + 0x2c) = param_1;
  *(undefined4 *)(*(int *)((int)this + 0x68) + 0x28) = param_1;
  *(undefined4 *)(*(int *)((int)this + 0x68) + 0x24) = param_1;
  return;
}



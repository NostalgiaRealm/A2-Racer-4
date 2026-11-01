
/* ==== FUN_00504af0 @ 00504af0 ==== 
 * signature: undefined __thiscall FUN_00504af0(void * this, int param_1, void * param_2)
 * body: 00504af0-00504b7b
 */

void __thiscall FUN_00504af0(void *this,int param_1,void *param_2)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(ushort *)((int)this + 8) <= *(ushort *)((int)this + 10)) {
    FUN_004f6060((ushort *)((int)this + 8));
  }
  *(int *)(*(int *)((int)this + 0xc) + (uint)*(ushort *)((int)this + 10) * 4) = param_1;
  *(short *)((int)this + 10) = *(short *)((int)this + 10) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x22c) + 0x30) = 1;
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x20) + 0x36);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    this_00 = *(void **)(*(int *)(*(int *)((int)this + 0x20) + 0x38) + uVar3 * 4);
    if ((((*(int *)((int)this_00 + 0x2c) == param_1) || (*(int *)((int)this_00 + 0x30) == param_1))
        && (this_00 != param_2)) &&
       ((iVar1 = FUN_00504b80(this,(int)this_00), iVar1 == 0 &&
        (uVar2 = FUN_0053f010(this_00,*(void **)((int)this + 0x20)), 0 < (int)uVar2)))) {
      FUN_00504aa0(this,this_00);
    }
  }
  return;
}



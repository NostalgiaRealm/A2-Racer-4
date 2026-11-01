
/* ==== FUN_0050e2c0 @ 0050e2c0 ==== 
 * signature: undefined __thiscall FUN_0050e2c0(void * this, int param_1)
 * body: 0050e2c0-0050e381
 */

void __thiscall FUN_0050e2c0(void *this,int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  
  iVar3 = *(int *)((int)this + 4);
  puVar5 = (ushort *)(param_1 * 0x10 + iVar3);
  uVar1 = puVar5[3];
  uVar2 = puVar5[2];
  uVar4 = (uint)uVar2;
  if (uVar1 == 0xffff) {
    *(ushort *)((int)this + 0xe) = uVar2;
    if (uVar4 == 0xffff) {
      *(undefined4 *)((int)this + 8) = 0x501502f9;
    }
    else {
      *(undefined2 *)(uVar4 * 0x10 + 6 + iVar3) = 0xffff;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)((int)this + 4) + 8 + uVar4 * 0x10);
    }
  }
  else {
    *(ushort *)(iVar3 + 4 + (uint)uVar1 * 0x10) = uVar2;
    if (uVar4 != 0xffff) {
      *(ushort *)(uVar4 * 0x10 + 6 + *(int *)((int)this + 4)) = uVar1;
    }
  }
  uVar1 = *puVar5;
  uVar4 = (uint)uVar1;
  if (uVar4 != 0xfffe) {
    uVar2 = puVar5[1];
    if (uVar4 != 0xffff) {
      *(ushort *)(uVar4 * 0x10 + 2 + *(int *)((int)this + 4)) = uVar2;
    }
    if (uVar2 == 0xffff) {
      *(ushort *)((int)this + 0xc) = uVar1;
    }
    else {
      *(ushort *)((uint)uVar2 * 0x10 + *(int *)((int)this + 4)) = uVar1;
    }
  }
  *(short *)((int)this + 0x10) = *(short *)((int)this + 0x10) + -1;
  puVar5[2] = *(ushort *)((int)this + 2);
  *(short *)((int)this + 2) = (short)param_1;
  return;
}



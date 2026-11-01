
/* ==== FUN_0050f220 @ 0050f220 ==== 
 * signature: undefined4 * __thiscall FUN_0050f220(void * this, int param_1)
 * body: 0050f220-0050f26c
 */

undefined4 * __thiscall FUN_0050f220(void *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_00543d90(this);
  puVar4 = this;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(int *)((int)this + 0x20) = param_1;
  uVar1 = *(ushort *)(param_1 + 0x9e);
  *(undefined4 *)((int)this + 0x28) = 6;
  *(uint *)((int)this + 0x24) = (uint)uVar1;
  iVar3 = 0x28;
  do {
    iVar2 = iVar3 + 4;
    *(undefined4 *)(iVar3 + *(int *)((int)this + 0x20)) = 0;
    iVar3 = iVar2;
  } while (iVar2 < 0x40);
  return this;
}



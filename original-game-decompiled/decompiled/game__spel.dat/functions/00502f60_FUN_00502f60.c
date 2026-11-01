
/* ==== FUN_00502f60 @ 00502f60 ==== 
 * signature: undefined __thiscall FUN_00502f60(void * this, int param_1)
 * body: 00502f60-00502fec
 */

void __thiscall FUN_00502f60(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  iVar3 = *(int *)((int)this + param_1 * 4 + 0x100);
  uVar1 = *(undefined4 *)((int)this + param_1 * 0x10 + 0x5c);
  uVar2 = *(undefined4 *)((int)this + param_1 * 0x10 + 0x60);
  *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)((int)this + param_1 * 0x10 + 0x58);
  *(undefined4 *)(iVar3 + 0xa8) = uVar1;
  *(undefined4 *)(iVar3 + 0xac) = uVar2;
  uVar1 = *(undefined4 *)((int)this + param_1 * 0x10 + 0x3c);
  uVar2 = *(undefined4 *)((int)this + param_1 * 0x10 + 0x40);
  *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)((int)this + param_1 * 0x10 + 0x38);
  *(undefined4 *)(iVar3 + 0x98) = uVar1;
  *(undefined4 *)(iVar3 + 0x9c) = uVar2;
  iVar4 = *(int *)(*(int *)(iVar3 + 0xc) + 0x24);
  if (*(int *)(iVar4 + 0xc) < (int)*(short *)(iVar3 + 0x60)) {
    bVar5 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xc) + 0x20) + 0xc))(iVar4,iVar3);
    *(uint *)(iVar3 + 0x5c) =
         (uint)bVar5 << 8 |
         CONCAT22((short)((uint)*(undefined4 *)(iVar3 + 0x5c) >> 0x10),
                  (ushort)(byte)*(undefined4 *)(iVar3 + 0x5c));
  }
  return;
}



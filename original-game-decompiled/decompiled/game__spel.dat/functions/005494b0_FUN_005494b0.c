
/* ==== FUN_005494b0 @ 005494b0 ==== 
 * signature: undefined __thiscall FUN_005494b0(void * this, uint param_1)
 * body: 005494b0-00549563
 */

void __thiscall FUN_005494b0(void *this,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  sVar3 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[0x10];
    if (iVar4 < *(short *)(param_1 + 0x40)) {
      *(undefined2 *)(iVar2 + 0x58) = 0xffff;
    }
    else {
      iVar4 = iVar4 + 1;
      iVar5 = FUN_004f5240(*(void **)(puVar1[4] + 0xa4),param_1);
      *(int *)(iVar2 + 0x60) = iVar5;
      iVar5 = FUN_004f5240(*(void **)(puVar1[9] + 0xa4),param_1);
      *(int *)(iVar2 + 100) = iVar5;
      *(undefined4 *)(iVar2 + 0x6c) = puVar1[0x16];
      *(undefined4 *)(iVar2 + 0x68) = puVar1[0x19];
      if (*(ushort *)((int)this + 0x30) <= *(ushort *)((int)this + 0x32)) {
        FUN_004f6060((ushort *)((int)this + 0x30));
      }
      *(int *)(*(int *)((int)this + 0x34) + (uint)*(ushort *)((int)this + 0x32) * 4) = iVar2;
      *(short *)((int)this + 0x32) = *(short *)((int)this + 0x32) + 1;
      *(short *)(iVar2 + 0x58) = sVar3;
      sVar3 = sVar3 + 1;
    }
  }
  return;
}



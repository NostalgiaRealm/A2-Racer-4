
/* ==== FUN_004f3750 @ 004f3750 ==== 
 * signature: undefined __fastcall FUN_004f3750(byte * param_1)
 * body: 004f3750-004f380d
 */

void __fastcall FUN_004f3750(byte *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  void *this;
  undefined1 local_e0 [90];
  undefined2 local_86;
  uint local_84;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x4e);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x50) + uVar3 * 4) + 0x28);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      this = (void *)((int)*(short *)(puVar2 + 3) + (int)puVar2);
      *(uint *)(*(int *)((int)this + 0x70) + 0x44) =
           *(uint *)(*(int *)((int)this + 0x70) + 0x44) & 0xffffff01 | 1;
      pbVar4 = *(byte **)(*(int *)((int)this + 0x10) + 0xa4);
      if (pbVar4 == param_1) {
        pbVar4 = *(byte **)(*(int *)((int)this + 0x24) + 0xa4);
      }
      puVar2 = puVar1;
      if ((*pbVar4 & 0xc) == 0) {
        FUN_004f53c0((int)pbVar4);
        local_84 = (local_84 >> 8 & 0xfffffc) << 8;
        local_86 = 0;
        FUN_00504690(this,(int)local_e0);
        FUN_0053f7c0(this);
      }
      else if (this != (void *)0x0) {
        FUN_0053e620((int)this);
        FUN_0054b339(this);
      }
    }
  }
  return;
}



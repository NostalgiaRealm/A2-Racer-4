
/* ==== FUN_004f4810 @ 004f4810 ==== 
 * signature: undefined __fastcall FUN_004f4810(int param_1)
 * body: 004f4810-004f488b
 */

void __fastcall FUN_004f4810(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  *(uint *)(param_1 + 0x5c) = CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x5c) >> 8),1);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(iVar1 + 0x120);
  uVar3 = *(undefined4 *)(iVar1 + 0x124);
  *(double *)(param_1 + 0x68) = *(double *)(iVar1 + 0x120) - *(double *)(iVar1 + 0xc0);
  FUN_004f47b0(param_1);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar5 = (uint)*(ushort *)(param_1 + 0x4e);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    uVar4 = *(uint *)(*(int *)(param_1 + 0x50) + uVar5 * 4);
    *(uint *)(uVar4 + 0x80) = *(uint *)(uVar4 + 0x80) & 0xffffff01 | 1;
    FUN_004f28c0(uVar4);
  }
  return;
}



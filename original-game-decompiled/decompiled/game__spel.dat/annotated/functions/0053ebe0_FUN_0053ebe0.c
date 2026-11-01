
/* ==== FUN_0053ebe0 @ 0053ebe0 ==== 
 * signature: int __fastcall FUN_0053ebe0(int param_1)
 * body: 0053ebe0-0053ec87
 */

int __fastcall FUN_0053ebe0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = *(ushort *)(param_1 + 0x26) - 1;
  while (-1 < iVar3) {
    iVar3 = iVar3 + -1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4 + iVar3 * 4) + 0x228) = 0;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x36);
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x38) + uVar6 * 4);
    pbVar1 = *(byte **)(iVar3 + 0x2c);
    pbVar2 = *(byte **)(iVar3 + 0x30);
    if (((*pbVar1 & 0xc) == 0) && ((*pbVar2 & 0xc) == 0)) {
      iVar3 = FUN_0053ebc0((int)pbVar1);
      iVar4 = FUN_0053ebc0((int)pbVar2);
      if (iVar3 != iVar4) {
        *(int *)(iVar4 + 0x228) = iVar3;
      }
    }
  }
  iVar3 = 0;
  uVar6 = (uint)*(ushort *)(param_1 + 0x26);
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
    pbVar1 = *(byte **)(*(int *)(param_1 + 0x28) + uVar6 * 4);
    if ((*pbVar1 & 0xc) == 0) {
      iVar3 = FUN_0053ebc0((int)pbVar1);
    }
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x26);
  iVar4 = 0;
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
    pbVar1 = *(byte **)(*(int *)(param_1 + 0x28) + uVar6 * 4);
    if (((*pbVar1 & 0xc) == 0) && (iVar5 = FUN_0053ebc0((int)pbVar1), iVar5 != iVar3)) {
      iVar4 = iVar5;
    }
  }
  return iVar4;
}



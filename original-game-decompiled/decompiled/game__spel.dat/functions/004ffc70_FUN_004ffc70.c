
/* ==== FUN_004ffc70 @ 004ffc70 ==== 
 * signature: int __fastcall FUN_004ffc70(int param_1)
 * body: 004ffc70-004ffd1d
 */

int __fastcall FUN_004ffc70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(ushort *)(param_1 + 0xe) - 1;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4 + iVar1 * 4) + 0x228) = 0;
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x1e);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    iVar1 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x20) + uVar4 * 4) + 8))();
    iVar5 = *(ushort *)(iVar1 + 2) - 1;
    if (-1 < iVar5) {
      iVar2 = FUN_0053ebc0(**(int **)(iVar1 + 4));
      do {
        iVar3 = FUN_0053ebc0(*(int *)(*(int *)(iVar1 + 4) + iVar5 * 4));
        if (iVar2 != iVar3) {
          *(int *)(iVar3 + 0x228) = iVar2;
        }
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  iVar1 = FUN_0053ebc0(**(int **)(param_1 + 0x10));
  iVar5 = 0;
  if (*(short *)(param_1 + 0xe) != 0) {
    do {
      iVar2 = FUN_0053ebc0(*(int *)(*(int *)(param_1 + 0x10) + iVar5 * 4));
      if (iVar2 != iVar1) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0xe));
  }
  return 0;
}



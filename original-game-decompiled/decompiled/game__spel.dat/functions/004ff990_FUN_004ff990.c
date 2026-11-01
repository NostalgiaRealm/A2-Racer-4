
/* ==== FUN_004ff990 @ 004ff990 ==== 
 * signature: undefined __fastcall FUN_004ff990(void * param_1)
 * body: 004ff990-004ff9f6
 */

void __fastcall FUN_004ff990(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = (uint)*(ushort *)((int)param_1 + 0xe);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x10) + uVar3 * 4);
    uVar5 = (uint)*(ushort *)(iVar1 + 0x1ca);
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x1cc) + uVar5 * 4);
      iVar4 = FUN_004ffa00(param_1,iVar2);
      if (iVar4 == 0) {
        FUN_004ffaa0(param_1,iVar2);
      }
      FUN_004ffa40(param_1,iVar2,iVar1);
    }
  }
  FUN_00500420(param_1);
  return;
}



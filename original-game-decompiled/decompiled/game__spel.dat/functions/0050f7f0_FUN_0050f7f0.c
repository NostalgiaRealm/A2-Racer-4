
/* ==== FUN_0050f7f0 @ 0050f7f0 ==== 
 * signature: undefined4 __fastcall FUN_0050f7f0(undefined4 * param_1)
 * body: 0050f7f0-0050f921
 */

undefined4 __fastcall FUN_0050f7f0(undefined4 *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  int local_c;
  
  *param_1 = 0x4fb6d2ac;
  iVar4 = param_1[10] * param_1[9];
  param_1[2] = iVar4;
  sVar6 = iVar4 * iVar4 * 8;
  param_1[1] = 0x3bfd83c9;
  uVar2 = FUN_004f5a90(sVar6);
  sVar1 = iVar4 * 8;
  param_1[4] = uVar2;
  uVar2 = FUN_004f5a90(sVar1);
  param_1[5] = uVar2;
  uVar2 = FUN_004f5a90(sVar1);
  param_1[6] = uVar2;
  local_c = 0;
  if (0 < (int)param_1[9]) {
    do {
      iVar5 = 0;
      iVar7 = 0x28;
      do {
        if (*(int *)(param_1[8] + iVar7) != 1) {
          FUN_0050f290(param_1,local_c,iVar5);
        }
        iVar7 = iVar7 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar7 < 0x40);
      local_c = local_c + 1;
    } while (local_c < (int)param_1[9]);
  }
  uVar2 = FUN_004f5a90(sVar6);
  *(undefined4 *)(param_1[8] + 0x18) = uVar2;
  *(int *)(param_1[8] + 0x10) = iVar4;
  uVar2 = FUN_00545a90(param_1,param_1[8] + 8);
  if ((LPVOID)param_1[4] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[4]);
    param_1[4] = 0;
  }
  if ((LPVOID)param_1[6] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[6]);
    param_1[6] = 0;
  }
  if ((LPVOID)param_1[5] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[5]);
    param_1[5] = 0;
  }
  uVar3 = FUN_004f5a90(sVar1);
  *(undefined4 *)(param_1[8] + 0x1c) = uVar3;
  uVar3 = FUN_004f5a90(sVar1);
  *(undefined4 *)(param_1[8] + 0x20) = uVar3;
  iVar4 = param_1[8];
  *(undefined4 *)(iVar4 + 8) = 0x4fb6d2ac;
  *(undefined4 *)(iVar4 + 0xc) = 0x3bfd83c9;
  return uVar2;
}



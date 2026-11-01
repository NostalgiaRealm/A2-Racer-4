
/* ==== FUN_0050acb0 @ 0050acb0 ==== 
 * signature: undefined __fastcall FUN_0050acb0(int param_1)
 * body: 0050acb0-0050ada0
 */

void __fastcall FUN_0050acb0(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  LPVOID pvVar4;
  void **ppvVar5;
  int iVar6;
  int *piVar7;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  pcStack_8 = FUN_005738c6;
  ExceptionList = &local_c;
  iVar3 = *(int *)(param_1 + 0x14);
  local_4 = 1;
  ppvVar5 = &local_c;
  if (iVar3 != 0) {
    iVar6 = *(ushort *)(iVar3 + 0x1a) - 1;
    if (-1 < iVar6) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x1c) + iVar6 * 4);
      do {
        if (*piVar7 == param_1) break;
        iVar6 = iVar6 + -1;
        piVar7 = piVar7 + -1;
      } while (-1 < iVar6);
    }
    uVar1 = *(ushort *)(iVar3 + 0x1a) - 1;
    *(ushort *)(iVar3 + 0x1a) = uVar1;
    ppvVar5 = ExceptionList;
    if (iVar6 < (int)(uint)uVar1) {
      do {
        iVar6 = iVar6 + 1;
        *(undefined4 *)(*(int *)(iVar3 + 0x1c) + -4 + iVar6 * 4) =
             *(undefined4 *)(*(int *)(iVar3 + 0x1c) + iVar6 * 4);
        ppvVar5 = ExceptionList;
      } while (iVar6 < (int)(uint)*(ushort *)(iVar3 + 0x1a));
    }
  }
  ExceptionList = ppvVar5;
  sVar2 = *(short *)(param_1 + 0x1a);
  while (sVar2 != 0) {
    pvVar4 = (LPVOID)**(undefined4 **)(param_1 + 0x1c);
    if (pvVar4 != (LPVOID)0x0) {
      FUN_0050acb0((int)pvVar4);
      FUN_0054b339(pvVar4);
    }
    sVar2 = *(short *)(param_1 + 0x1a);
  }
  pvVar4 = *(LPVOID *)(param_1 + 0x24);
  if (pvVar4 != (LPVOID)(param_1 + 0x28)) {
    if (pvVar4 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar4);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined2 *)(param_1 + 0x20) = 0;
  }
  *(undefined2 *)(param_1 + 0x22) = 0;
  pvVar4 = *(LPVOID *)(param_1 + 0x1c);
  if (pvVar4 != (LPVOID)(param_1 + 0x20)) {
    if (pvVar4 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar4);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined2 *)(param_1 + 0x18) = 0;
  }
  *(undefined2 *)(param_1 + 0x1a) = 0;
  ExceptionList = local_c;
  return;
}



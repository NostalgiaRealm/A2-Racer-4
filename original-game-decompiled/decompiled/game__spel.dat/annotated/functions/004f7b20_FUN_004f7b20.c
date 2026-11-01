
/* ==== FUN_004f7b20 @ 004f7b20 ==== 
 * signature: undefined __fastcall FUN_004f7b20(int * param_1)
 * body: 004f7b20-004f7eba
 */

void __fastcall FUN_004f7b20(int *param_1)

{
  ushort uVar1;
  LPVOID pvVar2;
  int iVar3;
  void **ppvVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573236;
  pvStack_c = ExceptionList;
  local_4 = 4;
  ppvVar4 = &pvStack_c;
  if (param_1[0x5b] == 0x1e240) {
    uVar7 = (uint)*(ushort *)((int)param_1 + 0xfe);
    ppvVar4 = &pvStack_c;
    while (ExceptionList = ppvVar4, uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      (**(code **)(**(int **)(param_1[0x40] + uVar7 * 4) + 4))(param_1);
      ppvVar4 = ExceptionList;
    }
    FUN_004f2830((undefined4 *)param_1[0xc]);
    piVar6 = (int *)param_1[3];
    param_1[0xc] = 0;
    if (piVar6 != (int *)0x0) {
      FUN_004f6610(piVar6);
      FUN_0054b339(piVar6);
    }
    param_1[3] = 0;
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 0x18))(1);
    }
    *param_1 = 0;
    FUN_0054b339((LPVOID)param_1[0x28]);
    pvVar2 = (LPVOID)param_1[1];
    param_1[0x28] = 0;
    if (pvVar2 != (LPVOID)0x0) {
      FUN_0050bee0((int)pvVar2);
      FUN_0054b339(pvVar2);
    }
    param_1[1] = 0;
    FUN_0054b339((LPVOID)param_1[2]);
    pvVar2 = (LPVOID)param_1[4];
    param_1[2] = 0;
    if (pvVar2 != (LPVOID)0x0) {
      FUN_0053ba00((int)pvVar2);
      FUN_0054b339(pvVar2);
    }
    pvVar2 = (LPVOID)param_1[5];
    param_1[4] = 0;
    if (pvVar2 != (LPVOID)0x0) {
      FUN_0050ae80((int)pvVar2);
      FUN_0054b339(pvVar2);
    }
    pvVar2 = (LPVOID)param_1[0x27];
    param_1[5] = 0;
    if (pvVar2 != (LPVOID)0x0) {
      FUN_0050a970((int)pvVar2);
      FUN_0054b339(pvVar2);
    }
    param_1[0x27] = 0;
    (**(code **)(*(int *)param_1[10] + 0xc))(param_1);
    (**(code **)(*(int *)param_1[6] + 4))(param_1);
    param_1[6] = 0;
    (**(code **)(*(int *)param_1[8] + 0x10))(param_1);
    param_1[8] = 0;
    (*(code *)**(undefined4 **)param_1[9])(param_1);
    param_1[9] = 0;
    (**(code **)(*(int *)param_1[0x2a] + 4))(param_1);
    param_1[0x2a] = 0;
    (**(code **)(*(int *)param_1[0x2b] + 0x14))(param_1);
    param_1[0x2b] = 0;
    (**(code **)(*(int *)param_1[7] + 8))(param_1);
    param_1[7] = 0;
    uVar7 = (uint)*(ushort *)((int)param_1 + 0x15a);
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      (**(code **)(**(int **)(param_1[0x57] + uVar7 * 4) + 0x10))(param_1);
    }
    piVar6 = (int *)param_1[0x57];
    if (piVar6 != param_1 + 0x58) {
      if (piVar6 != (int *)0x0) {
        FUN_00559d4e(piVar6);
        param_1[0x57] = 0;
      }
      *(undefined2 *)(param_1 + 0x56) = 0;
    }
    *(undefined2 *)((int)param_1 + 0x15a) = 0;
    piVar6 = (int *)param_1[0x2c];
    if (piVar6 != (int *)0x0) {
      thunk_FUN_004f5c60(piVar6);
      FUN_0054b339(piVar6);
    }
    piVar6 = (int *)param_1[0x2d];
    param_1[0x2c] = 0;
    if (piVar6 != (int *)0x0) {
      thunk_FUN_004f5c60(piVar6);
      FUN_0054b339(piVar6);
    }
    piVar6 = (int *)param_1[0x29];
    param_1[0x2d] = 0;
    if (piVar6 != (int *)0x0) {
      FUN_004fe530(piVar6);
      FUN_0054b339(piVar6);
    }
    param_1[0x29] = 0;
    FUN_0054b339((LPVOID)param_1[0x43]);
    iVar3 = param_1[0x46];
    param_1[0x43] = 0;
    iVar5 = *(ushort *)(iVar3 + 6) - 1;
    if (-1 < iVar5) {
      piVar6 = (int *)(*(int *)(iVar3 + 8) + iVar5 * 4);
      do {
        if ((int *)*piVar6 == param_1) break;
        iVar5 = iVar5 + -1;
        piVar6 = piVar6 + -1;
      } while (-1 < iVar5);
    }
    uVar1 = *(ushort *)(iVar3 + 6) - 1;
    *(ushort *)(iVar3 + 6) = uVar1;
    if (iVar5 < (int)(uint)uVar1) {
      do {
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*(int *)(iVar3 + 8) + -4 + iVar5 * 4) =
             *(undefined4 *)(*(int *)(iVar3 + 8) + iVar5 * 4);
      } while (iVar5 < (int)(uint)*(ushort *)(iVar3 + 6));
    }
    FUN_004f8400((int)param_1);
    ppvVar4 = ExceptionList;
  }
  ExceptionList = ppvVar4;
  piVar6 = (int *)param_1[0x57];
  if (piVar6 != param_1 + 0x58) {
    if (piVar6 != (int *)0x0) {
      FUN_00559d4e(piVar6);
      param_1[0x57] = 0;
    }
    *(undefined2 *)(param_1 + 0x56) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x15a) = 0;
  piVar6 = (int *)param_1[0x55];
  if (piVar6 != param_1 + 0x56) {
    if (piVar6 != (int *)0x0) {
      FUN_00559d4e(piVar6);
      param_1[0x55] = 0;
    }
    *(undefined2 *)(param_1 + 0x54) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x152) = 0;
  piVar6 = (int *)param_1[0x42];
  if (piVar6 != param_1 + 0x43) {
    if (piVar6 != (int *)0x0) {
      FUN_00559d4e(piVar6);
      param_1[0x42] = 0;
    }
    *(undefined2 *)(param_1 + 0x41) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x106) = 0;
  piVar6 = (int *)param_1[0x40];
  if (piVar6 != param_1 + 0x41) {
    if (piVar6 != (int *)0x0) {
      FUN_00559d4e(piVar6);
      param_1[0x40] = 0;
    }
    *(undefined2 *)(param_1 + 0x3f) = 0;
  }
  *(undefined2 *)((int)param_1 + 0xfe) = 0;
  piVar6 = (int *)param_1[0x3e];
  if (piVar6 != param_1 + 0x3f) {
    if (piVar6 != (int *)0x0) {
      FUN_00559d4e(piVar6);
      param_1[0x3e] = 0;
    }
    *(undefined2 *)(param_1 + 0x3d) = 0;
  }
  *(undefined2 *)((int)param_1 + 0xf6) = 0;
  ExceptionList = pvStack_c;
  return;
}



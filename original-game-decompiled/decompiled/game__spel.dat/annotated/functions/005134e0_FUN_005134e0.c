
/* ==== FUN_005134e0 @ 005134e0 ==== 
 * signature: undefined __fastcall FUN_005134e0(void * param_1)
 * body: 005134e0-00513590
 */

void __fastcall FUN_005134e0(void *param_1)

{
  uint *puVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  piVar5 = *(int **)((int)param_1 + 0x78);
  if ((*(int *)(*(int *)((int)param_1 + 0x74) + 8) == 0) && (*(short *)((int)param_1 + 0x32) != 0))
  {
    do {
      iVar3 = *(int *)(*(int *)((int)param_1 + 0x34) + iVar4 * 4);
      puVar1 = *(uint **)(iVar3 + 0x34);
      *(int **)(iVar3 + 0x34) = piVar5;
      iVar3 = FUN_00513350(param_1,puVar1,piVar5);
      piVar5 = (int *)((int)piVar5 + iVar3);
      if ((*(int *)(*(int *)((int)param_1 + 0x74) + 4) == 1) && (puVar1 != (uint *)0x0)) {
        FUN_004f5b00((int)puVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)((int)param_1 + 0x32));
  }
  iVar4 = 0;
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    do {
      iVar3 = *(int *)(*(int *)((int)param_1 + 0x2c) + iVar4 * 4);
      puVar1 = *(uint **)(iVar3 + 0x34);
      *(int **)(iVar3 + 0x34) = piVar5;
      iVar3 = FUN_00513350(param_1,puVar1,piVar5);
      piVar5 = (int *)((int)piVar5 + iVar3);
      if (puVar1 != (uint *)0x0) {
        FUN_004f5b00((int)puVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)((int)param_1 + 0x2a));
  }
  pvVar2 = *(LPVOID *)((int)param_1 + 0x24);
  if (pvVar2 != (LPVOID)((int)param_1 + 0x28)) {
    if (pvVar2 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar2);
      *(undefined4 *)((int)param_1 + 0x24) = 0;
    }
    *(undefined2 *)((int)param_1 + 0x20) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  return;
}



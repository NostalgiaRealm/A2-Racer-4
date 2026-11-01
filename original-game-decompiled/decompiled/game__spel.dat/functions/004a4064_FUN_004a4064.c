
/* ==== FUN_004a4064 @ 004a4064 ==== 
 * signature: undefined __fastcall FUN_004a4064(int param_1)
 * body: 004a4064-004a406f
 */

void __fastcall FUN_004a4064(int param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iStack_8;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    FUN_004f7b20(piVar1);
    FUN_0054b339(piVar1);
  }
  iVar4 = (*(code *)**(undefined4 **)(param_1 + 100))();
  if (0 < iVar4) {
    do {
      pvVar2 = (LPVOID)**(undefined4 **)(*(int *)(param_1 + 0x68) + 4);
      if (pvVar2 != (LPVOID)0x0) {
        FUN_004a05e0((int)pvVar2);
        FUN_0054b339(pvVar2);
      }
      iVar7 = *(int *)(param_1 + 0x68);
      puVar3 = *(undefined4 **)(iVar7 + 8);
      puVar5 = (undefined4 *)(*(int *)(iVar7 + 4) + 4);
      if (puVar5 != puVar3) {
        iVar6 = *(int *)(iVar7 + 4) - (int)puVar5;
        do {
          *(undefined4 *)(iVar6 + (int)puVar5) = *puVar5;
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar3);
      }
      iVar4 = iVar4 + -1;
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -4;
    } while (iVar4 != 0);
  }
  iStack_8 = (*(code *)**(undefined4 **)(param_1 + 0x6c))();
  if (0 < iStack_8) {
    do {
      piVar1 = (int *)**(int **)(*(int *)(param_1 + 0x70) + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(1);
      }
      iVar4 = *(int *)(param_1 + 0x70);
      puVar3 = *(undefined4 **)(iVar4 + 8);
      puVar5 = (undefined4 *)(*(int *)(iVar4 + 4) + 4);
      if (puVar5 != puVar3) {
        iVar7 = *(int *)(iVar4 + 4) - (int)puVar5;
        do {
          *(undefined4 *)(iVar7 + (int)puVar5) = *puVar5;
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar3);
      }
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -4;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
  }
  return;
}



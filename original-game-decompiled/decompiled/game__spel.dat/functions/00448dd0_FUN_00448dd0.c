
/* ==== FUN_00448dd0 @ 00448dd0 ==== 
 * signature: undefined __fastcall FUN_00448dd0(int * param_1)
 * body: 00448dd0-00448eda
 */

void __fastcall FUN_00448dd0(int *param_1)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iStack_8;
  undefined4 uStack_4;
  
  iVar3 = (**(code **)*param_1)();
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iStack_8 = *(int *)param_1[2];
      iVar5 = iVar6;
      if (0 < iVar6) {
        do {
          FUN_00448fd0(&iStack_8,&uStack_4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      pvVar2 = *(LPVOID *)(iStack_8 + 8);
      if (pvVar2 != (LPVOID)0x0) {
        iVar5 = *(int *)((int)pvVar2 + 4);
        if (iVar5 != 0) {
          cVar1 = *(char *)(iVar5 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar5 + -1));
          }
          else {
            *(char *)(iVar5 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)((int)pvVar2 + 4) = 0;
        *(undefined4 *)((int)pvVar2 + 8) = 0;
        *(undefined4 *)((int)pvVar2 + 0xc) = 0;
        FUN_0054b339(pvVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  iVar3 = (**(code **)param_1[4])();
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      puVar4 = *(undefined4 **)param_1[6];
      iVar5 = iVar6;
      if (0 < iVar6) {
        do {
          puVar4 = (undefined4 *)*puVar4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      pvVar2 = (LPVOID)puVar4[2];
      if (pvVar2 != (LPVOID)0x0) {
        iVar5 = *(int *)((int)pvVar2 + 4);
        if (iVar5 != 0) {
          cVar1 = *(char *)(iVar5 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar5 + -1));
          }
          else {
            *(char *)(iVar5 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)((int)pvVar2 + 4) = 0;
        *(undefined4 *)((int)pvVar2 + 8) = 0;
        *(undefined4 *)((int)pvVar2 + 0xc) = 0;
        FUN_0054b339(pvVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  (**(code **)(*param_1 + 4))();
  (**(code **)(param_1[4] + 4))();
  return;
}



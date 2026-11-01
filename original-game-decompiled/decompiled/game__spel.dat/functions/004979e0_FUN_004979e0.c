
/* ==== FUN_004979e0 @ 004979e0 ==== 
 * signature: undefined __stdcall FUN_004979e0(void)
 * body: 004979e0-00497aa9
 */

void FUN_004979e0(void)

{
  char cVar1;
  LPVOID pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (DAT_007127f0 != (int *)0x0) {
    FUN_0054b339((LPVOID)DAT_007127f0[5]);
    iVar7 = 0;
    DAT_007127f0[5] = 0;
    if (0 < *DAT_007127f0) {
      do {
        piVar5 = DAT_007127f0;
        puVar6 = (undefined4 *)(**(code **)(DAT_007127f0[1] + 8))();
        pvVar2 = (LPVOID)*puVar6;
        piVar3 = *(int **)(piVar5[3] + 4);
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        FUN_0054b339(piVar3);
        piVar5[4] = piVar5[4] + -1;
        if (pvVar2 != (LPVOID)0x0) {
          iVar4 = *(int *)((int)pvVar2 + 4);
          if (iVar4 != 0) {
            cVar1 = *(char *)(iVar4 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_0054b339((char *)(iVar4 + -1));
            }
            else {
              *(char *)(iVar4 + -1) = cVar1 + -1;
            }
          }
          *(undefined4 *)((int)pvVar2 + 4) = 0;
          *(undefined4 *)((int)pvVar2 + 8) = 0;
          *(undefined4 *)((int)pvVar2 + 0xc) = 0;
          FUN_0054b339(pvVar2);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *DAT_007127f0);
    }
    piVar3 = DAT_007127f0;
    if (DAT_007127f0 != (int *)0x0) {
      FUN_004978a0((int)DAT_007127f0);
      FUN_0054b339(piVar3);
    }
    DAT_007127f0 = (int *)0x0;
  }
  return;
}



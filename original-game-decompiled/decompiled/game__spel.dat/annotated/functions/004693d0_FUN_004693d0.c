
/* ==== FUN_004693d0 @ 004693d0 ==== 
 * signature: undefined __stdcall FUN_004693d0(void)
 * body: 004693d0-00469433
 */

void FUN_004693d0(void)

{
  LPVOID pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = DAT_0071222c;
  if (0 < DAT_0071222c) {
    do {
      puVar3 = (undefined4 *)(**(code **)(DAT_00712220 + 8))();
      pvVar1 = (LPVOID)*puVar3;
      piVar2 = *(int **)(DAT_00712228 + 4);
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      FUN_0054b339(piVar2);
      DAT_0071222c = DAT_0071222c + -1;
      if (pvVar1 != (LPVOID)0x0) {
        FUN_00468ec0((int)pvVar1);
        FUN_0054b339(pvVar1);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



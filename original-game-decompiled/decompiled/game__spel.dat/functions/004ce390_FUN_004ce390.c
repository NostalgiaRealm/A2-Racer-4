
/* ==== FUN_004ce390 @ 004ce390 ==== 
 * signature: undefined __cdecl FUN_004ce390(int * param_1)
 * body: 004ce390-004ce3da
 */

void __cdecl FUN_004ce390(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = DAT_0074b070;
  if (0 < *param_1) {
    do {
      iVar1 = *(int *)(param_1[2] + 4 + iVar5 * 8);
      iVar2 = 0;
      if (0 < iVar3) {
        piVar4 = &DAT_00741430;
        do {
          if (*piVar4 == iVar1) goto LAB_004ce3d0;
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar2 < iVar3);
      }
      (&DAT_00741430)[iVar3] = iVar1;
      iVar3 = iVar3 + 1;
      DAT_0074b070 = iVar3;
LAB_004ce3d0:
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_1);
  }
  return;
}



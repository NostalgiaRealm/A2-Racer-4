
/* ==== FUN_005046f0 @ 005046f0 ==== 
 * signature: undefined __fastcall FUN_005046f0(int * param_1)
 * body: 005046f0-00504780
 */

void __fastcall FUN_005046f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8 [2];
  
  piVar5 = local_8;
  piVar4 = param_1 + 10;
  iVar3 = 2;
  iVar1 = *(int *)(param_1[10] + 0x18);
  do {
    iVar2 = *piVar4;
    *piVar5 = iVar2;
    FUN_004f2510(iVar2);
    piVar4 = piVar4 + 7;
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = local_8;
  iVar3 = 2;
  do {
    if (*(int *)(*(int *)(*piVar4 + 0xa4) + 0x5c) * 0x1000000 < 0x8000000) {
      FUN_004f4890(*(int *)(*piVar4 + 0xa4));
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(int *)(iVar1 + 0x13c) = *(int *)(iVar1 + 0x13c) + 1;
  FUN_00504330(param_1,local_8[0],local_8[1]);
  FUN_004f5b80(*(int **)(iVar1 + 0xb4));
  return;
}



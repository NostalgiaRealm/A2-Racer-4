
/* ==== FUN_004fe530 @ 004fe530 ==== 
 * signature: undefined __fastcall FUN_004fe530(int * param_1)
 * body: 004fe530-004fe57c
 */

void __fastcall FUN_004fe530(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + param_1[2] + 8);
      if (iVar1 != 0) {
        FUN_004fe450(iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xd0;
    } while (iVar2 < *param_1);
  }
  if ((LPVOID)param_1[2] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[2]);
    param_1[2] = 0;
  }
  return;
}



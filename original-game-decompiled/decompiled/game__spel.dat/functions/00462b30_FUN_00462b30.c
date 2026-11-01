
/* ==== FUN_00462b30 @ 00462b30 ==== 
 * signature: undefined4 __stdcall FUN_00462b30(int param_1)
 * body: 00462b30-00462b30
 */

undefined4 FUN_00462b30(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    piVar2 = *(int **)(param_1 + 0x78);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[1];
      FUN_00462a40(piVar2,param_1);
      piVar2 = piVar1;
    }
    FUN_004626d0();
    lVar4 = __ftol();
    iVar3 = (int)lVar4 + *(int *)(param_1 + 0x84);
    if (0 < iVar3) {
      do {
        FUN_00462880(param_1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    return 1;
  }
  return 0;
}



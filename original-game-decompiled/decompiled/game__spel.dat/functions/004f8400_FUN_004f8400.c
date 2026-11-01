
/* ==== FUN_004f8400 @ 004f8400 ==== 
 * signature: undefined __fastcall FUN_004f8400(int param_1)
 * body: 004f8400-004f8455
 */

void __fastcall FUN_004f8400(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x168);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    return;
  }
  do {
    if ((LPVOID)piVar2[0x13] != (LPVOID)0x0) {
      FUN_00559d4e((LPVOID)piVar2[0x13]);
      piVar2[0x13] = 0;
    }
    piVar1 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      FUN_004f83e0((int)piVar2);
      FUN_0054b339(piVar2);
    }
    piVar2 = piVar1;
  } while (piVar1 != (int *)0x0);
  *(undefined4 *)(param_1 + 0x168) = 0;
  return;
}



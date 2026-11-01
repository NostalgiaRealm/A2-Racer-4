
/* ==== FUN_00528350 @ 00528350 ==== 
 * signature: undefined __cdecl FUN_00528350(int * param_1)
 * body: 00528350-005283f0
 */

void __cdecl FUN_00528350(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  double *pdVar4;
  int in_stack_0000000c;
  
  iVar3 = FUN_00514af0(param_1);
  if (iVar3 < 2) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_getcent_005c1d1c);
    FUN_0051e8e0(5,(int *)0x0);
  }
  pdVar4 = FUN_0051e110(DAT_0074c5f4);
  iVar3 = 0;
  if (0 < DAT_0074c03c) {
    do {
      *(undefined4 *)pdVar4 = 0;
      *(undefined4 *)((int)pdVar4 + 4) = 0;
      if (param_1 != (int *)0x0) {
        iVar1 = param_1[1];
        piVar2 = param_1 + 2;
        while (iVar1 != 0) {
          *pdVar4 = *(double *)(*(int *)(iVar1 + 8) + iVar3 * 8) + *pdVar4;
          iVar1 = *piVar2;
          piVar2 = piVar2 + 1;
        }
      }
      iVar3 = iVar3 + 1;
      *pdVar4 = *pdVar4 / (double)in_stack_0000000c;
      pdVar4 = pdVar4 + 1;
    } while (iVar3 < DAT_0074c03c);
  }
  return;
}




/* ==== FUN_00539510 @ 00539510 ==== 
 * signature: undefined __cdecl FUN_00539510(int param_1, int param_2, int * param_3)
 * body: 00539510-00539597
 */

void __cdecl FUN_00539510(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 == 0) {
    *(int *)(param_2 + 0x48) = DAT_0074c6d0 + -1;
    return;
  }
  piVar2 = *(int **)(iVar1 + 4);
  puVar3 = (undefined4 *)(iVar1 + 4);
  if (piVar2 == (int *)0x0) {
    *(int *)(param_2 + 0x48) = DAT_0074c6d0 + -1;
    return;
  }
  do {
    puVar3 = puVar3 + 1;
    iVar1 = piVar2[1];
    if (iVar1 == param_2) {
      iVar1 = piVar2[2];
    }
    if ((*(int *)(iVar1 + 0x48) == DAT_0074c6d0) &&
       (iVar1 = FUN_00514680(*piVar2,param_1), iVar1 != 0)) {
      FUN_00514020(param_3,(int)piVar2);
    }
    piVar2 = (int *)*puVar3;
  } while (piVar2 != (int *)0x0);
  *(int *)(param_2 + 0x48) = DAT_0074c6d0 + -1;
  return;
}




/* ==== FUN_00531270 @ 00531270 ==== 
 * signature: undefined __cdecl FUN_00531270(int * param_1, int param_2, undefined4 param_3, int param_4)
 * body: 00531270-00531389
 */

void __cdecl FUN_00531270(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  if ((((*(uint *)(param_2 + 0x50) & 0x400) == 0) || (DAT_0074c690 == 0)) &&
     (iVar1 = *(int *)(param_2 + 0x38), iVar1 != 0)) {
    puVar2 = (undefined4 *)(iVar1 + 4);
    piVar3 = *(int **)(iVar1 + 4);
    while (piVar3 != (int *)0x0) {
      puVar2 = puVar2 + 1;
      if (param_4 == 0x18) {
        FUN_00558953(param_1,&DAT_005c38cc);
      }
      FUN_00558953(param_1,&DAT_005c38cc);
      if (piVar3[1] == param_2) {
        iVar1 = *piVar3;
        if (iVar1 != 0) {
          piVar3 = (int *)(iVar1 + 4);
          iVar1 = *(int *)(iVar1 + 4);
          while (iVar1 != 0) {
            piVar3 = piVar3 + 1;
            FUN_005164c0(*(uint *)(iVar1 + 8));
            FUN_00558953(param_1,&DAT_005c38cc);
            iVar1 = *piVar3;
          }
        }
      }
      else {
        iVar1 = *piVar3;
        if (iVar1 != 0) {
          piVar4 = (int *)(iVar1 + 8);
          iVar1 = *(int *)(iVar1 + 8);
          while (iVar1 != 0) {
            FUN_005164c0(*(uint *)(iVar1 + 8));
            FUN_00558953(param_1,&DAT_005c38cc);
            if (piVar4 == (int *)(*piVar3 + 4)) {
              piVar4 = piVar4 + 2;
            }
            else if (piVar4 == (int *)(*piVar3 + 8)) {
              piVar4 = piVar4 + -1;
            }
            else {
              piVar4 = piVar4 + 1;
            }
            iVar1 = *piVar4;
          }
        }
      }
      FUN_00558953(param_1,&DAT_005ae60c);
      piVar3 = (int *)*puVar2;
    }
  }
  return;
}




/* ==== FUN_00519f20 @ 00519f20 ==== 
 * signature: int * __cdecl FUN_00519f20(int * param_1, int param_2, undefined4 * param_3)
 * body: 00519f20-00519f8e
 */

int * __cdecl FUN_00519f20(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1[1] == param_2) {
    iVar4 = *(int *)(*param_1 + 8);
  }
  else {
    iVar4 = *(int *)(*param_1 + 4);
  }
  iVar3 = *(int *)(param_2 + 0x38);
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)(iVar3 + 4);
    piVar1 = *(int **)(iVar3 + 4);
    while (piVar1 != (int *)0x0) {
      puVar5 = puVar5 + 1;
      if (piVar1 != param_1) {
        if (piVar1[1] == param_2) {
          uVar2 = *(undefined4 *)(*piVar1 + 8);
          iVar3 = *(int *)(*piVar1 + 4);
        }
        else {
          iVar3 = *(int *)(*piVar1 + 8);
          uVar2 = *(undefined4 *)(*piVar1 + 4);
        }
        if (iVar3 == iVar4) {
          if (param_3 == (undefined4 *)0x0) {
            return piVar1;
          }
          *param_3 = uVar2;
          return piVar1;
        }
      }
      piVar1 = (int *)*puVar5;
    }
  }
  return (int *)0x0;
}



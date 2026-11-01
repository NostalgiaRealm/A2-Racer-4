
/* ==== FUN_00514680 @ 00514680 ==== 
 * signature: undefined4 __cdecl FUN_00514680(int param_1, int param_2)
 * body: 00514680-005146ae
 */

undefined4 __cdecl FUN_00514680(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 4);
    iVar1 = *(int *)(param_1 + 4);
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      if (iVar1 == param_2) {
        return 1;
      }
      iVar1 = *piVar2;
    }
  }
  return 0;
}




/* ==== FUN_00519690 @ 00519690 ==== 
 * signature: int __cdecl FUN_00519690(int param_1, int param_2)
 * body: 00519690-005196b9
 */

int __cdecl FUN_00519690(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 4);
    iVar1 = *(int *)(param_2 + 4);
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      if (*(int *)(iVar1 + 8) == param_1) {
        return iVar1;
      }
      iVar1 = *piVar2;
    }
  }
  return 0;
}



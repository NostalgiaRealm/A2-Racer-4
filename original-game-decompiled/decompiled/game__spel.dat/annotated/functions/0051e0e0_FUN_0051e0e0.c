
/* ==== FUN_0051e0e0 @ 0051e0e0 ==== 
 * signature: undefined1 __stdcall FUN_0051e0e0(int * param_1, int * param_2)
 * body: 0051e0e0-0051e0fa
 */

undefined1 FUN_0051e0e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 6;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *param_2;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 == iVar2);
  return 0;
}




/* ==== FUN_0056592f @ 0056592f ==== 
 * signature: undefined __cdecl FUN_0056592f(int param_1, undefined4 * param_2)
 * body: 0056592f-00565949
 */

void __cdecl FUN_0056592f(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



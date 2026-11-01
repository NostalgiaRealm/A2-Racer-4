
/* ==== FUN_00514240 @ 00514240 ==== 
 * signature: undefined __cdecl FUN_00514240(int * param_1, int param_2)
 * body: 00514240-0051427e
 */

void __cdecl FUN_00514240(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  iVar2 = *param_1;
  if (param_1[iVar2 + 1] != 0) {
    iVar2 = param_1[iVar2 + 1] + -1;
  }
  piVar1 = (int *)FUN_005147d0(iVar2 + param_2);
  iVar2 = iVar2 + 1;
  piVar1[*piVar1 + 1] = iVar2;
  while( true ) {
    piVar1 = piVar1 + 1;
    param_1 = param_1 + 1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    *piVar1 = *param_1;
  }
  return;
}



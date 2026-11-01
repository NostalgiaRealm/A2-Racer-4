
/* ==== FUN_00514020 @ 00514020 ==== 
 * signature: undefined __cdecl FUN_00514020(int * param_1, int param_2)
 * body: 00514020-00514069
 */

void __cdecl FUN_00514020(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    piVar2 = (int *)*param_1;
    if ((piVar2 == (int *)0x0) || (piVar3 = piVar2 + *piVar2 + 1, piVar2[*piVar2 + 1] == 0)) {
      FUN_005146f0(param_1);
      piVar2 = (int *)*param_1;
      piVar3 = piVar2 + *piVar2 + 1;
    }
    iVar1 = *piVar3;
    piVar2[iVar1] = param_2;
    *piVar3 = *piVar3 + 1;
    piVar2[iVar1 + 1] = 0;
  }
  return;
}



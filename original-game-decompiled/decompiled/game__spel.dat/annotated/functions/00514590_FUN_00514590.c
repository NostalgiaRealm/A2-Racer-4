
/* ==== FUN_00514590 @ 00514590 ==== 
 * signature: bool __cdecl FUN_00514590(int * param_1, int param_2, int * param_3, int param_4)
 * body: 00514590-005145e5
 */

bool __cdecl FUN_00514590(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = param_3;
  piVar2 = param_1;
  while( true ) {
    piVar4 = piVar2 + 1;
    piVar3 = piVar1 + 1;
    if (piVar4 == param_1 + param_2 + 1) {
      piVar4 = piVar2 + 2;
    }
    if (piVar3 == param_3 + param_4 + 1) {
      piVar3 = piVar1 + 2;
    }
    if (*piVar4 == 0) break;
    piVar1 = piVar3;
    piVar2 = piVar4;
    if (*piVar4 != *piVar3) {
      return false;
    }
  }
  return *piVar3 == 0;
}



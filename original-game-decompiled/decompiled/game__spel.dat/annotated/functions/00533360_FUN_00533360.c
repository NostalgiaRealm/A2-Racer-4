
/* ==== FUN_00533360 @ 00533360 ==== 
 * signature: undefined __cdecl FUN_00533360(int * param_1, char * param_2, int param_3, int param_4, int param_5)
 * body: 00533360-005333c3
 */

void __cdecl FUN_00533360(int *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
  param_5 = FUN_0052db00(param_3,param_4,param_5);
  FUN_0055b2d9(param_2,param_1);
  if (param_5 != 0) {
    piVar2 = (int *)(param_5 + 4);
    iVar1 = *(int *)(param_5 + 4);
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      FUN_00533230(param_1,iVar1);
      iVar1 = *piVar2;
    }
  }
  FUN_00514ba0(&param_5);
  return;
}



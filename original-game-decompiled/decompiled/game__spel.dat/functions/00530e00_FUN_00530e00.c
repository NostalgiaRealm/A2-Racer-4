
/* ==== FUN_00530e00 @ 00530e00 ==== 
 * signature: undefined __cdecl FUN_00530e00(int * param_1, int * param_2, int param_3)
 * body: 00530e00-00530e85
 */

void __cdecl FUN_00530e00(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  param_2 = (int *)FUN_005182e0((int)param_2);
  if (param_3 == 0x10) {
    FUN_00514af0(param_2);
    FUN_00558953(param_1,&DAT_005c38cc);
  }
  if (param_2 != (int *)0x0) {
    piVar2 = param_2 + 1;
    iVar1 = param_2[1];
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      FUN_005164c0(*(uint *)(iVar1 + 8));
      FUN_00558953(param_1,&DAT_005c38cc);
      iVar1 = *piVar2;
    }
  }
  FUN_00558953(param_1,&DAT_005ae60c);
  FUN_00514ba0((int *)&param_2);
  return;
}



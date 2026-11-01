
/* ==== FUN_00533be0 @ 00533be0 ==== 
 * signature: undefined __cdecl FUN_00533be0(int * param_1, int param_2, int param_3, int * param_4)
 * body: 00533be0-00533c63
 */

void __cdecl FUN_00533be0(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  FUN_005164c0(*(uint *)(param_3 + 8));
  FUN_005164c0(*(uint *)(param_2 + 8));
  FUN_00514af0(param_4);
  FUN_00558953(param_1,(byte *)s__d__d__d_005c5460);
  if (param_4 != (int *)0x0) {
    iVar1 = param_4[1];
    piVar2 = param_4 + 2;
    while (iVar1 != 0) {
      FUN_00558953(param_1,(byte *)&PTR_DAT_005bc6dc);
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  FUN_00558953(param_1,&DAT_005ae60c);
  return;
}



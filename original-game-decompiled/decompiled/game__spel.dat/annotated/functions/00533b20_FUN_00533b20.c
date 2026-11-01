
/* ==== FUN_00533b20 @ 00533b20 ==== 
 * signature: undefined __cdecl FUN_00533b20(int * param_1, int param_2, int param_3, int param_4)
 * body: 00533b20-00533bd3
 */

void __cdecl FUN_00533b20(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  double local_10;
  
  FUN_0052cf20(param_2,param_3,param_4,&local_10);
  FUN_005164c0(*(uint *)(param_3 + 8));
  FUN_005164c0(*(uint *)(param_2 + 8));
  FUN_00558953(param_1,(byte *)s__d__d__d_005c5454);
  iVar1 = 0;
  if (DAT_0074c03c != 1 && -1 < DAT_0074c03c + -1) {
    do {
      FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0074c03c + -1);
  }
  FUN_00558953(param_1,(byte *)s__6_16g_005c1958);
  FUN_00558953(param_1,&DAT_005ae60c);
  return;
}



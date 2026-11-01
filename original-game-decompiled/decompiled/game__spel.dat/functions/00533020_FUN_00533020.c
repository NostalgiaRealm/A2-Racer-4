
/* ==== FUN_00533020 @ 00533020 ==== 
 * signature: undefined __cdecl FUN_00533020(int * param_1, int param_2)
 * body: 00533020-005330c7
 */

void __cdecl FUN_00533020(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  DAT_0074c6b8 = DAT_0074c6b8 + 1;
  FUN_00558953(param_1,(byte *)s__appearance___edge__normal_norms_005c505c);
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    piVar2 = (int *)(param_2 + 8);
    while (iVar1 != 0) {
      FUN_00558953(param_1,(byte *)s__8_4g_0_0_0___v_d_0__8_4g_0_0_0_0_005c5030);
      FUN_00532ae0(param_1,*(undefined4 **)(iVar1 + 8));
      FUN_00558953(param_1,&DAT_005c502c);
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  FUN_00558953(param_1,&DAT_005c5024);
  return;
}



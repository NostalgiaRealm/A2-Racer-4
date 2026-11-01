
/* ==== FUN_005333d0 @ 005333d0 ==== 
 * signature: undefined __cdecl FUN_005333d0(int * param_1, char * param_2, int param_3)
 * body: 005333d0-00533437
 */

void __cdecl FUN_005333d0(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  FUN_0055b2d9(param_2,param_1);
  if (param_3 != 0) {
    piVar2 = (int *)(param_3 + 4);
    iVar1 = *(int *)(param_3 + 4);
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      FUN_005164c0(*(uint *)(iVar1 + 8));
      FUN_00558953(param_1,(byte *)s_p_d__v_d__005c539c);
      iVar1 = *piVar2;
    }
  }
  FUN_00558953(param_1,&DAT_005ae60c);
  return;
}



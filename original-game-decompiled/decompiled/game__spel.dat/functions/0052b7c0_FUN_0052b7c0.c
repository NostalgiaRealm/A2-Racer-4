
/* ==== FUN_0052b7c0 @ 0052b7c0 ==== 
 * signature: undefined __cdecl FUN_0052b7c0(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * body: 0052b7c0-0052b84f
 */

void __cdecl
FUN_0052b7c0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int local_14;
  
  FUN_00558953(param_1,&DAT_005aeff8);
  if (0 < param_4) {
    local_14 = param_4;
    do {
      iVar1 = param_5;
      if (0 < param_5) {
        do {
          FUN_00558953(param_1,(byte *)s__6_3g_005c283c);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00558953(param_1,&DAT_005ae60c);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}



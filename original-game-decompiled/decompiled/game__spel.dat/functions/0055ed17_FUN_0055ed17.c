
/* ==== FUN_0055ed17 @ 0055ed17 ==== 
 * signature: undefined __cdecl FUN_0055ed17(uint param_1, int param_2, int * param_3, int * param_4)
 * body: 0055ed17-0055ed47
 */

void __cdecl FUN_0055ed17(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_0055ece2(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



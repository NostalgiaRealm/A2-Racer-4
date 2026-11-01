
/* ==== FUN_1000dcb0 @ 1000dcb0 ==== 
 * signature: undefined __cdecl FUN_1000dcb0(uint param_1, int param_2, int * param_3, int * param_4)
 * body: 1000dcb0-1000dce4
 */

void __cdecl FUN_1000dcb0(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_1000dc30(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



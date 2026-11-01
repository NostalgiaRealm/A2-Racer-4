
/* ==== FUN_00497340 @ 00497340 ==== 
 * signature: undefined __cdecl FUN_00497340(int param_1, int * param_2, int * param_3, int * param_4)
 * body: 00497340-004973ae
 */

void __cdecl FUN_00497340(int param_1,int *param_2,int *param_3,int *param_4)

{
  *param_2 = param_1 / 60000;
  *param_3 = (param_1 % 60000) / 1000;
  *param_4 = ((param_1 % 60000) % 1000) / 100;
  return;
}



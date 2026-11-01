
/* ==== FUN_00494060 @ 00494060 ==== 
 * signature: undefined __stdcall FUN_00494060(int param_1, int * param_2, int * param_3, int * param_4)
 * body: 00494060-004940d0
 */

void FUN_00494060(int param_1,int *param_2,int *param_3,int *param_4)

{
  *param_2 = param_1 / 60000;
  *param_3 = (param_1 % 60000) / 1000;
  *param_4 = ((param_1 % 60000) % 1000) / 100;
  return;
}



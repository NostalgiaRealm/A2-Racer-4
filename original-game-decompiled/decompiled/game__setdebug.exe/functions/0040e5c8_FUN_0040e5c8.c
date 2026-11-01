
/* ==== FUN_0040e5c8 @ 0040e5c8 ==== 
 * signature: undefined __register FUN_0040e5c8(int param_1, int param_2, int param_3, int * param_4, int param_5)
 * body: 0040e5c8-0040e5e3
 */

void FUN_0040e5c8(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3 + param_1;
  param_4[3] = param_2 + param_5;
  return;
}




/* ==== FUN_00473a90 @ 00473a90 ==== 
 * signature: undefined __cdecl FUN_00473a90(undefined4 * param_1, int param_2)
 * body: 00473a90-00473ab5
 */

void __cdecl FUN_00473a90(undefined4 *param_1,int param_2)

{
  *(double *)(param_1 + 4) = (double)*(float *)(param_2 + 8);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}



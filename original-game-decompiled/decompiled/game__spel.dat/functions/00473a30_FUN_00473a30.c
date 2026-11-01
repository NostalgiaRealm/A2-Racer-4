
/* ==== FUN_00473a30 @ 00473a30 ==== 
 * signature: undefined __cdecl FUN_00473a30(undefined4 * param_1, float * param_2)
 * body: 00473a30-00473a54
 */

void __cdecl FUN_00473a30(undefined4 *param_1,float *param_2)

{
  *(double *)(param_1 + 4) = (double)*param_2;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}



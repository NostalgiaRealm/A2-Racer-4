
/* ==== FUN_004740c0 @ 004740c0 ==== 
 * signature: undefined __cdecl FUN_004740c0(undefined4 * param_1, int * param_2)
 * body: 004740c0-004740fa
 */

void __cdecl FUN_004740c0(undefined4 *param_1,int *param_2)

{
  *(double *)(param_1 + 4) = (double)*(float *)(*param_2 * 0xf0 + 0xb0 + DAT_00715e50);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 1;
  return;
}



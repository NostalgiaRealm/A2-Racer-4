
/* ==== FUN_004bf4d0 @ 004bf4d0 ==== 
 * signature: undefined4 __cdecl FUN_004bf4d0(float * param_1, float * param_2)
 * body: 004bf4d0-004bf505
 */

undefined4 __cdecl FUN_004bf4d0(float *param_1,float *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}



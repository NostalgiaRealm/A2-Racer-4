
/* ==== FUN_00405a00 @ 00405a00 ==== 
 * signature: float10 __cdecl FUN_00405a00(float param_1, float param_2, float param_3)
 * body: 00405a00-00405a2c
 */

float10 __cdecl FUN_00405a00(float param_1,float param_2,float param_3)

{
  if (param_1 < param_2) {
    return (float10)param_2;
  }
  if (param_3 < param_1) {
    return (float10)param_3;
  }
  return (float10)param_1;
}



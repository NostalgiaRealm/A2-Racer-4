
/* ==== FUN_004602e0 @ 004602e0 ==== 
 * signature: float10 __cdecl FUN_004602e0(float param_1, float param_2)
 * body: 004602e0-00460303
 */

float10 __cdecl FUN_004602e0(float param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00558625();
  return ((float10)param_2 - (float10)param_1) * (float10)(int)uVar1 * (float10)3.051851e-05 +
         (float10)param_1;
}



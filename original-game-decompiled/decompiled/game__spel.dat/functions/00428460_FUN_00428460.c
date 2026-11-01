
/* ==== FUN_00428460 @ 00428460 ==== 
 * signature: float10 __cdecl FUN_00428460(int param_1)
 * body: 00428460-00428493
 */

float10 __cdecl FUN_00428460(int param_1)

{
  return (float10)*(float *)(&DAT_006b2b00 + DAT_006fbb40 * 4) * (float10)param_1 +
         (float10)*(float *)(&DAT_006b2af4 + DAT_006fbb40 * 4) * (float10)(param_1 * param_1) +
         (float10)*(float *)(&DAT_006b2b0c + DAT_006fbb40 * 4);
}



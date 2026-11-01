
/* ==== FUN_00403431 @ 00403431 ==== 
 * signature: float10 __stdcall FUN_00403431(int param_1, float param_2)
 * body: 00403431-0040343f
 */

float10 FUN_00403431(int param_1,float param_2)

{
  if ((*(uint *)(&DAT_005cea64 + param_1 * 0x294) & 1) != 0) {
    return (float10)60.0 - (float10)param_2 * (float10)0.06666667;
  }
  if ((*(uint *)(&DAT_005cea64 + param_1 * 0x294) & 2) != 0) {
    return (float10)60.0 - (float10)param_2 * (float10)0.05882353;
  }
  return (float10)60.0 - (float10)param_2 * (float10)0.05263158;
}



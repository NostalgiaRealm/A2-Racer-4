
/* ==== FUN_004a6800 @ 004a6800 ==== 
 * signature: float10 __fastcall FUN_004a6800(int param_1)
 * body: 004a6800-004a6831
 */

float10 __fastcall FUN_004a6800(int param_1)

{
  if (*(float *)(param_1 + 0xc) == 0.0) {
    return (float10)0.1;
  }
  if (0.1 < *(float *)(param_1 + 0xc)) {
    return (float10)0.1;
  }
  return (float10)*(float *)(param_1 + 0xc);
}



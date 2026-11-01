
/* ==== FUN_004a31f0 @ 004a31f0 ==== 
 * signature: float10 __fastcall FUN_004a31f0(int param_1)
 * body: 004a31f0-004a323a
 */

float10 __fastcall FUN_004a31f0(int param_1)

{
  float *pfVar1;
  float local_c [3];
  
  pfVar1 = (float *)FUN_004a1d20(*(void **)(param_1 + 0x3c),local_c);
  return ABS((float10)*pfVar1) * (float10)*(float *)(param_1 + 0xa4 + *(int *)(param_1 + 0xe4) * 4)
         * (float10)*(float *)(param_1 + 0xa0) * (float10)60.0;
}



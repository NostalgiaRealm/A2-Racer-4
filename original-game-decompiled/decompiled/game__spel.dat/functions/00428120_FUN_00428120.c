
/* ==== FUN_00428120 @ 00428120 ==== 
 * signature: float10 __cdecl FUN_00428120(int param_1, int param_2, char param_3)
 * body: 00428120-0042816e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00428120(int param_1,int param_2,char param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)1.0 / (float10)*(float *)(param_2 * 0xf0 + 0xb0 + DAT_00715e50);
  if (param_1 < 2) {
    return fVar1 * (float10)DAT_006b2ad4 * (float10)9.8;
  }
  fVar1 = fVar1 * (float10)_DAT_006b2ad8 * (float10)9.8;
  if (param_3 != '\0') {
    fVar1 = fVar1 * (float10)0.6;
  }
  return fVar1;
}



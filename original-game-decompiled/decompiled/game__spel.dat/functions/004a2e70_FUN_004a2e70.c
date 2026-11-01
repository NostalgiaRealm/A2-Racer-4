
/* ==== FUN_004a2e70 @ 004a2e70 ==== 
 * signature: float10 __thiscall FUN_004a2e70(int param_1, int param_2)
 * body: 004a2e70-004a2ea1
 */

float10 __thiscall FUN_004a2e70(int param_1,int param_2)

{
  float *pfVar1;
  undefined4 local_c [3];
  
  if ((0 < param_2) && (param_2 < 4)) {
    pfVar1 = (float *)FUN_004a1ee0(*(void **)(param_1 + 0x34 + param_2 * 4),local_c);
    return (float10)*pfVar1;
  }
  return (float10)0.0;
}



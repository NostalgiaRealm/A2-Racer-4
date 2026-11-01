
/* ==== FUN_004a2eb0 @ 004a2eb0 ==== 
 * signature: float10 __thiscall FUN_004a2eb0(int param_1, int param_2)
 * body: 004a2eb0-004a2ed4
 */

float10 __thiscall FUN_004a2eb0(int param_1,int param_2)

{
  float10 fVar1;
  
  if ((0 < param_2) && (param_2 < 4)) {
    fVar1 = FUN_004f3120(*(int *)(*(int *)(param_1 + 0x34 + param_2 * 4) + 8));
    return fVar1;
  }
  return (float10)1.0;
}




/* ==== FUN_0053f690 @ 0053f690 ==== 
 * signature: float10 __thiscall FUN_0053f690(int param_1, double param_2)
 * body: 0053f690-0053f727
 */

float10 __thiscall FUN_0053f690(int param_1,double param_2)

{
  undefined1 local_a0 [152];
  double local_8;
  
  FUN_0053f1a0(local_a0,*(float *)(param_1 + 0x2c),*(byte **)(param_1 + 0x30));
  FUN_0053f450((int)local_a0);
  if (local_8 * 0.10000000149011612 < param_2) {
    param_2 = local_8 * 0.10000000149011612;
  }
  if (1e-19 <= local_8) {
    FUN_0053f4d0(local_a0,param_2 / local_8);
    return (float10)param_2;
  }
  return (float10)0.0;
}



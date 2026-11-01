
/* ==== FUN_0049cac0 @ 0049cac0 ==== 
 * signature: undefined __fastcall FUN_0049cac0(int param_1)
 * body: 0049cac0-0049caf9
 */

void __fastcall FUN_0049cac0(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((0.0 < (float)DAT_006fba64) &&
     (fVar1 = ((float)DAT_006fba64 / 200.0) * *(float *)(param_1 + 0x38),
     *(float *)(param_1 + 0x20) = fVar1, *(float *)(param_1 + 0x38) <= fVar1)) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x38);
    return;
  }
  return;
}



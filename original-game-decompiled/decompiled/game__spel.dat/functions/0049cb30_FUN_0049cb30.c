
/* ==== FUN_0049cb30 @ 0049cb30 ==== 
 * signature: undefined __fastcall FUN_0049cb30(int param_1)
 * body: 0049cb30-0049cb59
 */

void __fastcall FUN_0049cb30(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0.0 < (float)DAT_006fba74) {
    *(float *)(param_1 + 0x20) = ((float)DAT_006fba74 / 100.0) * *(float *)(param_1 + 0x3c);
    return;
  }
  return;
}




/* ==== FUN_004ef650 @ 004ef650 ==== 
 * signature: undefined __fastcall FUN_004ef650(int param_1)
 * body: 004ef650-004ef6df
 */

void __fastcall FUN_004ef650(int param_1)

{
  *(float *)(param_1 + 0x148) =
       (float)*(int *)(param_1 + 0xe0) /
       (float)((*(int *)(param_1 + 0x134) - *(int *)(param_1 + 0x130)) / 2) - 1.0;
  *(float *)(param_1 + 0x14c) =
       1.0 - (float)*(int *)(param_1 + 0xe4) /
             (float)((*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x138)) / 2);
  *(float *)(param_1 + 0x150) =
       (float)*(int *)(param_1 + 0xe8) /
       (float)((*(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x140)) / 2) - 1.0;
  return;
}




/* ==== FUN_00502ff0 @ 00502ff0 ==== 
 * signature: undefined __fastcall FUN_00502ff0(int param_1)
 * body: 00502ff0-005030b6
 */

void __fastcall FUN_00502ff0(int param_1)

{
  if ((**(byte **)(param_1 + 0x100) & 0xc) == 0) {
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x80);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x98);
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0xa0);
  }
  if ((**(byte **)(param_1 + 0x104) & 0xc) == 0) {
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x88);
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x8c);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x90);
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0xa8);
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xac);
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xb0);
  }
  return;
}



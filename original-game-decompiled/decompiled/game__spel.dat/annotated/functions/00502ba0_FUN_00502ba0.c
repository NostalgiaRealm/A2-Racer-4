
/* ==== FUN_00502ba0 @ 00502ba0 ==== 
 * signature: undefined __fastcall FUN_00502ba0(int param_1)
 * body: 00502ba0-00502c12
 */

void __fastcall FUN_00502ba0(int param_1)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_004f3390(*(void **)(param_1 + 0x100),*(float **)(param_1 + 0x108),(float *)(param_1 + 0x58),
               (float *)(param_1 + 0x38),&local_10);
  FUN_004f3390(*(void **)(param_1 + 0x104),*(float **)(param_1 + 0x10c),(float *)(param_1 + 0x68),
               (float *)(param_1 + 0x48),&local_20);
  *(float *)(param_1 + 0xb8) = local_20 - local_10;
  *(float *)(param_1 + 0xbc) = local_1c - local_c;
  *(float *)(param_1 + 0xc0) = local_18 - local_8;
  return;
}



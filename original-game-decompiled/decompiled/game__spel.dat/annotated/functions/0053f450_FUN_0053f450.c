
/* ==== FUN_0053f450 @ 0053f450 ==== 
 * signature: undefined __fastcall FUN_0053f450(int param_1)
 * body: 0053f450-0053f4c9
 */

void __fastcall FUN_0053f450(int param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_0053f150(*(double *)(param_1 + 0x58),*(double *)(param_1 + 0x60),
                       *(double *)(param_1 + 0x68),*(double *)(param_1 + 0x70),
                       *(double *)(param_1 + 0x78));
  *(double *)(param_1 + 0x80) = (double)fVar1;
  fVar1 = FUN_0053f150(*(double *)(param_1 + 0x30),*(double *)(param_1 + 0x38),
                       *(double *)(param_1 + 0x40),*(double *)(param_1 + 0x48),
                       *(double *)(param_1 + 0x50));
  *(double *)(param_1 + 0x88) = (double)fVar1;
  *(double *)(param_1 + 0x98) = (double)(fVar1 + (float10)*(double *)(param_1 + 0x80));
  return;
}



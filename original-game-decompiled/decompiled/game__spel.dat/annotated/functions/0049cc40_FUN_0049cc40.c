
/* ==== FUN_0049cc40 @ 0049cc40 ==== 
 * signature: undefined __fastcall FUN_0049cc40(int param_1)
 * body: 0049cc40-0049ccde
 */

void __fastcall FUN_0049cc40(int param_1)

{
  float fVar1;
  float10 fVar2;
  longlong lVar3;
  
  lVar3 = __ftol();
  fVar1 = *(float *)(DAT_0073b530 + ((uint)lVar3 & DAT_005b23bc) * 4);
  *(float *)(param_1 + 0xc) = fVar1 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x10) = fVar1 * *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x14) = fVar1 * *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x60);
  fVar2 = FUN_004a6800(0x7128b0);
  fVar2 = fVar2 + (float10)*(float *)(param_1 + 100);
  *(float *)(param_1 + 100) = (float)fVar2;
  if ((float10)*(float *)(param_1 + 0x74) <= fVar2) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}



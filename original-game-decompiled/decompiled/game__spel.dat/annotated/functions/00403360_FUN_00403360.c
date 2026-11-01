
/* ==== FUN_00403360 @ 00403360 ==== 
 * signature: undefined __cdecl FUN_00403360(int param_1, float param_2, float param_3, float param_4)
 * body: 00403360-00403430
 */

void __cdecl FUN_00403360(int param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  FUN_004031f0((&DAT_005ce9e8)[param_1 * 0xa5],param_2,param_3,param_4);
  if (*(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) < 40.0) {
    fVar1 = FUN_004a6800(0x7128b0);
    FUN_00402f00(&DAT_005cea7c + param_1 * 0x294,(float)(fVar1 * (float10)75.0));
    FUN_00402e40(&DAT_005cea7c + param_1 * 0x294,0.0);
    return;
  }
  if ((-1 < param_1) && (param_1 < 6)) {
    fVar1 = FUN_004a6800(0x7128b0);
    FUN_00402e80(&DAT_005cea7c + param_1 * 0x294,(float)(fVar1 * (float10)200.0));
    return;
  }
  *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) = 0x42200000;
  return;
}



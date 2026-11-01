
/* ==== FUN_00414320 @ 00414320 ==== 
 * signature: undefined __cdecl FUN_00414320(float param_1, int param_2, int param_3, float param_4)
 * body: 00414320-00414442
 */

void __cdecl FUN_00414320(float param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  fVar2 = 30.0 - ABS(param_4) * 0.18;
  iVar3 = (int)param_1 * 0x38;
  iVar1 = (&DAT_005d1ba8)[(int)param_1 * 0xe];
  param_1 = fVar2;
  if (fVar2 < 5.0) {
    param_1 = 5.0;
  }
  if (*(float *)(&DAT_005d1bcc + iVar3) < param_1) {
    param_1 = *(float *)(&DAT_005d1bcc + iVar3);
  }
  if (param_3 != -1) {
    fVar4 = FUN_00422c00(iVar1,param_3);
    if (fVar4 < (float10)param_1) {
      param_1 = (float)fVar4;
    }
    fVar4 = FUN_00422c00(iVar1,*(int *)(iVar1 * 0xf0 + 0x3c + DAT_00715e50));
    if (fVar4 < (float10)param_1) {
      param_1 = (float)fVar4;
    }
  }
  if (param_1 <= *(float *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50)) {
    if (param_1 + 4.0 <= *(float *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50)) {
      *(undefined4 *)(param_2 + 8) = 0x42c80000;
      *(undefined4 *)(param_2 + 4) = 0;
      return;
    }
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0x42c80000;
    return;
  }
  *(undefined4 *)(param_2 + 4) = 0x42c80000;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}



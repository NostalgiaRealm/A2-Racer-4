
/* ==== FUN_0046f330 @ 0046f330 ==== 
 * signature: longlong __stdcall FUN_0046f330(float param_1, char param_2, char param_3)
 * body: 0046f330-0046f522
 */

longlong FUN_0046f330(float param_1,char param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  float local_14;
  
  fVar3 = DAT_006fbabc;
  iVar4 = (int)param_1 * 0xf0;
  param_1 = DAT_006fbabc;
  fVar1 = *(float *)(iVar4 + DAT_00715e50 + 0xc4);
  fVar2 = ABS(fVar1);
  local_14 = 100.0 - (fVar2 + fVar2);
  if (local_14 < 50.0) {
    local_14 = 50.0;
  }
  fVar1 = 1.0 - fVar1 * 0.007142857;
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      if (0.0 < DAT_006fbabc) {
        fVar5 = FUN_004a6800(0x7128b0);
        param_1 = (float)((float10)fVar3 - fVar5 * (float10)400.0);
        FUN_00402de0(&DAT_006fbabc,param_1);
        if (DAT_006fbabc < 0.0) {
          FUN_00402de0(&DAT_006fbabc,0.0);
        }
      }
      if (0.0 <= DAT_006fbabc) goto LAB_0046f512;
      fVar5 = FUN_004a6800(0x7128b0);
      FUN_00402de0(&DAT_006fbabc,(float)(fVar5 * (float10)400.0 + (float10)param_1));
      if (DAT_006fbabc <= 0.0) goto LAB_0046f512;
      local_14 = 0.0;
    }
    else {
      fVar5 = FUN_004a6800(0x7128b0);
      FUN_00402de0(&DAT_006fbabc,(float)(fVar5 * (float10)fVar1 * (float10)200.0 + (float10)fVar3));
      if (DAT_006fbabc <= local_14) goto LAB_0046f512;
    }
  }
  else {
    fVar5 = FUN_004a6800(0x7128b0);
    FUN_00402de0(&DAT_006fbabc,(float)((float10)fVar3 - fVar5 * (float10)fVar1 * (float10)200.0));
    local_14 = -local_14;
    if (local_14 <= DAT_006fbabc) goto LAB_0046f512;
  }
  FUN_00402de0(&DAT_006fbabc,local_14);
LAB_0046f512:
  lVar6 = __ftol();
  return lVar6;
}




/* ==== FUN_00432430 @ 00432430 ==== 
 * signature: undefined __stdcall FUN_00432430(void)
 * body: 00432430-00432544
 */

void FUN_00432430(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  FUN_004323b0();
  iVar1 = FUN_00431c20(5);
  do {
    if (iVar1 < 0) {
      return;
    }
    switch(iVar1) {
    case 0:
      fVar4 = 1e-06;
      fVar3 = 1e-06;
      pfVar2 = (float *)(&DAT_006c1c8c + (DAT_006fbb40 + DAT_006fba5c * 0x3c) * 4);
      break;
    case 1:
      fVar4 = 0.005;
      fVar3 = 0.005;
      pfVar2 = (float *)(&DAT_006c1c98 + (DAT_006fbb40 + DAT_006fba5c * 0x3c) * 4);
      break;
    case 2:
      fVar4 = 5.0;
      fVar3 = 5.0;
      pfVar2 = (float *)(&DAT_006c1ca4 + (DAT_006fbb40 + DAT_006fba5c * 0x3c) * 4);
      break;
    case 3:
      FUN_004321a0();
      goto switchD_00432450_default;
    case 4:
      fVar4 = 100.0;
      fVar3 = 100.0;
      pfVar2 = (float *)(&DAT_006c1cf8 + (DAT_006fbb40 + DAT_006fba5c * 0x3c) * 4);
      break;
    default:
      goto switchD_00432450_default;
    }
    FUN_00431b40(pfVar2,fVar3,fVar4);
switchD_00432450_default:
    FUN_004323b0();
    iVar1 = FUN_00431c20(5);
  } while( true );
}



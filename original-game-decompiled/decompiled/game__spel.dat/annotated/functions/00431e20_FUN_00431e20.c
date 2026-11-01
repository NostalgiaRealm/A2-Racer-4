
/* ==== FUN_00431e20 @ 00431e20 ==== 
 * signature: undefined __stdcall FUN_00431e20(void)
 * body: 00431e20-00431ff1
 */

void FUN_00431e20(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  FUN_00431d50();
  iVar1 = FUN_00431c20(9);
  do {
    if (iVar1 < 0) {
      return;
    }
    switch(iVar1) {
    case 0:
      fVar4 = 50.0;
      fVar3 = 50.0;
      pfVar2 = (float *)(&DAT_006c1c68 + DAT_006fba5c * 0xf0);
      break;
    case 1:
      fVar4 = 0.05;
      fVar3 = 0.05;
      pfVar2 = (float *)(&DAT_006c1c6c + DAT_006fba5c * 0xf0);
      break;
    case 2:
      fVar4 = 0.05;
      fVar3 = 0.05;
      pfVar2 = (float *)(&DAT_006c1c70 + DAT_006fba5c * 0xf0);
      break;
    case 3:
      fVar4 = 0.01;
      fVar3 = 0.01;
      pfVar2 = (float *)(&DAT_006c1c74 + DAT_006fba5c * 0xf0);
      break;
    case 4:
      fVar4 = 0.05;
      fVar3 = 0.05;
      pfVar2 = (float *)(&DAT_006c1c78 + DAT_006fba5c * 0xf0);
      break;
    case 5:
      fVar4 = 0.05;
      fVar3 = 0.05;
      pfVar2 = (float *)(&DAT_006c1c7c + DAT_006fba5c * 0xf0);
      break;
    case 6:
      fVar4 = 0.1;
      fVar3 = 0.1;
      pfVar2 = (float *)(&DAT_006c1c80 + DAT_006fba5c * 0xf0);
      break;
    case 7:
      fVar4 = 0.005;
      fVar3 = 0.005;
      pfVar2 = (float *)(&DAT_006c1c84 + DAT_006fba5c * 0xf0);
      break;
    case 8:
      fVar4 = 250.0;
      fVar3 = 250.0;
      pfVar2 = (float *)(&DAT_006c1c88 + DAT_006fba5c * 0xf0);
      break;
    default:
      goto switchD_00431e40_default;
    }
    FUN_00431b40(pfVar2,fVar3,fVar4);
switchD_00431e40_default:
    FUN_00431d50();
    iVar1 = FUN_00431c20(9);
  } while( true );
}



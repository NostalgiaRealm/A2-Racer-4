
/* ==== FUN_00432760 @ 00432760 ==== 
 * signature: undefined __stdcall FUN_00432760(void)
 * body: 00432760-0043286d
 */

void FUN_00432760(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  FUN_004325d0();
  iVar1 = FUN_00431c20(4);
  do {
    if (iVar1 < 0) {
      return;
    }
    switch(iVar1) {
    case 0:
      fVar4 = 1.0;
      fVar3 = 1.0;
      pfVar2 = (float *)(&DAT_006c1d04 + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4);
      break;
    case 1:
      fVar4 = 0.5;
      fVar3 = 0.5;
      pfVar2 = (float *)(&DAT_006c1d10 + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4);
      break;
    case 2:
      fVar4 = 0.5;
      fVar3 = 0.5;
      pfVar2 = (float *)(&DAT_006c1d1c + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4);
      break;
    case 3:
      fVar4 = 0.005;
      fVar3 = 0.005;
      pfVar2 = (float *)(&DAT_006c1d4c + (DAT_006fbb44 + DAT_006fba5c * 0x3c) * 4);
      break;
    default:
      goto switchD_00432780_default;
    }
    FUN_00431b40(pfVar2,fVar3,fVar4);
switchD_00432780_default:
    FUN_004325d0();
    iVar1 = FUN_00431c20(4);
  } while( true );
}



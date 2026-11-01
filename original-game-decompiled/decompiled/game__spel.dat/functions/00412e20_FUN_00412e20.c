
/* ==== FUN_00412e20 @ 00412e20 ==== 
 * signature: undefined __cdecl FUN_00412e20(int param_1)
 * body: 00412e20-00412fe7
 */

void __cdecl FUN_00412e20(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  iVar1 = param_1;
  iVar5 = *(int *)(param_1 * 0xf0 + 0x34 + DAT_00715e50) + -2;
  if (iVar5 < 0) {
    iVar5 = iVar5 + DAT_00715f04;
  }
  piVar2 = &DAT_005cf960;
  do {
    if (*piVar2 == param_1) {
      return;
    }
    piVar2 = piVar2 + 0xa5;
  } while ((int)piVar2 < 0x5d15bd);
  iVar4 = 0;
  if (0 < DAT_005d2ab0) {
    piVar2 = &DAT_005ce9e8;
    do {
      iVar3 = *piVar2 * 0xf0 + DAT_00715e50;
      if ((iVar5 == *(int *)(iVar3 + 0x34)) && ((float)piVar2[0x24] <= *(float *)(iVar3 + 0xc4))) {
        FUN_0040d6f0(param_1,(&DAT_005ce9e8)[iVar4 * 0xa5]);
        return;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 0xa5;
    } while (iVar4 < DAT_005d2ab0);
  }
  if ((iVar5 == DAT_006fba7c) && (FUN_0040e340(param_1,&param_1,&local_4), param_1 != 0)) {
    switch(param_1) {
    case 4:
      if (DAT_005d1b3c < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) {
        FUN_0040d6f0(iVar1,DAT_006fba58);
        return;
      }
      break;
    case 5:
      if (DAT_005d1b40 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) {
        FUN_0040d6f0(iVar1,DAT_006fba58);
        return;
      }
      break;
    case 6:
      if (DAT_005d1b44 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) {
        FUN_0040d6f0(iVar1,DAT_006fba58);
        return;
      }
      break;
    case 8:
      if (DAT_005d1b48 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) {
        FUN_0040d6f0(iVar1,DAT_006fba58);
      }
    }
  }
  return;
}



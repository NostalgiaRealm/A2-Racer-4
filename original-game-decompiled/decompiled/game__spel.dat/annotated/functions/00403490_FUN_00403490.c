
/* ==== FUN_00403490 @ 00403490 ==== 
 * signature: float10 __cdecl FUN_00403490(int param_1)
 * body: 00403490-0040374a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00403490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  longlong lVar7;
  float local_10 [4];
  
  iVar3 = DAT_006fb958;
  local_10[0] = DAT_005d1b54;
  local_10[1] = (float)DAT_005d1b58;
  local_10[2] = (float)DAT_005d1b4c;
  local_10[3] = (float)DAT_005d1b50;
  if ((5 < param_1) && (param_1 < 0x13)) goto LAB_00403708;
  if (DAT_006fb958 == 0) {
    lVar7 = __ftol();
    iVar1 = (int)lVar7;
LAB_004034fe:
    if ((_DAT_005d1b68 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50)) &&
       (iVar2 = FUN_00407d20(*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50),
                             *(int *)(DAT_006fba58 * 0xf0 + DAT_00715e50 + 0x34)),
       iVar3 = DAT_006fb958, _DAT_005d1b64 < (float)iVar2)) {
      fVar6 = (float10)*(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50) -
              (float10)local_10[DAT_006fb958];
LAB_00403621:
      if ((float10)10.0 <= fVar6) {
        return fVar6;
      }
      return (float10)10.0;
    }
    if ((iVar3 != 2) &&
       ((_DAT_005d1b68 < *(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50) &&
        (iVar3 = FUN_00407d20(*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50)
                              ,*(int *)(DAT_006fba58 * 0xf0 + DAT_00715e50 + 0x34)), iVar1 < iVar3))
       )) {
      fVar6 = (float10)*(float *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50) -
              (float10)local_10[DAT_006fb958 + 2];
      goto LAB_00403621;
    }
  }
  else {
    lVar7 = __ftol();
    iVar1 = (int)lVar7;
    if (iVar3 != 2) goto LAB_004034fe;
  }
  if (((int)(&DAT_005973c8)[param_1 * 0x16] < DAT_006fbaa4) && (iVar3 = 0, 0 < DAT_005d2ab0)) {
    piVar5 = &DAT_005973c8;
    piVar4 = &DAT_005ce9e8;
    iVar1 = DAT_00715e50;
    do {
      if (*piVar5 == (&DAT_005973c8)[param_1 * 0x16] + 1) {
        if (*(float *)(*piVar4 * 0xf0 + 0xc4 + iVar1) < 20.0) break;
        iVar2 = FUN_004a7200(*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + iVar1),
                             *(int *)(*piVar4 * 0xf0 + iVar1 + 0x34));
        iVar1 = DAT_00715e50;
        if ((int)(&DAT_005d2bb0)[*piVar5] < iVar2) {
          return (float10)*(float *)((&DAT_005ce9e8)[iVar3 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50) -
                 (float10)5.0;
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0xa5;
      piVar5 = piVar5 + 0x16;
    } while (iVar3 < DAT_005d2ab0);
  }
LAB_00403708:
  return (float10)3.4028235e+38;
}



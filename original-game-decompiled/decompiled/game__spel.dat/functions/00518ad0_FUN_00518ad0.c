
/* ==== FUN_00518ad0 @ 00518ad0 ==== 
 * signature: undefined __stdcall FUN_00518ad0(void)
 * body: 00518ad0-00518fc9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00518ad0(void)

{
  double *pdVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  DAT_0074c660 = 0xffffffff;
  DAT_0074c730 = 0;
  DAT_0074c648 = 0;
  DAT_0074c64c = 0;
  DAT_0074c644 = 0;
  DAT_0074c6d4 = 0;
  DAT_0074c6d0 = 0;
  DAT_0074c670 = 0;
  iVar3 = DAT_0074be50;
  if (DAT_0074be50 < 1) {
    if (DAT_0074be50 < 0) {
      iVar3 = -DAT_0074be50;
      goto LAB_00518b28;
    }
  }
  else {
LAB_00518b28:
    DAT_0074be54 = (double *)FUN_0051a050(iVar3 + -1);
  }
  iVar3 = DAT_0074be5c;
  if (DAT_0074be5c < 1) {
    if (DAT_0074be5c < 0) {
      iVar3 = -DAT_0074be5c;
      goto LAB_00518b4a;
    }
  }
  else {
LAB_00518b4a:
    DAT_0074be60 = (double *)FUN_0051a050(iVar3 + -1);
  }
  if (((DAT_0074be50 != 0) &&
      ((DAT_0074be54 < DAT_0074c048 ||
       (pdVar1 = (double *)FUN_0051a050(DAT_0074c044 + -1), pdVar1 < DAT_0074be54)))) ||
     ((DAT_0074be5c != 0 &&
      ((DAT_0074be60 < DAT_0074c048 ||
       (pdVar1 = (double *)FUN_0051a050(DAT_0074c044 + -1), pdVar1 < DAT_0074be60)))))) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__either_QGn_or_005bbf94);
    FUN_0051e8e0(1,(int *)0x0);
  }
  piStack_14 = (int *)FUN_0052af40((uint)DAT_0074c048,DAT_0074c044,DAT_0074c03c);
  if (DAT_0074bfd0 != 0) {
    FUN_0052bfa0((int)DAT_0074c048,DAT_0074c044,DAT_0074c03c,DAT_0074c4d8,DAT_0074c4dc,DAT_0074c4a0,
                 DAT_0074c4a4,DAT_0074c4b0,DAT_0074c4b4);
  }
  FUN_005298f0();
  if (((DAT_0074be40 != 0) &&
      (8.988465674311579e+307 < *(double *)(DAT_0074c468 + -8 + DAT_0074c03c * 8))) &&
     (*(double *)(DAT_0074c46c + -8 + DAT_0074c03c * 8) < -8.988465674311579e+307)) {
    iVar3 = 0x1b;
    piVar2 = &DAT_0074bf74;
    do {
      if (((*piVar2 == 7) && (DAT_0074be48 < 0)) && ((DAT_0074be58 == 0 && (DAT_0074bfe0 == 0))))
      break;
      iVar3 = iVar3 + -1;
      bVar4 = piVar2 != &DAT_0074bf08;
      piVar2 = piVar2 + -1;
    } while (bVar4);
    if (iVar3 < 0) {
      if (DAT_0074c00c == 0) {
        *(double *)(DAT_0074c468 + -8 + DAT_0074c03c * 8) = _DAT_0074c478 * -2.0;
        if (DAT_0074be58 == 0) {
          DAT_0074bfe0 = 1;
        }
      }
      else {
        *(double *)(DAT_0074c46c + -8 + DAT_0074c03c * 8) = _DAT_0074c478 + _DAT_0074c478;
        DAT_0074be58 = 1;
      }
    }
  }
  piStack_18 = (int *)FUN_005192e0(DAT_0074c03c,piStack_14,DAT_0074c048,DAT_0074c044);
  FUN_00518fd0(piStack_18);
  FUN_00525f40((int)piStack_18,(int)DAT_0074c048,DAT_0074c044);
  if (DAT_0074befc == 0) {
    if ((DAT_0074bff0 == 0) && (DAT_0074be68 == 0)) goto LAB_00518de1;
LAB_00518da4:
    FUN_00558953(DAT_0074c5ec,(byte *)s_Trace_level__d_for__s____s_005bbf74);
  }
  else if ((DAT_0074bff0 != 0) || (DAT_0074be68 != 0)) goto LAB_00518da4;
  FUN_00558953(DAT_0074c5ec,(byte *)s_Options_selected_for_qhull__s____005bbf50);
LAB_00518de1:
  FUN_0051a5a0(0);
  DAT_0074c608 = DAT_0074c600;
  FUN_00518910();
  if (DAT_0074bed8 != 0) {
    _DAT_0074c488 = DAT_0074be30;
    _DAT_0074c48c = DAT_0074be34;
    _DAT_0074c480 = DAT_0074bea0;
    _DAT_0074c484 = DAT_0074bea4;
  }
  if (DAT_0074bec8 != 0) {
    if ((0 < DAT_0074be5c) && (DAT_0074be98 != 0)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error___Qg_QVn___onl_005bbec8);
      FUN_0051e8e0(1,(int *)0x0);
    }
    if (((DAT_0074be58 == 0) && (DAT_0074be50 == 0)) &&
       ((DAT_0074be90 != 0 || ((DAT_0074bed8 != 0 || (DAT_0074be60 == (double *)0x0)))))) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error___Qg___ONLYgoo_005bbe3c);
      FUN_0051e8e0(1,(int *)0x0);
    }
    if (((0 < DAT_0074be5c) && (DAT_0074be98 == 0)) &&
       (iVar3 = FUN_00519690((int)DAT_0074be60,(int)piStack_18), iVar3 == 0)) {
      piVar2 = (int *)FUN_00527cb0(DAT_0074be60,DAT_0074c600,(double *)(aiStack_c + 1),aiStack_c,
                                   &iStack_10);
      DAT_0074c960 = DAT_0074c960 + iStack_10;
      if (aiStack_c[0] == 0) {
        FUN_005164c0((uint)DAT_0074be60);
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__point_for_QV__005bbde0);
        FUN_0051e8e0(1,(int *)0x0);
      }
      iVar3 = FUN_00524d10(DAT_0074be60,piVar2,0);
      if (iVar3 == 0) {
        FUN_00514ba0((int *)&piStack_18);
        FUN_00514ba0((int *)&piStack_14);
        return;
      }
    }
    FUN_00518430(DAT_0074c600,0);
  }
  FUN_00514ba0((int *)&piStack_18);
  FUN_00514ba0((int *)&piStack_14);
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_initbuild__initial_hull_creat_005bbda4);
  }
  return;
}




/* ==== FUN_00524d10 @ 00524d10 ==== 
 * signature: undefined4 __cdecl FUN_00524d10(double * param_1, int * param_2, int param_3)
 * body: 00524d10-005251b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00524d10(double *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  double dStack_20;
  int iStack_14;
  double local_10;
  undefined4 uStack_8;
  
  DAT_0074c670 = 0;
  iVar3 = FUN_005164c0((uint)param_1);
  if (iVar3 == -1) {
    FUN_00514020(&DAT_0074c6ec,(int)param_1);
  }
  if (param_2 == (int *)0x0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_addpoint__NULL_facet__Use_qh__005c09f4);
    FUN_0051e8e0(5,(int *)0x0);
  }
  if (param_3 != 0) {
    param_2 = FUN_00527570(param_1,param_2,0,0,0,(double *)&uStack_8,&iStack_34,&iStack_28);
    DAT_0074cc48 = DAT_0074cc48 + iStack_28;
    if (iStack_34 == 0) {
      DAT_0074cbe8 = DAT_0074cbe8 + 1;
      param_2[0x14] = param_2[0x14] | 0x20000;
      FUN_00526330(param_1,param_2,&uStack_8);
      return 1;
    }
  }
  FUN_005255c0(param_1,(int)param_2);
  if ((DAT_0074bfe8 < 0) && (DAT_0074c660 == -1 - DAT_0074bfe8)) {
    param_2[0x14] = param_2[0x14] | 0x20000;
    return 0;
  }
  FUN_00525900(param_1,(uint)param_2,&iStack_24,&local_30);
  iVar3 = DAT_0074c644;
  if (((DAT_0074bec8 != 0) && (iStack_24 + local_30 == 0)) && (DAT_0074c664 == 0)) {
    DAT_0074cbd8 = DAT_0074cbd8 + 1;
    param_2[0x14] = param_2[0x14] | 0x20000;
    FUN_0051a5a0(0);
    return 1;
  }
  DAT_0074cc88 = DAT_0074cc88 + 1;
  piVar4 = FUN_005196c0((uint)param_1);
  FUN_00515820();
  iStack_2c = DAT_0074c644 - iVar3;
  dStack_20 = (double)CONCAT44(dStack_20._4_4_,DAT_0074c634 - DAT_0074c614);
  local_10 = (double)iStack_2c -
             ((double)(DAT_0074c634 - DAT_0074c614) * (double)DAT_0074c03c) / (double)DAT_0074c638;
  _DAT_0074cb98 = _DAT_0074cb98 + local_10;
  _DAT_0074cba0 = local_10 * local_10 + _DAT_0074cba0;
  if (DAT_0074bec8 != 0) {
    iVar3 = FUN_00518430((int)DAT_0074c60c,local_30);
    if ((iVar3 == 0) && (DAT_0074c664 == 0)) {
      DAT_0074c664 = 0;
      for (piVar2 = DAT_0074c60c; (piVar2 != (int *)0x0 && (piVar2[0xc] != 0));
          piVar2 = (int *)piVar2[0xc]) {
        FUN_005152b0(piVar2);
      }
      FUN_005182a0(piVar4);
      FUN_0051a5a0(1);
      DAT_0074cbe0 = DAT_0074cbe0 + 1;
      param_2[0x14] = param_2[0x14] | 0x20000;
      return 1;
    }
    if (DAT_0074bec8 != 0) {
      FUN_00514f50();
    }
  }
  FUN_00515fb0();
  FUN_00516620();
  if ((DAT_0074bfe4 != 0) && (DAT_0074c660 == DAT_0074bfe4 + -1)) {
    param_2[0x14] = param_2[0x14] | 0x20000;
    return 0;
  }
  if ((DAT_0074bed8 == 0) && (DAT_0074be90 == 0)) {
    if (DAT_0074be20 == 0) goto LAB_00524fdc;
  }
  else {
    FUN_00533e60(piVar4,DAT_0074bea0,DAT_0074bea4,DAT_0074be30,DAT_0074be34);
    piVar4 = DAT_0074c60c;
    if (DAT_0074cd50 < 0x33) {
      do {
        if ((piVar4 == (int *)0x0) || ((int *)piVar4[0xc] == (int *)0x0)) goto LAB_00524fdc;
        puVar1 = (uint *)(piVar4 + 0x14);
        piVar4 = (int *)piVar4[0xc];
      } while ((*puVar1 & 0x1000) != 0);
    }
  }
  DAT_0074c694 = 1;
LAB_00524fdc:
  FUN_00526820(0,&iStack_14);
  DAT_0074cc60 = DAT_0074cc60 + 1;
  DAT_0074c694 = 0;
  DAT_0074c698 = 0;
  dStack_20 = (double)iStack_14 -
              ((double)(DAT_0074c044 - DAT_0074c638) * (double)DAT_0074c03c) / (double)DAT_0074c638;
  _DAT_0074cc68 = _DAT_0074cc68 + dStack_20;
  _DAT_0074cc70 = dStack_20 * dStack_20 + _DAT_0074cc70;
  FUN_00515410();
  if (DAT_0074cad0 < DAT_0074c638) {
    DAT_0074cad0 = DAT_0074c638;
  }
  DAT_0074c690 = 0;
  if (3 < DAT_0074be68) {
    FUN_0051ecb0(DAT_0074c60c,0,1);
  }
  if (DAT_0074be2c != 0) {
    piVar4 = DAT_0074c60c;
    if (DAT_0074c634 < 0x32) {
      piVar4 = DAT_0074c600;
    }
    FUN_00517af0(piVar4);
  }
  if ((0 < DAT_0074bfe8) && (DAT_0074c660 == DAT_0074bfe8 + -1)) {
    return 0;
  }
  FUN_0051a5a0(1);
  if (1 < DAT_0074be68) {
    FUN_005164c0((uint)param_1);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_addpoint__added_p_d_new_facet_005c09a8);
  }
  if ((3 < DAT_0074c03c) && (iVar3 = FUN_005164c0((uint)param_1), DAT_0074bff8 == iVar3)) {
    DAT_0074be68 = 0;
    DAT_0074c788 = 0;
  }
  return 1;
}



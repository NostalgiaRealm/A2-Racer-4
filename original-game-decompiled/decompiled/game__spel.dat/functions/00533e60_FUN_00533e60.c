
/* ==== FUN_00533e60 @ 00533e60 ==== 
 * signature: undefined __cdecl FUN_00533e60(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 00533e60-0053402c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00533e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int local_4;
  
  local_4 = 0;
  if ((DAT_0074c464 == 0) || (iVar2 = FUN_005346b0(0), iVar2 == 0)) {
    if (1 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_premerge__premerge_centrum__2_005c5538);
    }
    if ((3 < DAT_0074be68) && (DAT_0074c634 < 0x32)) {
      FUN_0051a4b0();
    }
    _DAT_0074c484 = param_3;
    _DAT_0074c480 = param_2;
    _DAT_0074c488 = param_4;
    _DAT_0074c48c = param_5;
    DAT_0074c6e4 = FUN_00514b50(DAT_0074c5fc);
    DAT_0074c6e0 = FUN_00514b50(DAT_0074c5fc);
    if (DAT_0074c03c < 3) {
      FUN_005368e0(DAT_0074c60c,&local_4);
    }
    else {
      FUN_00535e80((int)DAT_0074c60c);
      FUN_005368e0(DAT_0074c60c,&local_4);
      FUN_00535580(&local_4);
      for (piVar1 = DAT_0074c60c; (piVar1 != (int *)0x0 && (piVar1[0xc] != 0));
          piVar1 = (int *)piVar1[0xc]) {
        if ((piVar1[0x14] & 0x201000U) == 0) {
          FUN_00534b60((int)piVar1,0);
        }
      }
      iVar2 = FUN_005361a0();
      if (iVar2 != 0) {
        local_4 = 1;
      }
    }
    FUN_00535350((int)DAT_0074c60c,&local_4);
    if ((DAT_0074be90 == 0) || (DAT_0074cd50 != 0)) {
      DAT_0074cc80 = DAT_0074cc80 + 1;
      DAT_0074c6b0 = 0;
      FUN_00535a60((int)DAT_0074c60c);
      FUN_00534240(local_4,0);
    }
    FUN_00514ba0(&DAT_0074c6e0);
    FUN_00514ba0(&DAT_0074c6e4);
  }
  return;
}




/* ==== FUN_00534030 @ 00534030 ==== 
 * signature: undefined __cdecl FUN_00534030(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)
 * body: 00534030-0053423f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00534030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_4;
  
  local_4 = 0;
  if ((DAT_0074bfbc != 0) || (DAT_0074be68 != 0)) {
    FUN_005255c0((double *)0x0,0);
    FUN_00526a80(DAT_0074c5ec);
    if (DAT_0074bf80 != 0) {
      FUN_005245a0(DAT_0074c5ec);
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s__s_with__C__2g__and__A__2g__005c55b4);
  }
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_postmerge__postmerge__test_vn_005c5584);
  }
  _DAT_0074c484 = param_3;
  _DAT_0074c480 = param_2;
  _DAT_0074c488 = param_4;
  _DAT_0074c48c = param_5;
  DAT_0074c6b0 = 1;
  DAT_0074c6e4 = FUN_00514b50(DAT_0074c5fc);
  DAT_0074c6e0 = FUN_00514b50(DAT_0074c5fc);
  if (DAT_0074c610 != DAT_0074c600) {
    DAT_0074c690 = 1;
    DAT_0074c60c = DAT_0074c600;
    DAT_0074c610 = DAT_0074c600;
    for (iVar2 = DAT_0074c600;
        (DAT_0074c630 = DAT_0074c628, piVar3 = DAT_0074c628, iVar2 != 0 &&
        (*(int *)(iVar2 + 0x30) != 0)); iVar2 = *(int *)(iVar2 + 0x30)) {
      uVar1 = *(uint *)(iVar2 + 0x50);
      *(uint *)(iVar2 + 0x50) = uVar1 | 0x200;
      if ((uVar1 & 0x1000) == 0) {
        *(uint *)(iVar2 + 0x50) = uVar1 | 0x10000200;
      }
      DAT_0074cc78 = DAT_0074cc78 + 1;
    }
    for (; (piVar3 != (int *)0x0 && (*piVar3 != 0)); piVar3 = (int *)*piVar3) {
      piVar3[5] = piVar3[5] | 0x10000000;
    }
    piVar3 = DAT_0074c628;
    if (DAT_0074c460 != 0) {
      for (; (piVar3 != (int *)0x0 && (*piVar3 != 0)); piVar3 = (int *)*piVar3) {
        piVar3[5] = piVar3[5] | 0x4000000;
      }
      if ((DAT_0074be90 != 0) && (DAT_0074c03c < 6)) {
        FUN_00538390();
      }
    }
    if ((DAT_0074bed8 == 0) && (DAT_0074be90 == 0)) {
      FUN_00535350(DAT_0074c60c,&local_4);
    }
  }
  FUN_00535a60(DAT_0074c60c);
  FUN_00534240(0,param_6);
  FUN_00514ba0(&DAT_0074c6e0);
  FUN_00514ba0(&DAT_0074c6e4);
  return;
}



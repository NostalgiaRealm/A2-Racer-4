
/* ==== FUN_0052ac30 @ 0052ac30 ==== 
 * signature: undefined __stdcall FUN_0052ac30(void)
 * body: 0052ac30-0052aedd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ac30(void)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack_20;
  int iStack_1c;
  double dStack_18;
  double dStack_10;
  
  if (DAT_0074c050 == (double *)0x0) {
    DAT_0074c050 = DAT_0074c048;
    DAT_0074c054 = DAT_0074c04c;
    DAT_0074c048 = _malloc(DAT_0074c03c * DAT_0074c044 * 8);
    if (DAT_0074c048 == (double *)0x0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__insufficient_memory_005c2578);
      FUN_0051e8e0(4,(int *)0x0);
    }
    DAT_0074c04c = 1;
    if (_DAT_0074c668 == 0.0) {
      fVar5 = FUN_00529720((uint)DAT_0074c050,DAT_0074c044,DAT_0074c03c);
      _DAT_0074c668 = (double)fVar5;
      FUN_0051df40(s_QJoggle_005bcf14,0,0x74c668);
    }
  }
  else {
    if ((((DAT_0074bfc4 == 0) && (2 < DAT_0074c658)) &&
        (dVar1 = _DAT_0074c4b0 * 0.01, _DAT_0074c668 < dVar1)) &&
       (_DAT_0074c668 = _DAT_0074c668 * 10.0, dVar1 < _DAT_0074c668)) {
      _DAT_0074c668 = dVar1;
    }
    FUN_0051df40(s_QJoggle_005bcf14,0,0x74c668);
  }
  if (1 < DAT_0074c658) {
    dVar1 = _DAT_0074c4b0 * 0.25;
    if (dVar1 < 0.1) {
      dVar1 = 0.1;
    }
    if (dVar1 < _DAT_0074c668) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__the_current_joggle_f_005c24e0);
      FUN_0051e8e0(5,(int *)0x0);
    }
  }
  uStack_20 = FUN_0052bd10();
  FUN_0051df40(s__joggle_seed_005c24d0,(int)&uStack_20,0);
  if (DAT_0074be68 != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_joggleinput__joggle_input_by___005c249c);
  }
  dStack_18 = _DAT_0074c668 * 9.313225754828403e-10;
  dStack_10 = -_DAT_0074c668;
  pdVar2 = DAT_0074c048;
  pdVar3 = DAT_0074c050;
  for (iVar4 = DAT_0074c03c * DAT_0074c044; iVar4 != 0; iVar4 = iVar4 + -1) {
    iStack_1c = FUN_0052bd10();
    *pdVar2 = (double)iStack_1c * dStack_18 + dStack_10 + *pdVar3;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  if (DAT_0074be40 != 0) {
    DAT_0074c728 = 0xffffffff;
    DAT_0074c72c = 0x7fefffff;
    DAT_0074c720 = 0xffffffff;
    DAT_0074c724 = 0x7fefffff;
    DAT_0074c718 = 0xffffffff;
    DAT_0074c71c = 0x7fefffff;
    FUN_0052c400(DAT_0074c03c,DAT_0074c044,DAT_0074c048);
  }
  return;
}



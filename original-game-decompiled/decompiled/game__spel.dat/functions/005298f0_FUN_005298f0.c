
/* ==== FUN_005298f0 @ 005298f0 ==== 
 * signature: undefined __stdcall FUN_005298f0(void)
 * body: 005298f0-00529ee6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005298f0(void)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  
  FUN_0051df40(s__max_width_005c2238,0,0x74c4b0);
  if (DAT_0074bfd4 == 0) {
    fVar3 = FUN_0052a020(DAT_0074c03c,DAT_0074c498,DAT_0074c49c,DAT_0074c4a8,DAT_0074c4ac);
    _DAT_0074c490 = (double)fVar3;
    if (DAT_0074bf98 != 0) {
      _DAT_0074c490 = _DAT_0074bfa0 * (double)CONCAT44(DAT_0074c49c,DAT_0074c498) + _DAT_0074c490;
    }
    FUN_0051df40(s_Error_roundoff_005c2228,0,0x74c490);
  }
  _DAT_0074c4c0 = (double)CONCAT44(DAT_0074c49c,DAT_0074c498) * 2.2250738585072014e-308;
  DAT_0074c4b8 = 0;
  DAT_0074c4bc = 0x100000;
  _DAT_0074c4c8 = SQRT((double)DAT_0074c03c * 2.2250738585072014e-308);
  _DAT_0074c4d0 = _DAT_0074c4c8 * (double)CONCAT44(DAT_0074c49c,DAT_0074c498);
  _DAT_0074c478 = (double)DAT_0074c03c * 2.242650509742816e-16;
  if (DAT_0074bf98 != 0) {
    _DAT_0074c478 = _DAT_0074c478 + _DAT_0074bfa0;
  }
  if ((_DAT_0074be30 < 8.988465674311579e+307) &&
     (_DAT_0074be30 = _DAT_0074be30 - _DAT_0074c478, DAT_0074bf98 != 0)) {
    FUN_0051df40(s_Angle_premerge_with_random_005c220c,0,0x74be30);
  }
  if ((_DAT_0074be38 < 8.988465674311579e+307) &&
     (_DAT_0074be38 = _DAT_0074be38 - _DAT_0074c478, DAT_0074bf98 != 0)) {
    FUN_0051df40(s_Angle_postmerge_with_random_005c21f0,0,0x74be38);
  }
  _DAT_0074bea0 = _DAT_0074c490 + _DAT_0074c490 + _DAT_0074bea0;
  _DAT_0074bea8 = _DAT_0074c490 + _DAT_0074c490 + _DAT_0074bea8;
  if (DAT_0074bf98 != 0) {
    if ((DAT_0074be90 != 0) || (DAT_0074bed8 != 0)) {
      FUN_0051df40(s_Centrum_premerge_with_random_005c21d0,0,0x74bea0);
    }
    if ((DAT_0074bf98 != 0) && (DAT_0074bed4 != 0)) {
      FUN_0051df40(s_Centrum_postmerge_with_random_005c21b0,0,0x74bea8);
    }
  }
  dVar1 = 1.0;
  if (_DAT_0074be30 < 1.0) {
    dVar1 = _DAT_0074be30;
  }
  if (_DAT_0074be38 < dVar1) {
    dVar1 = _DAT_0074be38;
  }
  dVar2 = (double)DAT_0074c03c;
  _DAT_0074c4f0 = SQRT(dVar2) * SQRT(1.0 - dVar1 * dVar1) * _DAT_0074c4b0 + _DAT_0074c490;
  dVar1 = dVar2 * _DAT_0074bea0 + _DAT_0074c490;
  if (_DAT_0074c4f0 < dVar1) {
    _DAT_0074c4f0 = dVar1;
  }
  dVar1 = dVar2 * _DAT_0074bea8 + _DAT_0074c490;
  if (_DAT_0074c4f0 < dVar1) {
    _DAT_0074c4f0 = dVar1;
  }
  if (DAT_0074be98 != 0) {
    FUN_0051df40(s__one_merge_005c21a4,0,0x74c4f0);
  }
  _DAT_0074c4e8 = _DAT_0074c4f0 * 5.0;
  if ((8.988465674311579e+307 <= (double)CONCAT44(DAT_0074c66c,DAT_0074c668)) ||
     ((DAT_0074be70 == 0 && (DAT_0074be74 == 0)))) {
    if (DAT_0074c038 == 0) goto LAB_00529c49;
  }
  else {
    DAT_0074c038 = 1;
    dVar1 = SQRT((double)DAT_0074c03c) * (double)CONCAT44(DAT_0074c66c,DAT_0074c668) + _DAT_0074c490
    ;
    dVar1 = dVar1 + dVar1;
    if (_DAT_0074c4e8 < dVar1) {
      _DAT_0074c4e8 = dVar1;
    }
  }
  FUN_0051df40(s__near_inside_005c2194,0,0x74c4e8);
LAB_00529c49:
  if ((double)CONCAT44(DAT_0074c66c,DAT_0074c668) < _DAT_0074c490) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__the_joggle_for__QJn_005c2138);
    FUN_0051e8e0(1,(int *)0x0);
  }
  if (8.988465674311579e+307 < _DAT_0074beb8) {
    if (DAT_0074be98 == 0) {
      _DAT_0074beb8 = _DAT_0074c490;
    }
    else if (DAT_0074c03c < 4) {
      _DAT_0074beb8 = _DAT_0074bea0;
    }
    else {
      _DAT_0074beb8 = _DAT_0074bea0 * 3.0;
    }
    if ((DAT_0074be08 != 0) && (_DAT_0074be10 < _DAT_0074beb8)) {
      _DAT_0074beb8 = _DAT_0074be10;
    }
    FUN_0051df40(s_Visible_distance_005c2124,0,0x74beb8);
  }
  if (8.988465674311579e+307 < (double)CONCAT44(DAT_0074be8c,DAT_0074be88)) {
    DAT_0074be88 = DAT_0074beb8;
    DAT_0074be8c = DAT_0074bebc;
    FUN_0051df40(s_U_coplanar_distance_005c2110,0,0x74be88);
  }
  if (DAT_0074be08 == 0) {
    _DAT_0074be10 = _DAT_0074beb8 + _DAT_0074beb8;
    if ((_DAT_0074be30 < 8.988465674311579e+307) &&
       (dVar1 = (1.0 - _DAT_0074be30) * (double)CONCAT44(DAT_0074c49c,DAT_0074c498),
       _DAT_0074be10 < dVar1)) {
      _DAT_0074be10 = dVar1;
    }
    FUN_0051df40(s_Width_outside_005c2100,0,0x74be10);
  }
  dVar1 = (double)CONCAT44(DAT_0074be8c,DAT_0074be88) * 6.0;
  _DAT_0074c500 = _DAT_0074be10;
  if (_DAT_0074be10 < dVar1) {
    _DAT_0074c500 = dVar1;
  }
  if (_DAT_0074c500 < _DAT_0074beb8 * 6.0) {
    _DAT_0074c500 = _DAT_0074beb8 * 6.0;
  }
  FUN_0051df40(s__wide_facet_005c20f4,0,0x74c500);
  if (((_DAT_0074be10 + 6.661338147750939e-16 < _DAT_0074beb8) && (DAT_0074be20 == 0)) &&
     (DAT_0074be4c == 0)) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_warning__minimum_vis_005c2080);
  }
  _DAT_0074c688 = -_DAT_0074c490;
  DAT_0074c680 = DAT_0074c490;
  DAT_0074c684 = DAT_0074c494;
  return;
}



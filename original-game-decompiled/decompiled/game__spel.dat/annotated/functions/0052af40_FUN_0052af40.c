
/* ==== FUN_0052af40 @ 0052af40 ==== 
 * signature: int __cdecl FUN_0052af40(uint param_1, int param_2, int param_3)
 * body: 0052af40-0052b171
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0052af40(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_14;
  double local_10;
  
  iVar7 = 0;
  DAT_0074c678 = 0;
  DAT_0074c67c = 0;
  _DAT_0074c498 = 0.0;
  _DAT_0074c4b0 = -1.79769313486232e+308;
  _DAT_0074c4a8 = 0.0;
  DAT_0074c688 = 0;
  DAT_0074c68c = 0;
  DAT_0074c6dc = 0;
  if (DAT_0074c464 != 0) {
    DAT_0074c6d8 = 1;
  }
  local_14 = FUN_00514b50(param_3 * 2);
  if (0 < param_3) {
    do {
      uVar6 = param_1;
      if (param_1 == DAT_0074be54) {
        uVar6 = param_1 + param_3 * 8;
      }
      uVar1 = param_1 + DAT_0074c03c * param_2 * 8;
      uVar8 = uVar6;
      if (param_1 < uVar1) {
        local_10 = (double)CONCAT44(local_10._4_4_,DAT_0074c03c * 8);
        uVar4 = param_1;
        uVar5 = uVar6;
        do {
          uVar6 = uVar5;
          if (((uVar4 != DAT_0074be54) &&
              (uVar6 = uVar4, *(double *)(uVar4 + iVar7 * 8) <= *(double *)(uVar5 + iVar7 * 8))) &&
             (uVar6 = uVar5, *(double *)(uVar4 + iVar7 * 8) < *(double *)(uVar8 + iVar7 * 8))) {
            uVar8 = uVar4;
          }
          uVar4 = uVar4 + DAT_0074c03c * 8;
          uVar5 = uVar6;
        } while (uVar4 < uVar1);
      }
      if (iVar7 == param_3 + -1) {
        _DAT_0074c4d8 = *(undefined8 *)(uVar8 + iVar7 * 8);
        _DAT_0074c4a0 = *(undefined8 *)(uVar6 + iVar7 * 8);
      }
      if ((DAT_0074bfd0 == 0) || (dVar2 = _DAT_0074c4b0, iVar7 != param_3 + -1)) {
        dVar2 = -*(double *)(uVar8 + iVar7 * 8);
        if (dVar2 <= *(double *)(uVar6 + iVar7 * 8)) {
          dVar2 = *(double *)(uVar6 + iVar7 * 8);
        }
        if (DAT_0074be54 != 0) {
          local_10 = -*(double *)(DAT_0074be54 + iVar7 * 8);
          if (local_10 <= *(double *)(DAT_0074be54 + iVar7 * 8)) {
            local_10 = *(double *)(DAT_0074be54 + iVar7 * 8);
          }
          if (dVar2 < local_10) {
            dVar2 = local_10;
          }
        }
        dVar3 = *(double *)(uVar6 + iVar7 * 8) - *(double *)(uVar8 + iVar7 * 8);
        if (_DAT_0074c4b0 < dVar3) {
          _DAT_0074c4b0 = dVar3;
        }
      }
      if (_DAT_0074c498 < dVar2) {
        _DAT_0074c498 = dVar2;
      }
      _DAT_0074c4a8 = _DAT_0074c4a8 + dVar2;
      FUN_00514020(&local_14,uVar6);
      FUN_00514020(&local_14,uVar8);
      iVar7 = iVar7 + 1;
      *(double *)(DAT_0074c4e4 + -8 + iVar7 * 8) = _DAT_0074c4a8 * 1.7763568394002505e-14;
    } while (iVar7 < param_3);
  }
  if (0 < DAT_0074be68) {
    FUN_0052b850(DAT_0074c5ec,0x5c25b0,local_14);
  }
  return local_14;
}



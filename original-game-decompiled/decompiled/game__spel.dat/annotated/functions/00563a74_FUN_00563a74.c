
/* ==== FUN_00563a74 @ 00563a74 ==== 
 * signature: undefined * __cdecl FUN_00563a74(int * param_1)
 * body: 00563a74-00563b6c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_00563a74(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  bVar2 = false;
  iVar1 = *param_1;
  if (iVar1 < 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    iVar4 = iVar1 % 0x7861f80;
    iVar1 = (iVar1 / 0x7861f80) * 4;
    _DAT_0074df64 = iVar1 + 0x46;
    iVar5 = iVar4;
    if (0x1e1337f < iVar4) {
      iVar5 = iVar4 + -0x1e13380;
      _DAT_0074df64 = iVar1 + 0x47;
      if (0x1e1337f < iVar5) {
        iVar5 = iVar4 + -0x3c26700;
        _DAT_0074df64 = iVar1 + 0x48;
        if (iVar5 < 0x1e28500) {
          bVar2 = true;
        }
        else {
          _DAT_0074df64 = iVar1 + 0x49;
          iVar5 = iVar4 + -0x5a4ec00;
        }
      }
    }
    _DAT_0074df6c = iVar5 / 0x15180;
    piVar6 = (int *)&DAT_005c94d0;
    if (!bVar2) {
      piVar6 = (int *)&DAT_005c9504;
    }
    _DAT_0074df60 = 1;
    piVar7 = piVar6;
    while (piVar7 = piVar7 + 1, *piVar7 < _DAT_0074df6c) {
      _DAT_0074df60 = _DAT_0074df60 + 1;
    }
    _DAT_0074df60 = _DAT_0074df60 + -1;
    _DAT_0074df5c = _DAT_0074df6c - piVar6[_DAT_0074df60];
    _DAT_0074df68 = (*param_1 / 0x15180 + 4) % 7;
    _DAT_0074df58 = (iVar5 % 0x15180) / 0xe10;
    _DAT_0074df50 = (iVar5 % 0x15180) % 0xe10;
    _DAT_0074df54 = _DAT_0074df50 / 0x3c;
    _DAT_0074df50 = _DAT_0074df50 % 0x3c;
    _DAT_0074df70 = 0;
    puVar3 = &DAT_0074df50;
  }
  return puVar3;
}



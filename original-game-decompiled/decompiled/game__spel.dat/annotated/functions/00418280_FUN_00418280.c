
/* ==== FUN_00418280 @ 00418280 ==== 
 * signature: undefined __cdecl FUN_00418280(int param_1)
 * body: 00418280-004185b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00418280(int param_1)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  
  iVar1 = FUN_004aac20(param_1,*(int *)(param_1 * 0xf0 + 0x50 + DAT_00715e50));
  FUN_00418050(param_1,iVar1);
  iVar1 = FUN_00423290(extraout_EAX,0);
  if (iVar1 == -1) {
    DAT_005d2b70 = 0;
LAB_0041837a:
    DAT_005d2b7c = '\0';
  }
  else {
    fVar4 = FUN_00422c00(param_1,iVar1);
    if (fVar4 < (float10)DAT_005d2b74) {
      DAT_005d2b74 = (float)fVar4;
      DAT_005d2b80 = (float)fVar4;
    }
    iVar2 = FUN_00423290(iVar1,0);
    if (iVar2 == -1) {
      DAT_005d2b70 = 0;
    }
    else {
      fVar4 = FUN_00422c00(param_1,iVar2);
      DAT_005d2b78 = iVar2;
      if (fVar4 < (float10)DAT_005d2b74) {
        DAT_005d2b74 = (float)fVar4;
      }
    }
    iVar1 = FUN_00423290(iVar1,1);
    if (iVar1 == -1) goto LAB_0041837a;
    fVar4 = FUN_00422c00(param_1,iVar1);
    DAT_005d2b84 = iVar1;
    if (fVar4 < (float10)DAT_005d2b80) {
      DAT_005d2b80 = (float)fVar4;
    }
  }
  iVar1 = FUN_00423290(extraout_EAX,2);
  if (iVar1 == -1) {
    DAT_005d2b94 = '\0';
  }
  else {
    fVar4 = FUN_00422c00(param_1,iVar1);
    if (fVar4 < (float10)_DAT_005d2b98) {
      _DAT_005d2b98 = (float)fVar4;
      _DAT_005d2ba4 = (float)fVar4;
    }
    iVar2 = FUN_00423290(iVar1,1);
    if (iVar2 == -1) {
      DAT_005d2b94 = '\0';
    }
    else {
      fVar4 = FUN_00422c00(param_1,iVar2);
      _DAT_005d2b9c = iVar2;
      if (fVar4 < (float10)_DAT_005d2b98) {
        _DAT_005d2b98 = (float)fVar4;
      }
    }
    iVar1 = FUN_00423290(iVar1,2);
    if (iVar1 != -1) {
      fVar4 = FUN_00422c00(param_1,iVar1);
      _DAT_005d2ba8 = iVar1;
      if (fVar4 < (float10)_DAT_005d2ba4) {
        _DAT_005d2ba4 = (float)fVar4;
      }
      goto LAB_00418457;
    }
  }
  DAT_005d2ba0 = 0;
LAB_00418457:
  iVar1 = FUN_00423290(extraout_EAX,1);
  if (iVar1 == -1) {
    DAT_005d2b88 = 0;
  }
  else {
    fVar4 = FUN_00422c00(param_1,iVar1);
    if (fVar4 < (float10)_DAT_005d2b8c) {
      _DAT_005d2b8c = (float)fVar4;
    }
    iVar2 = FUN_00423290(iVar1,1);
    if (iVar2 == -1) {
      DAT_005d2b88 = 0;
    }
    else {
      fVar4 = FUN_00422c00(param_1,iVar2);
      _DAT_005d2b90 = iVar2;
      if (fVar4 < (float10)_DAT_005d2b8c) {
        _DAT_005d2b8c = (float)fVar4;
      }
    }
    if ((DAT_005d2b7c == '\0') && (iVar2 = FUN_00423290(iVar1,0), iVar2 != -1)) {
      fVar4 = FUN_00422c00(param_1,iVar2);
      if (fVar4 < (float10)DAT_005d2b80) {
        DAT_005d2b80 = (float)fVar4;
      }
      DAT_005d2b7c = '\x01';
      DAT_005d2b84 = iVar2;
    }
    if ((DAT_005d2b94 == '\0') && (iVar1 = FUN_00423290(iVar1,2), iVar1 != -1)) {
      fVar4 = FUN_00422c00(param_1,iVar1);
      _DAT_005d2b9c = iVar1;
      if ((float10)_DAT_005d2b98 <= fVar4) {
        DAT_005d2b94 = '\x01';
      }
      else {
        _DAT_005d2b98 = (float)fVar4;
        DAT_005d2b94 = '\x01';
      }
    }
  }
  pfVar3 = &DAT_005d2b74;
  do {
    if ((pfVar3[1] != -NAN) && (fVar4 = FUN_00423560((int)pfVar3[1]), fVar4 < (float10)*pfVar3)) {
      *pfVar3 = (float)fVar4;
    }
    pfVar3 = pfVar3 + 3;
  } while ((int)pfVar3 < 0x5d2bb0);
  return;
}



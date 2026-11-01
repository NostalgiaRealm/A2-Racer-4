
/* ==== FUN_00402004 @ 00402004 ==== 
 * signature: uint * __register FUN_00402004(uint param_1)
 * body: 00402004-004020f7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00402004(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  while ((puVar1 = DAT_0044747c, puVar2 = DAT_00447474, (int)DAT_00447474[2] < (int)param_1 &&
         (uVar4 = DAT_0044747c[2], puVar2 = DAT_0044747c, (int)uVar4 < (int)param_1))) {
    DAT_0044747c[2] = param_1;
    puVar2 = puVar1;
    do {
      puVar2 = (uint *)puVar2[1];
    } while ((int)puVar2[2] < (int)param_1);
    DAT_0044747c[2] = uVar4;
    puVar1 = puVar2;
    if ((puVar2 != DAT_0044747c) ||
       (((int)param_1 < 0x1001 &&
        (puVar2 = (uint *)FUN_00401fd8(param_1), puVar1 = DAT_0044747c, puVar2 != (uint *)0x0))))
    break;
    uVar3 = FUN_00401f78(param_1);
    puVar2 = DAT_00447484;
    if ((char)uVar3 == '\0') {
      return (uint *)0x0;
    }
    if ((int)param_1 <= DAT_00447480) {
      DAT_00447480 = DAT_00447480 - param_1;
      if (DAT_00447480 < 0xc) {
        param_1 = param_1 + DAT_00447480;
        DAT_00447480 = 0;
      }
      DAT_00447484 = (uint *)((int)DAT_00447484 + param_1);
      *puVar2 = param_1 | 2;
      _DAT_0044741c = _DAT_0044741c + 1;
      _DAT_00447420 = _DAT_00447420 + (param_1 - 4);
      return puVar2 + 1;
    }
  }
  DAT_0044747c = puVar1;
  FUN_00401bc8((int *)puVar2);
  uVar4 = puVar2[2];
  if ((int)(uVar4 - param_1) < 0xc) {
    if (puVar2 == DAT_0044747c) {
      DAT_0044747c = (uint *)puVar2[1];
    }
    *(uint *)((int)puVar2 + uVar4) = *(uint *)((int)puVar2 + uVar4) & 0xfffffffe;
  }
  else {
    FUN_00401e18((uint *)((int)puVar2 + param_1),uVar4 - param_1);
    uVar4 = param_1;
  }
  *puVar2 = uVar4 | 2;
  _DAT_0044741c = _DAT_0044741c + 1;
  _DAT_00447420 = _DAT_00447420 + (uVar4 - 4);
  return puVar2 + 1;
}



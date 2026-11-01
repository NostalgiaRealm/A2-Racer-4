
/* ==== FUN_004020c8 @ 004020c8 ==== 
 * signature: uint * __register FUN_004020c8(uint param_1)
 * body: 004020c8-004021bb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004020c8(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  while ((puVar1 = DAT_004ac484, puVar2 = DAT_004ac47c, (int)DAT_004ac47c[2] < (int)param_1 &&
         (uVar4 = DAT_004ac484[2], puVar2 = DAT_004ac484, (int)uVar4 < (int)param_1))) {
    DAT_004ac484[2] = param_1;
    puVar2 = puVar1;
    do {
      puVar2 = (uint *)puVar2[1];
    } while ((int)puVar2[2] < (int)param_1);
    DAT_004ac484[2] = uVar4;
    puVar1 = puVar2;
    if ((puVar2 != DAT_004ac484) ||
       (((int)param_1 < 0x1001 &&
        (puVar2 = (uint *)FUN_0040209c(param_1), puVar1 = DAT_004ac484, puVar2 != (uint *)0x0))))
    break;
    uVar3 = FUN_0040203c(param_1);
    puVar2 = DAT_004ac48c;
    if ((char)uVar3 == '\0') {
      return (uint *)0x0;
    }
    if ((int)param_1 <= DAT_004ac488) {
      DAT_004ac488 = DAT_004ac488 - param_1;
      if (DAT_004ac488 < 0xc) {
        param_1 = param_1 + DAT_004ac488;
        DAT_004ac488 = 0;
      }
      DAT_004ac48c = (uint *)((int)DAT_004ac48c + param_1);
      *puVar2 = param_1 | 2;
      _DAT_004ac424 = _DAT_004ac424 + 1;
      _DAT_004ac428 = _DAT_004ac428 + (param_1 - 4);
      return puVar2 + 1;
    }
  }
  DAT_004ac484 = puVar1;
  FUN_00401c8c((int *)puVar2);
  uVar4 = puVar2[2];
  if ((int)(uVar4 - param_1) < 0xc) {
    if (puVar2 == DAT_004ac484) {
      DAT_004ac484 = (uint *)puVar2[1];
    }
    *(uint *)((int)puVar2 + uVar4) = *(uint *)((int)puVar2 + uVar4) & 0xfffffffe;
  }
  else {
    FUN_00401edc((uint *)((int)puVar2 + param_1),uVar4 - param_1);
    uVar4 = param_1;
  }
  *puVar2 = uVar4 | 2;
  _DAT_004ac424 = _DAT_004ac424 + 1;
  _DAT_004ac428 = _DAT_004ac428 + (uVar4 - 4);
  return puVar2 + 1;
}



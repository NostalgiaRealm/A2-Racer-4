
/* ==== FUN_004021bc @ 004021bc ==== 
 * signature: uint * __register FUN_004021bc(int param_1)
 * body: 004021bc-0040232f;00402337-00402340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004021bc(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  
  if ((DAT_004ac430 == '\0') && (cVar2 = FUN_00401ae8(), cVar2 == '\0')) {
    return (uint *)0x0;
  }
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  puVar4 = DAT_004ac48c;
  uVar5 = param_1 + 7U & 0xfffffffc;
  if ((int)uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  if ((int)uVar5 < 0x1001) {
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = uVar5 + 3;
    }
    puVar1 = *(uint **)(DAT_004ac490 + -0xc + ((int)uVar3 >> 2) * 4);
    if (puVar1 != (uint *)0x0) {
      *(uint *)((int)puVar1 + uVar5) = *(uint *)((int)puVar1 + uVar5) & 0xfffffffe;
      puVar4 = (uint *)puVar1[1];
      if (puVar1 == puVar4) {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(undefined4 *)(DAT_004ac490 + -0xc + ((int)uVar3 >> 2) * 4) = 0;
      }
      else {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(uint **)(DAT_004ac490 + -0xc + ((int)uVar3 >> 2) * 4) = puVar4;
        uVar3 = *puVar1;
        *(uint **)(uVar3 + 4) = puVar4;
        *puVar4 = uVar3;
      }
      *puVar1 = puVar1[2] | 2;
      _DAT_004ac424 = _DAT_004ac424 + 1;
      _DAT_004ac428 = _DAT_004ac428 + (uVar5 - 4);
      FUN_00403794();
      return puVar1 + 1;
    }
  }
  if ((int)uVar5 <= DAT_004ac488) {
    DAT_004ac488 = DAT_004ac488 - uVar5;
    if (DAT_004ac488 < 0xc) {
      uVar5 = uVar5 + DAT_004ac488;
      DAT_004ac488 = 0;
    }
    DAT_004ac48c = (uint *)((int)DAT_004ac48c + uVar5);
    *puVar4 = uVar5 | 2;
    _DAT_004ac424 = _DAT_004ac424 + 1;
    _DAT_004ac428 = _DAT_004ac428 + (uVar5 - 4);
    FUN_00403794();
    return puVar4 + 1;
  }
  FUN_004020c8(uVar5);
  puVar4 = (uint *)0x0;
  *in_FS_OFFSET = uStack_24;
  if (DAT_004ac049 != '\0') {
    uStack_24 = 0x40232f;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  return puVar4;
}



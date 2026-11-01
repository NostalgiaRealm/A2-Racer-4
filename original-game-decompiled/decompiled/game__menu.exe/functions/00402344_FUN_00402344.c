
/* ==== FUN_00402344 @ 00402344 ==== 
 * signature: undefined4 __register FUN_00402344(int param_1)
 * body: 00402344-004024d5;004024dd-004024e5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402344(int param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  DAT_004ac434 = 0;
  if ((DAT_004ac430 == '\0') && (cVar2 = FUN_00401ae8(), cVar2 == '\0')) {
    DAT_004ac434 = 8;
    return 8;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  puVar6 = (uint *)(param_1 + -4);
  uVar5 = *puVar6;
  if ((uVar5 & 2) == 0) {
    DAT_004ac434 = 9;
    goto LAB_004024ad;
  }
  _DAT_004ac424 = _DAT_004ac424 + -1;
  _DAT_004ac428 = _DAT_004ac428 - ((uVar5 & 0x7ffffffc) - 4);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + -8);
    if (((int)uVar1 < 0xc) || ((uVar1 & 0x80000003) != 0)) {
      DAT_004ac434 = 10;
      goto LAB_004024ad;
    }
    puVar6 = (uint *)((int)puVar6 - uVar1);
    if (uVar1 != puVar6[2]) {
      DAT_004ac434 = 10;
      goto LAB_004024ad;
    }
    uVar5 = uVar5 + uVar1;
    FUN_00401c8c((int *)puVar6);
  }
  uVar5 = uVar5 & 0x7ffffffc;
  puVar3 = (uint *)((int)puVar6 + uVar5);
  if (puVar3 == DAT_004ac48c) {
    DAT_004ac48c = (uint *)((int)DAT_004ac48c - uVar5);
    DAT_004ac488 = DAT_004ac488 + uVar5;
    if (0x3c00 < DAT_004ac488) {
      FUN_00401f64();
    }
    FUN_00403794();
    return 0;
  }
  if ((*puVar3 & 2) == 0) {
    if (((puVar3[1] == 0) || (*puVar3 == 0)) || ((int)puVar3[2] < 0xc)) {
      DAT_004ac434 = 0xb;
      goto LAB_004024ad;
    }
    uVar5 = uVar5 + puVar3[2];
    FUN_00401c8c((int *)puVar3);
  }
  else {
    if ((*puVar3 & 0x7ffffffc) < 4) {
      DAT_004ac434 = 0xb;
      goto LAB_004024ad;
    }
    *puVar3 = *puVar3 | 1;
  }
  FUN_00401edc(puVar6,uVar5);
LAB_004024ad:
  uVar4 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_004ac049 != '\0') {
    uStack_20 = 0x4024d5;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  return uVar4;
}



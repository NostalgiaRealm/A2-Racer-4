
/* ==== FUN_00402280 @ 00402280 ==== 
 * signature: undefined4 __register FUN_00402280(int param_1)
 * body: 00402280-00402411;00402419-00402421
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402280(int param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  DAT_0044742c = 0;
  if ((DAT_00447428 == '\0') && (cVar2 = FUN_00401a24(), cVar2 == '\0')) {
    DAT_0044742c = 8;
    return 8;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_00447041 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  puVar6 = (uint *)(param_1 + -4);
  uVar5 = *puVar6;
  if ((uVar5 & 2) == 0) {
    DAT_0044742c = 9;
    goto LAB_004023e9;
  }
  _DAT_0044741c = _DAT_0044741c + -1;
  _DAT_00447420 = _DAT_00447420 - ((uVar5 & 0x7ffffffc) - 4);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + -8);
    if (((int)uVar1 < 0xc) || ((uVar1 & 0x80000003) != 0)) {
      DAT_0044742c = 10;
      goto LAB_004023e9;
    }
    puVar6 = (uint *)((int)puVar6 - uVar1);
    if (uVar1 != puVar6[2]) {
      DAT_0044742c = 10;
      goto LAB_004023e9;
    }
    uVar5 = uVar5 + uVar1;
    FUN_00401bc8((int *)puVar6);
  }
  uVar5 = uVar5 & 0x7ffffffc;
  puVar3 = (uint *)((int)puVar6 + uVar5);
  if (puVar3 == DAT_00447484) {
    DAT_00447484 = (uint *)((int)DAT_00447484 - uVar5);
    DAT_00447480 = DAT_00447480 + uVar5;
    if (0x3c00 < DAT_00447480) {
      FUN_00401ea0();
    }
    FUN_0040350c();
    return 0;
  }
  if ((*puVar3 & 2) == 0) {
    if (((puVar3[1] == 0) || (*puVar3 == 0)) || ((int)puVar3[2] < 0xc)) {
      DAT_0044742c = 0xb;
      goto LAB_004023e9;
    }
    uVar5 = uVar5 + puVar3[2];
    FUN_00401bc8((int *)puVar3);
  }
  else {
    if ((*puVar3 & 0x7ffffffc) < 4) {
      DAT_0044742c = 0xb;
      goto LAB_004023e9;
    }
    *puVar3 = *puVar3 | 1;
  }
  FUN_00401e18(puVar6,uVar5);
LAB_004023e9:
  uVar4 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_00447041 != '\0') {
    uStack_20 = 0x402411;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  return uVar4;
}



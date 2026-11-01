
/* ==== FUN_004020f8 @ 004020f8 ==== 
 * signature: uint * __register FUN_004020f8(int param_1)
 * body: 004020f8-0040226b;00402273-0040227c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004020f8(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  
  if ((DAT_00447428 == '\0') && (cVar2 = FUN_00401a24(), cVar2 == '\0')) {
    return (uint *)0x0;
  }
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (DAT_00447041 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  puVar4 = DAT_00447484;
  uVar5 = param_1 + 7U & 0xfffffffc;
  if ((int)uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  if ((int)uVar5 < 0x1001) {
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = uVar5 + 3;
    }
    puVar1 = *(uint **)(DAT_00447488 + -0xc + ((int)uVar3 >> 2) * 4);
    if (puVar1 != (uint *)0x0) {
      *(uint *)((int)puVar1 + uVar5) = *(uint *)((int)puVar1 + uVar5) & 0xfffffffe;
      puVar4 = (uint *)puVar1[1];
      if (puVar1 == puVar4) {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(undefined4 *)(DAT_00447488 + -0xc + ((int)uVar3 >> 2) * 4) = 0;
      }
      else {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(uint **)(DAT_00447488 + -0xc + ((int)uVar3 >> 2) * 4) = puVar4;
        uVar3 = *puVar1;
        *(uint **)(uVar3 + 4) = puVar4;
        *puVar4 = uVar3;
      }
      *puVar1 = puVar1[2] | 2;
      _DAT_0044741c = _DAT_0044741c + 1;
      _DAT_00447420 = _DAT_00447420 + (uVar5 - 4);
      FUN_0040350c();
      return puVar1 + 1;
    }
  }
  if ((int)uVar5 <= DAT_00447480) {
    DAT_00447480 = DAT_00447480 - uVar5;
    if (DAT_00447480 < 0xc) {
      uVar5 = uVar5 + DAT_00447480;
      DAT_00447480 = 0;
    }
    DAT_00447484 = (uint *)((int)DAT_00447484 + uVar5);
    *puVar4 = uVar5 | 2;
    _DAT_0044741c = _DAT_0044741c + 1;
    _DAT_00447420 = _DAT_00447420 + (uVar5 - 4);
    FUN_0040350c();
    return puVar4 + 1;
  }
  FUN_00402004(uVar5);
  puVar4 = (uint *)0x0;
  *in_FS_OFFSET = uStack_24;
  if (DAT_00447041 != '\0') {
    uStack_24 = 0x40226b;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  return puVar4;
}



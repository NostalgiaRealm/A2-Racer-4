
/* ==== FUN_004c81b0 @ 004c81b0 ==== 
 * signature: uint __cdecl FUN_004c81b0(uint param_1, undefined4 param_2)
 * body: 004c81b0-004c81cc;004c81d0-004c8307;004c8311-004c834e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c81cd-004c81cf 004c8308-004c8310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_004c81b0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (DAT_00740988 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_please_use_get_xv_005b5634);
  }
  switch(param_2) {
  case 8:
    if (DAT_005b37a0 == 8) {
      return param_1;
    }
    if (DAT_005b37a0 == 0x10) {
      uVar4 = (uint)*(byte *)(DAT_007409f0 + param_1 * 4);
      if (DAT_007409d0 != 0) {
        uVar4 = (int)(uVar4 * uVar4) >> 8;
      }
      uVar1 = (uint)*(byte *)(DAT_007409f0 + 1 + param_1 * 4);
      if (DAT_007409d0 != 0) {
        uVar1 = (int)(uVar1 * uVar1) >> 8;
      }
      uVar2 = (uint)*(byte *)(DAT_007409f0 + 2 + param_1 * 4);
      if (DAT_007409d0 != 0) {
        uVar2 = (int)(uVar2 * uVar2) >> 8;
      }
      iVar5 = (int)uVar4 >> ((byte)_DAT_007409ac & 0x1f);
      iVar6 = (int)uVar1 >> ((byte)_DAT_007409b0 & 0x1f);
      iVar3 = (int)uVar2 >> ((byte)_DAT_007409b4 & 0x1f);
      if ((((param_1 != DAT_005b5db8) && (iVar5 == DAT_00740d24)) && (iVar6 == DAT_00740d28)) &&
         (iVar3 == DAT_00740d2c)) {
        iVar5 = DAT_00740d24 + 1;
      }
      return (iVar3 << ((byte)DAT_007409c4 & 0x1f)) + (iVar6 << ((byte)DAT_007409c0 & 0x1f)) +
             (iVar5 << ((byte)DAT_007409bc & 0x1f));
    }
    if (DAT_005b37a0 == 0x18) {
      return (uint)CONCAT21(CONCAT11(*(undefined1 *)(DAT_007409f0 + param_1 * 4),
                                     *(undefined1 *)(DAT_007409f0 + 1 + param_1 * 4)),
                            *(undefined1 *)(DAT_007409f0 + 2 + param_1 * 4));
    }
    break;
  case 0x10:
    if (DAT_005b37a0 == 8) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s_not_yet_supported_005b566c);
    }
    if (DAT_005b37a0 == 0x10) {
      return param_1;
    }
    if (DAT_005b37a0 == 0x18) {
      return param_1;
    }
    break;
  case 0x18:
    uVar4 = FUN_004c7ee0(param_1);
    return (int)(short)uVar4;
  case 0x20:
    uVar4 = FUN_004c8020(param_1);
    return (int)(short)uVar4;
  }
  return 0;
}



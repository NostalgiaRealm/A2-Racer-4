
/* ==== FUN_004c7ee0 @ 004c7ee0 ==== 
 * signature: uint __cdecl FUN_004c7ee0(uint param_1)
 * body: 004c7ee0-004c7efc;004c7f00-004c8011;004c8015-004c8019
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c7efd-004c7eff 004c8012-004c8014
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_004c7ee0(uint param_1)

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
  if (DAT_005b37a0 == 8) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d___Translation_from_24_bit_005b55ec);
  }
  if ((DAT_005b37a0 != 0x10) && (DAT_005b37a0 != 0x18)) {
    return param_1;
  }
  iVar3 = DAT_00740d2c;
  iVar5 = DAT_00740d24;
  iVar6 = DAT_00740d28;
  if (param_1 != DAT_007408f0) {
    uVar4 = param_1 & 0xff;
    if (DAT_007409d0 != 0) {
      uVar4 = (int)(uVar4 * uVar4) >> 8;
    }
    uVar1 = param_1 >> 8 & 0xff;
    if (DAT_007409d0 != 0) {
      uVar1 = (int)(uVar1 * uVar1) >> 8;
    }
    uVar2 = param_1 >> 0x10 & 0xff;
    if (DAT_007409d0 != 0) {
      uVar2 = (int)(uVar2 * uVar2) >> 8;
    }
    iVar3 = (int)uVar2 >> ((byte)_DAT_007409b4 & 0x1f);
    iVar5 = (int)uVar4 >> ((byte)_DAT_007409ac & 0x1f);
    iVar6 = (int)uVar1 >> ((byte)_DAT_007409b0 & 0x1f);
  }
  if ((((iVar5 == DAT_00740d24) && (iVar6 == DAT_00740d28)) && (iVar3 == DAT_00740d2c)) &&
     (param_1 != DAT_007408f0)) {
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = iVar5 + -1;
    }
  }
  return (iVar3 << ((byte)DAT_007409c4 & 0x1f)) + (iVar6 << ((byte)DAT_007409c0 & 0x1f)) +
         (iVar5 << ((byte)DAT_007409bc & 0x1f));
}



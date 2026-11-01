
/* ==== FUN_004c8020 @ 004c8020 ==== 
 * signature: uint __cdecl FUN_004c8020(uint param_1)
 * body: 004c8020-004c803f;004c8043-004c819a;004c819e-004c81a5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c8040-004c8042 004c819b-004c819d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_004c8020(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (DAT_00740988 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_please_use_get_xv_005b5634);
  }
  if (DAT_005b37a0 != 8) {
    if ((DAT_005b37a0 != 0x10) && (DAT_005b37a0 != 0x18)) {
      return param_1;
    }
    uVar3 = DAT_007408f0 ^ param_1;
    if (((uVar3 & 0xff) == 0) && ((uVar3 & 0xffff00) == 0)) {
      uVar4 = 0;
      iVar2 = DAT_00740d2c;
      iVar5 = DAT_00740d24;
      iVar6 = DAT_00740d28;
    }
    else {
      uVar4 = param_1 & 0xff;
      if (DAT_007409d0 != 0) {
        uVar4 = (int)(uVar4 * uVar4) >> 8;
      }
      iVar5 = (int)uVar4 >> ((byte)_DAT_007409ac & 0x1f);
      uVar4 = param_1 >> 8 & 0xff;
      if (DAT_007409d0 != 0) {
        uVar4 = (int)(uVar4 * uVar4) >> 8;
      }
      uVar1 = param_1 >> 0x10 & 0xff;
      iVar6 = (int)uVar4 >> ((byte)_DAT_007409b0 & 0x1f);
      if (DAT_007409d0 != 0) {
        uVar1 = (int)(uVar1 * uVar1) >> 8;
      }
      iVar2 = (int)uVar1 >> ((byte)_DAT_007409b4 & 0x1f);
      uVar4 = (param_1 >> 0x18) >> ((byte)DAT_007409b8 & 0x1f);
    }
    if ((((iVar5 == DAT_00740d24) && (iVar6 == DAT_00740d28)) && (iVar2 == DAT_00740d2c)) &&
       (((uVar3 & 0xff) == 0 && ((uVar3 & 0xffff00) == 0)))) {
      if (iVar5 == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = iVar5 + -1;
      }
    }
    return (uVar4 << ((byte)DAT_007409c8 & 0x1f)) + (iVar2 << ((byte)DAT_007409c4 & 0x1f)) +
           (iVar6 << ((byte)DAT_007409c0 & 0x1f)) + (iVar5 << ((byte)DAT_007409bc & 0x1f));
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d___Translation_from_24_bit_005b55ec);
}



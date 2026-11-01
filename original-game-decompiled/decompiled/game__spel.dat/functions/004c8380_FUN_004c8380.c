
/* ==== FUN_004c8380 @ 004c8380 ==== 
 * signature: undefined __cdecl FUN_004c8380(uint param_1, int param_2, short * param_3)
 * body: 004c8380-004c839c;004c83a0-004c83f2;004c83f9-004c840c;004c8413-004c853a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c839d-004c839f 004c83f3-004c83f8 004c840d-004c8412
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004c8380(uint param_1,int param_2,short *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar4;
  byte bVar3;
  
  if (DAT_00740988 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_please_use_get_xv_005b5634);
  }
  bVar2 = (byte)DAT_007409c0;
  bVar3 = (byte)DAT_007409c4;
  if (param_2 == 8) {
    if (DAT_005b37a0 == 8) {
      *(undefined1 *)param_3 = (undefined1)param_1;
      return;
    }
    if (DAT_005b37a0 == 0x10) {
      *param_3 = ((ushort)(*(byte *)(DAT_007409f0 + 2 + param_1 * 4) >> (DAT_007409b4 & 0x1f)) <<
                 (bVar3 & 0x1f)) +
                 ((ushort)(*(byte *)(DAT_007409f0 + 1 + param_1 * 4) >> (DAT_007409b0 & 0x1f)) <<
                 (bVar2 & 0x1f)) +
                 ((ushort)(*(byte *)(DAT_007409f0 + param_1 * 4) >> (DAT_007409ac & 0x1f)) <<
                 ((byte)DAT_007409bc & 0x1f));
      return;
    }
    if (DAT_005b37a0 == 0x18) {
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(DAT_007409f0 + param_1 * 4);
      *(undefined1 *)((int)param_3 + 1) = *(undefined1 *)(DAT_007409f0 + 1 + param_1 * 4);
      *(undefined1 *)param_3 = *(undefined1 *)(DAT_007409f0 + 2 + param_1 * 4);
    }
  }
  else if (param_2 == 0x10) {
    if (DAT_005b37a0 == 8) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s_not_yet_supported_005b566c);
    }
    if (DAT_005b37a0 == 0x10) {
      *param_3 = (short)param_1;
      return;
    }
    if (DAT_005b37a0 == 0x18) {
      uVar1 = DAT_007409a0 & param_1;
      uVar4 = DAT_007409a4 & param_1;
      *(char *)(param_3 + 1) =
           (char)((int)(DAT_0074099c & param_1) >> ((byte)DAT_007409bc & 0x1f)) <<
           (DAT_007409ac & 0x1f);
      *(char *)((int)param_3 + 1) =
           (char)((int)uVar1 >> (bVar2 & 0x1f)) << ((byte)_DAT_007409b0 & 0x1f);
      *(char *)param_3 = (char)((int)uVar4 >> (bVar3 & 0x1f)) << ((byte)_DAT_007409b4 & 0x1f);
      return;
    }
  }
  else if (param_2 == 0x18) {
    if (DAT_005b37a0 == 0x10) {
      uVar1 = FUN_004c7ee0(param_1);
      *param_3 = (short)uVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d___Translation_from_24_bit_005b5680);
  }
  return;
}



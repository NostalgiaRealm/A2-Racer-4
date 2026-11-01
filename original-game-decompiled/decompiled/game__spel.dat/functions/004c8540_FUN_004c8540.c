
/* ==== FUN_004c8540 @ 004c8540 ==== 
 * signature: undefined __stdcall FUN_004c8540(void)
 * body: 004c8540-004c8596;004c859a-004c8682
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c8597-004c8599
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8540(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_004c4a60(DAT_007408ac);
  puVar3 = &DAT_00740968;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_00740968 = 0x20;
  iVar2 = (**(code **)(*DAT_007408ac + 0x54))(DAT_007408ac,&DAT_00740968);
  if (iVar2 == 0) {
    if (((byte)DAT_0074096c & 0x20) == 0) {
      DAT_007409bc = 0;
      for (uVar1 = DAT_00740978; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
        DAT_007409bc = DAT_007409bc + 1;
      }
      DAT_0074098c = 0;
      for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
        DAT_0074098c = DAT_0074098c + 1;
      }
      DAT_0074099c = DAT_00740978;
      _DAT_007409ac = 8 - DAT_0074098c;
      DAT_007409c0 = 0;
      for (uVar1 = DAT_0074097c; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
        DAT_007409c0 = DAT_007409c0 + 1;
      }
      DAT_00740990 = 0;
      for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
        DAT_00740990 = DAT_00740990 + 1;
      }
      DAT_007409a0 = DAT_0074097c;
      _DAT_007409b0 = 8 - DAT_00740990;
      DAT_007409c4 = 0;
      for (uVar1 = DAT_00740980; (uVar1 & 1) == 0; uVar1 = (int)uVar1 >> 1) {
        DAT_007409c4 = DAT_007409c4 + 1;
      }
      DAT_00740994 = 0;
      for (; (uVar1 & 1) != 0; uVar1 = (int)uVar1 >> 1) {
        DAT_00740994 = DAT_00740994 + 1;
      }
      DAT_007409a4 = DAT_00740980;
      _DAT_007409b4 = 8 - DAT_00740994;
      DAT_00740988 = 1;
      return;
    }
    DAT_00740988 = 1;
    DAT_007409cc = 0;
    return;
  }
  FUN_004c4400(iVar2);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____unable_to_get_pixelform_005b56bc);
}




/* ==== FUN_004558c0 @ 004558c0 ==== 
 * signature: undefined4 __cdecl FUN_004558c0(int param_1)
 * body: 004558c0-004558e7;004558ed-004559c1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004558e8-004558ec
 */

undefined4 __cdecl FUN_004558c0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (DAT_006fbe30 == 0) {
    *(undefined4 *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 8) = 1;
  }
  else {
    if (DAT_006fbe30 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Illegal_werkpijlbord_sta_005a37bc);
    }
    *(undefined4 *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 8) = 0;
  }
  FUN_004557b0();
  iVar3 = param_1 * 0xf0;
  iVar1 = *(int *)(iVar3 + 0x2c + DAT_00715e50);
  if (iVar1 == 1) {
    FUN_00450b30(param_1,0);
    *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 2;
  }
  else if (iVar1 == 2) {
    cVar2 = FUN_004a1f10(*(int *)(iVar3 + 0x10 + DAT_00715e50));
    if (cVar2 == '\0') {
      *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 3;
      return 1;
    }
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 0;
    return 1;
  }
  return 1;
}



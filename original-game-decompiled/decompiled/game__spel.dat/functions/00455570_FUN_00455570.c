
/* ==== FUN_00455570 @ 00455570 ==== 
 * signature: undefined4 __cdecl FUN_00455570(int param_1)
 * body: 00455570-00455597;0045559d-0045561f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00455598-0045559c
 */

undefined4 __cdecl FUN_00455570(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_006fbe28 == 0) {
    *(undefined4 *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 8) = 0;
  }
  else {
    if (DAT_006fbe28 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Illegal_global_werklamp_a_005a3700);
    }
    *(undefined4 *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 8) = 0;
  }
  FUN_00455690();
  iVar2 = param_1 * 0xf0;
  switch(*(undefined4 *)(iVar2 + 0x2c + DAT_00715e50)) {
  case 0:
  case 3:
    goto switchD_00455619_caseD_0;
  case 1:
    FUN_00450b30(param_1,0);
    *(undefined4 *)(iVar2 + 0x2c + DAT_00715e50) = 2;
    return 1;
  case 2:
    cVar1 = FUN_004a1f10(*(int *)(iVar2 + 0x10 + DAT_00715e50));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x2c + DAT_00715e50) = 3;
      return 1;
    }
switchD_00455619_caseD_0:
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Werklamp_has_illegal_sta_005a375c);
  }
}



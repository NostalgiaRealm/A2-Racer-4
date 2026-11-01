
/* ==== FUN_00454990 @ 00454990 ==== 
 * signature: undefined4 __cdecl FUN_00454990(int param_1)
 * body: 00454990-004549b8;00454a0a-00454a1b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00454a1c-00454a1e
 */

undefined4 __cdecl FUN_00454990(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xf0;
  switch(*(undefined4 *)(iVar2 + 0x2c + DAT_00715e50)) {
  case 0:
    goto switchD_004549b2_caseD_0;
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
switchD_004549b2_caseD_0:
    return 1;
  case 3:
    *(undefined4 *)(iVar2 + 0x2c + DAT_00715e50) = 0;
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Pilon_object_in_illegal_s_005a35a8);
  }
}



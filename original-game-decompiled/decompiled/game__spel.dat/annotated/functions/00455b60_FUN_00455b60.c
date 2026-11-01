
/* ==== FUN_00455b60 @ 00455b60 ==== 
 * signature: undefined4 __cdecl FUN_00455b60(int param_1)
 * body: 00455b60-00455b88;00455bda-00455beb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00455bec-00455bee
 */

undefined4 __cdecl FUN_00455b60(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xf0;
  switch(*(undefined4 *)(iVar2 + 0x2c + DAT_00715e50)) {
  case 0:
    goto switchD_00455b82_caseD_0;
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
switchD_00455b82_caseD_0:
    return 1;
  case 3:
    *(undefined4 *)(iVar2 + 0x2c + DAT_00715e50) = 0;
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Werkbord_object_has_ille_005a381c);
  }
}



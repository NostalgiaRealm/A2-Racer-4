
/* ==== FUN_00455250 @ 00455250 ==== 
 * signature: undefined4 __cdecl FUN_00455250(int param_1)
 * body: 00455250-00455278;004552c9-004552da
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004552db-004552dd
 */

undefined4 __cdecl FUN_00455250(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xf0;
  switch(*(undefined4 *)(iVar2 + 0x2c + DAT_00715e50)) {
  case 0:
    goto switchD_00455272_caseD_0;
  case 1:
    FUN_0045b460(param_1,param_1);
    *(undefined4 *)(iVar2 + 0x2c + DAT_00715e50) = 2;
    return 1;
  case 2:
    cVar1 = FUN_004a1f10(*(int *)(iVar2 + 0x10 + DAT_00715e50));
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x2c + DAT_00715e50) = 3;
      return 1;
    }
switchD_00455272_caseD_0:
    return 1;
  case 3:
    *(undefined4 *)(iVar2 + 0x2c + DAT_00715e50) = 0;
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_The_trash_emitter_object_005a3690);
  }
}



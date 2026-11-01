
/* ==== FUN_00454770 @ 00454770 ==== 
 * signature: undefined4 __cdecl FUN_00454770(int param_1)
 * body: 00454770-00454798;004547e9-004547fa
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004547fb-004547fd
 */

undefined4 __cdecl FUN_00454770(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = param_1 * 0xf0;
  puVar1 = (undefined4 *)(iVar3 + 0x2c + DAT_00715e50);
  switch(*(undefined4 *)(iVar3 + 0x2c + DAT_00715e50)) {
  case 0:
    goto switchD_00454792_caseD_0;
  case 1:
    *puVar1 = 2;
    FUN_00450b30(param_1,0);
    FUN_0045b5c0(param_1,param_1);
    return 1;
  case 2:
    cVar2 = FUN_004a1f10(*(int *)(iVar3 + 0x10 + DAT_00715e50));
    if (cVar2 == '\0') {
      *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 3;
      return 1;
    }
switchD_00454792_caseD_0:
    return 1;
  case 3:
    *puVar1 = 0;
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Paper_box_has_illegal_st_005a3544);
  }
}



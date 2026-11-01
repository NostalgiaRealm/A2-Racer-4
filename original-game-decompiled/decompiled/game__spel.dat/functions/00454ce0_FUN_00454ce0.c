
/* ==== FUN_00454ce0 @ 00454ce0 ==== 
 * signature: undefined4 __cdecl FUN_00454ce0(int param_1)
 * body: 00454ce0-00454dbf;00454dc3-00454dca
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00454dc0-00454dc2
 */

undefined4 __cdecl FUN_00454ce0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1 * 0xf0;
  iVar1 = iVar4 + DAT_00715e50;
  switch(*(undefined4 *)(iVar4 + 0x2c + DAT_00715e50)) {
  case 0:
    uVar3 = FUN_004a7bd0(iVar1);
    FUN_00478ac0(param_1,uVar3);
    return 1;
  case 1:
    uVar3 = FUN_004a7bd0(iVar1);
    FUN_00478880(param_1,uVar3);
    *(undefined4 *)(iVar4 + 0x2c + DAT_00715e50) = 2;
    return 1;
  case 2:
    break;
  case 3:
    uVar3 = FUN_004a7bd0(iVar1);
    FUN_00478d00(param_1,uVar3);
    *(undefined4 *)(iVar4 + 0x2c + DAT_00715e50) = 0;
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_The_scripted_object_has_i_005a3638);
  }
  uVar3 = FUN_004a7bd0(iVar1);
  FUN_00478f40(param_1,uVar3);
  cVar2 = FUN_004a1f10(*(int *)(iVar4 + 0x10 + DAT_00715e50));
  if (cVar2 != '\0') {
    return 1;
  }
  *(undefined4 *)(iVar4 + 0x2c + DAT_00715e50) = 3;
  return 1;
}



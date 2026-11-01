
/* ==== FUN_004a6fa0 @ 004a6fa0 ==== 
 * signature: undefined __cdecl FUN_004a6fa0(int param_1)
 * body: 004a6fa0-004a6fd5;004a6fde-004a701c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6fd6-004a6fdd
 */

void __cdecl FUN_004a6fa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 * 0xf0;
  if ((*(int *)(iVar1 + 0x34 + DAT_00715e50) != -1) && (*(int *)(iVar1 + 0x38 + DAT_00715e50) != -1)
     ) {
    if (*(int *)(iVar1 + 0x20 + DAT_00715e50) == 0) {
      iVar2 = *(int *)(iVar1 + 0x50 + DAT_00715e50);
    }
    else {
      iVar2 = -1;
    }
    iVar2 = FUN_004aac20(param_1,iVar2);
    if (iVar2 != -1) {
      *(int *)(iVar1 + 0x3c + DAT_00715e50) = iVar2;
      FUN_004ab110((void *)(iVar2 * 0x50 + DAT_00715eb8),param_1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Object_not_placed_in_a_c_005af984);
}



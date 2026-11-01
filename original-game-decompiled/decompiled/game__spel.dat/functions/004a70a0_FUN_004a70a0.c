
/* ==== FUN_004a70a0 @ 004a70a0 ==== 
 * signature: undefined __cdecl FUN_004a70a0(int param_1)
 * body: 004a70a0-004a70d8;004a70e2-004a718f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a70d9-004a70e1
 */

void __cdecl FUN_004a70a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 * 0xf0;
  iVar4 = *(int *)(iVar3 + 0x34 + DAT_00715e50);
  if (iVar4 != -1) {
    iVar1 = *(int *)(iVar3 + 0x38 + DAT_00715e50);
    iVar2 = *(int *)(iVar3 + 0x34 + DAT_00715e50);
    iVar3 = *(int *)(iVar3 + 0x38 + DAT_00715e50);
    if (((iVar1 < iVar2) && (iVar3 = iVar1, iVar4 = iVar2, iVar1 == 0)) &&
       (iVar2 == DAT_00715f04 + -1)) {
      iVar3 = iVar2;
      iVar4 = 0;
    }
    if (((iVar2 < iVar1) && (iVar3 = iVar2, iVar4 = iVar1, iVar1 == DAT_00715f04 + -1)) &&
       (iVar2 == 0)) {
      iVar3 = iVar1;
      iVar4 = 0;
    }
    if (iVar4 != iVar3) {
      if ((code *)(&DAT_00714e48)
                  [*(int *)(DAT_00715f00 + 0xfc + *(int *)(DAT_00715254 + iVar4 * 4) * 0x994)] !=
          (code *)0x0) {
        (*(code *)(&DAT_00714e48)
                  [*(int *)(DAT_00715f00 + 0xfc + *(int *)(DAT_00715254 + iVar4 * 4) * 0x994)])
                  (param_1);
      }
      if ((code *)(&DAT_00714e48)
                  [*(int *)(DAT_00715f00 + 0x100 + *(int *)(DAT_00715254 + iVar4 * 4) * 0x994)] !=
          (code *)0x0) {
        (*(code *)(&DAT_00714e48)
                  [*(int *)(DAT_00715f00 + 0x100 + *(int *)(DAT_00715254 + iVar4 * 4) * 0x994)])
                  (param_1);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Object_has_illegal_chunk_005af9fc);
}



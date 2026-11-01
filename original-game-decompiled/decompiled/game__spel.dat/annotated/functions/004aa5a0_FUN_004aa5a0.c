
/* ==== FUN_004aa5a0 @ 004aa5a0 ==== 
 * signature: undefined __cdecl FUN_004aa5a0(int param_1)
 * body: 004aa5a0-004aa5d9;004aa5dd-004aa613;004aa617-004aa671
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004aa5da-004aa5dc 004aa614-004aa616
 */

void __cdecl FUN_004aa5a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1 * 0xf0;
  iVar1 = *(int *)(iVar5 + 0xac + DAT_00715e50);
  if (0xb < iVar1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Illegal_amount_of_subob_005afff0);
  }
  iVar4 = 0;
  if (iVar1 < 1) {
    *(undefined4 *)(iVar5 + 0xac + DAT_00715e50) = 0;
    return;
  }
  iVar3 = 0x7c;
  do {
    if (*(int *)(iVar5 + DAT_00715e50 + 0xac) <= iVar4) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____Sub_object_not_yet_init_005afcac);
    }
    iVar2 = *(int *)(iVar5 + DAT_00715e50 + iVar3);
    *(undefined1 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x90) = 0;
    FUN_004b4580(iVar2);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < iVar1);
  *(undefined4 *)(iVar5 + 0xac + DAT_00715e50) = 0;
  return;
}



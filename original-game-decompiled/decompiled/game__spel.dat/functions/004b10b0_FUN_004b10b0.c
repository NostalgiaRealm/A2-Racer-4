
/* ==== FUN_004b10b0 @ 004b10b0 ==== 
 * signature: undefined __fastcall FUN_004b10b0(int param_1)
 * body: 004b10b0-004b10ea;004b10ee-004b1100
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b10eb-004b10ed
 */

void __fastcall FUN_004b10b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((*(int *)(param_1 + 0x74) != 1) && (*(int *)(param_1 + 0x78) != 1)) &&
     (*(int *)(param_1 + 0x7c) != 1)) {
    puVar2 = (undefined4 *)(param_1 + 0x14);
    for (iVar1 = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
        iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *(undefined4 *)register0x00000010;
      puVar2 = puVar2 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Cannot_set_orientation_i_005b0934);
}



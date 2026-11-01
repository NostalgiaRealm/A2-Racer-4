
/* ==== FUN_004576f0 @ 004576f0 ==== 
 * signature: undefined __fastcall FUN_004576f0(int param_1)
 * body: 004576f0-00457743;00457747-00457749
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00457744-00457746
 */

void __fastcall FUN_004576f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  (**(code **)(**(int **)(param_1 + 0x54) + 0xc))(*(int **)(param_1 + 0x54),param_1);
  piVar1 = *(int **)(*(int *)(*DAT_0073b784 + unaff_ESI * 4) + 0x2c);
  iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,*(undefined4 *)(param_1 + 0x50));
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_setting_material_a_005a3a4c);
  }
  return;
}



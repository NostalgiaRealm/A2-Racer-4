
/* ==== FUN_004c7520 @ 004c7520 ==== 
 * signature: undefined4 __cdecl FUN_004c7520(int param_1)
 * body: 004c7520-004c7552;004c7556-004c759e;004c75a2-004c75a7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c7553-004c7555 004c759f-004c75a1
 */

undefined4 __cdecl FUN_004c7520(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  if (DAT_00740950 == 0) {
    return 0;
  }
  if ((param_1 < 0) || (DAT_00740928 < param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____sound_buffer_index_ille_005b5394);
  }
  iVar2 = DAT_00740934 + param_1 * 0x44;
  if (*(int *)(iVar2 + 0x30) == 0) {
    return 0;
  }
  piVar1 = *(int **)(iVar2 + 0x28);
  iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,&param_1);
  if (iVar2 != 0) {
    this(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____sound_buffer_index_ille_005b531c);
  }
  return unaff_ESI;
}



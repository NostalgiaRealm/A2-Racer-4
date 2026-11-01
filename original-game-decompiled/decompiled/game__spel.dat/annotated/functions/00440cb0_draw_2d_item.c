
/* ==== draw_2d_item @ 00440cb0 ==== 
 * signature: undefined __cdecl draw_2d_item(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * body: 00440cb0-00440cc8;00440ccc-00440ce2;00440ce6-00440d5c;00440d60-00440da0
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(draw_2d_item) Frame(%d) is not in the anim (%d)']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00440cc9-00440ccb 00440ce3-00440ce5 00440d5d-00440d5f
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(draw_2d_item) Frame(%d) is not in the anim (%d)'] */

void __cdecl draw_2d_item(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 < 0) || (0x54 < param_2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__draw_2d_item__illegal_info_inde_0059cbf4);
  }
  if ((0 < param_1) && (param_1 < 3)) {
    iVar2 = (param_2 + (uint)(DAT_006fb894 == 0) * 0x54) * 0xc;
    iVar3 = *(int *)(&DAT_0059c18c + iVar2) + param_5;
    if ((DAT_006fb890 == 1) && (DAT_006fb894 != 0)) {
      iVar3 = iVar3 + 0x140;
    }
    if (*(int *)(*(int *)(&DAT_0059c188 + iVar2) * 0xc + DAT_00740a1c) <= param_3) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__draw_2d_item__Frame__d__is_not_i_0059cc38);
    }
    iVar1 = *(int *)(*(int *)(*(int *)(&DAT_0059c188 + iVar2) * 0xc + 8 + DAT_00740a1c) + 4 +
                    param_3 * 8);
    if (param_4 != 0) {
      FUN_004c8f30(param_1,iVar1,iVar3,*(int *)(&DAT_0059c190 + iVar2) + param_6,1);
      return;
    }
    FUN_004c8f30(param_1,iVar1,iVar3,*(int *)(&DAT_0059c190 + iVar2) + param_6,3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__draw_2d_item__illegal_focus_0059cc18);
}



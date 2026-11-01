
/* ==== FUN_00431280 @ 00431280 ==== 
 * signature: undefined __thiscall FUN_00431280(void * this, undefined4 * param_1, int param_2)
 * body: 00431280-0043129c;004312a0-004312c1;004312c5-00431315
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043129d-0043129f 004312c2-004312c4
 */

void __thiscall FUN_00431280(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)this == -1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Tyre_position_requested_f_00597cf8);
  }
  if ((-1 < param_2) && (param_2 < 2)) {
    iVar4 = FUN_004a8600((void *)(*(int *)this * 0xf0 + DAT_00715e50),param_2 + 2);
    iVar1 = DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8;
    uVar2 = *(undefined4 *)(iVar1 + 4);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    *param_1 = *(undefined4 *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_tyre_index___d__r_00597d5c);
}



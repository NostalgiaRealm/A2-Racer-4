
/* ==== FUN_00440b10 @ 00440b10 ==== 
 * signature: int __cdecl FUN_00440b10(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * body: 00440b10-00440b4c;00440b50-00440b53
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00440b4d-00440b4f
 */

int __cdecl FUN_00440b10(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_00740a1c + 8 + param_3 * 0xc) + 4 + param_4 * 8);
  if ((-1 < iVar1) && (iVar1 <= DAT_005b5ea8)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Anim___d__Frame__d_____I_0059cb24);
}




/* ==== FUN_004a8c50 @ 004a8c50 ==== 
 * signature: undefined4 __fastcall FUN_004a8c50(int param_1)
 * body: 004a8c50-004a8c7c;004a8c83-004a8cab
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a8c7d-004a8c82
 */

undefined4 __fastcall FUN_004a8c50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8);
  iVar1 = DAT_0073b0d0 + iVar1 + iVar1 * 0xa8;
  if (iVar2 == 1) {
    return *(undefined4 *)(iVar1 + 0x99);
  }
  if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Invalid_object_type__005afc8c);
  }
  return *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(iVar1 + 4) * 9 + 4 + DAT_0073b168) + *(int *)(iVar1 + 8) * 4)
           * 0x10 + DAT_0073b120);
}



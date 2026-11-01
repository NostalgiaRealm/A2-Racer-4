
/* ==== FUN_004a8030 @ 004a8030 ==== 
 * signature: undefined __thiscall FUN_004a8030(void * this, undefined4 param_1)
 * body: 004a8030-004a805c;004a8064-004a80dc
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a805d-004a8063
 */

void __thiscall FUN_004a8030(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8);
  iVar1 = DAT_0073b0d0 + iVar1 + iVar1 * 0xa8;
  if (iVar2 == 1) {
    iVar1 = *(int *)(iVar1 + 0x99);
  }
  else {
    if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Invalid_object_type__005afc8c);
    }
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) * 9 + 4 + DAT_0073b168) +
                             *(int *)(iVar1 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  iVar2 = 0;
  iVar1 = iVar1 * 0xac;
  if (0 < *(int *)(iVar1 + 0x84 + DAT_0073b5c8)) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(iVar1 + 0x80 + DAT_0073b5c8) + 0x10 + iVar3) = param_1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(iVar1 + 0x84 + DAT_0073b5c8));
  }
  return;
}



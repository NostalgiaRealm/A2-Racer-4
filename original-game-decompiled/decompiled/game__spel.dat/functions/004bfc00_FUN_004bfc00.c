
/* ==== FUN_004bfc00 @ 004bfc00 ==== 
 * signature: undefined __thiscall FUN_004bfc00(void * this, undefined4 * param_1, int param_2)
 * body: 004bfc00-004bfc1c;004bfc20-004bfc39;004bfc3d-004bfc65;004bfc69-004bfc85
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bfc1d-004bfc1f 004bfc3a-004bfc3c 004bfc66-004bfc68
 */

void __thiscall FUN_004bfc00(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)this != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
  }
  if (*(int *)((int)this + 4) != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
  }
  if ((-1 < param_2) && (param_2 < *(int *)((int)this + 0x84))) {
    puVar2 = (undefined4 *)(*(int *)((int)this + 0x80) + param_2 * 0x20);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
}



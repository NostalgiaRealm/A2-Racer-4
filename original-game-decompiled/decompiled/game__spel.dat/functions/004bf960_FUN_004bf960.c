
/* ==== FUN_004bf960 @ 004bf960 ==== 
 * signature: undefined __thiscall FUN_004bf960(void * this, undefined4 * param_1, int param_2)
 * body: 004bf960-004bf979;004bf97d-004bf993;004bf997-004bf9b9;004bf9bd-004bf9d6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bf97a-004bf97c 004bf994-004bf996 004bf9ba-004bf9bc
 */

void __thiscall FUN_004bf960(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)this != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_005afd94);
  }
  if (*(int *)((int)this + 4) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
  }
  if ((-1 < param_2) && (param_2 < *(int *)((int)this + 0x7c))) {
    puVar2 = (undefined4 *)(*(int *)((int)this + 0x78) + param_2 * 0x20);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____index__d_is_out_of_VERT_005996e4);
}



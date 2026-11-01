
/* ==== FUN_004bf9e0 @ 004bf9e0 ==== 
 * signature: undefined __thiscall FUN_004bf9e0(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004bf9e0-004bf9fb;004bf9ff-004bfa37;004bfa3b-004bfacc;004bfad0-004bfae8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bf9fc-004bf9fe 004bfa38-004bfa3a 004bfacd-004bfacf
 */

void __thiscall
FUN_004bf9e0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  if (*(int *)((int)this + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____mesh_has_not_been_initi_005b2664);
  }
  if (*(int *)this == 1) {
    if ((param_1 < 0) || (*(int *)((int)this + 0x7c) <= param_1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
    }
    puVar1 = &param_2;
    puVar3 = (undefined4 *)(*(int *)((int)this + 0x78) + param_1 * 0x20);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else if (*(int *)this == 2) {
    if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x84))) {
      iVar2 = param_1 * 0x20;
      *(undefined4 *)(*(int *)((int)this + 0x80) + iVar2) = param_2;
      *(undefined4 *)(*(int *)((int)this + 0x80) + 4 + iVar2) = param_3;
      *(undefined4 *)(*(int *)((int)this + 0x80) + 8 + iVar2) = param_4;
      *(undefined4 *)(*(int *)((int)this + 0x80) + 0x18 + iVar2) = in_stack_00000020;
      *(undefined4 *)(*(int *)((int)this + 0x80) + 0x1c + iVar2) = in_stack_00000024;
      *(undefined4 *)(*(int *)((int)this + 0x80) + 0x10 + iVar2) = 0xffffff;
      *(undefined4 *)(*(int *)((int)this + 0x80) + 0x14 + iVar2) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
  }
  return;
}



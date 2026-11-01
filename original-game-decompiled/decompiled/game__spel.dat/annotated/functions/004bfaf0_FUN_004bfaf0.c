
/* ==== FUN_004bfaf0 @ 004bfaf0 ==== 
 * signature: undefined __thiscall FUN_004bfaf0(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004bfaf0-004bfb0b;004bfb0f-004bfb44;004bfb48-004bfb8c;004bfb90-004bfbf0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bfb0c-004bfb0e 004bfb45-004bfb47 004bfb8d-004bfb8f
 */

void __thiscall
FUN_004bfaf0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
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
    iVar1 = param_1 * 0x20;
    *(undefined4 *)(*(int *)((int)this + 0x78) + iVar1) = param_2;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 4 + iVar1) = param_3;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 8 + iVar1) = param_4;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0xc + iVar1) = param_2;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0x10 + iVar1) = param_3;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0x14 + iVar1) = param_4;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0x18 + iVar1) = in_stack_00000020;
    *(undefined4 *)(*(int *)((int)this + 0x78) + 0x1c + iVar1) = in_stack_00000024;
  }
  else if (*(int *)this == 2) {
    if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x84))) {
      puVar2 = &param_2;
      puVar3 = (undefined4 *)(*(int *)((int)this + 0x80) + param_1 * 0x20);
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
  }
  return;
}



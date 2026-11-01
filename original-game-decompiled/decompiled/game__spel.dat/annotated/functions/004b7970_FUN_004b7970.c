
/* ==== FUN_004b7970 @ 004b7970 ==== 
 * signature: int __thiscall FUN_004b7970(void * this, uint * param_1)
 * body: 004b7970-004b79c0;004b79c4-004b79f7;004b79fb-004b7a20;004b7a24-004b7a45;004b7a49-004b7a95;004b7a99-004b7b0c;004b7b10-004b7b35;004b7b39-004b7b5a;004b7b5e-004b7ba7;004b7bae-004b7be2;004b7be6-004b7c0b;004b7c0f-004b7c30;004b7c34-004b7ca0;004b7ca4-004b7cc9;004b7ccd-004b7cee;004b7cf2-004b7d26
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b79c1-004b79c3 004b79f8-004b79fa 004b7a21-004b7a23 004b7a46-004b7a48 004b7a96-004b7a98 004b7b0d-004b7b0f 004b7b36-004b7b38 004b7b5b-004b7b5d 004b7ba8-004b7bad 004b7be3-004b7be5 004b7c0c-004b7c0e 004b7c31-004b7c33 004b7ca1-004b7ca3 004b7cca-004b7ccc 004b7cef-004b7cf1
 */

int __thiscall FUN_004b7970(void *this,uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  
  FUN_004c3fa0((byte *)s_get_mesh_index___s_005b13f4);
  iVar4 = *(int *)((int)this + 0x1c);
  iVar9 = 0;
  if (0 < iVar4) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)((int)this + 0x1c) <= iVar9)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
      }
      if (*(char *)(*(int *)((int)this + 0x28) + iVar9) != '\0') {
        if (*(int *)((int)this + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar7 < 0) || (*(int *)((int)this + 0x1c) <= iVar9)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(*(int *)((int)this + 0x28) + iVar9) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        iVar2 = __strcmpi((char *)param_1,(char *)(*(int *)((int)this + 0x18) + iVar7));
        if (iVar2 == 0) {
          FUN_004c3fa0((byte *)s___already_used__index__d_005b13d8);
          if (*(int *)((int)this + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
          }
          if ((-1 < iVar9) && (iVar9 < *(int *)((int)this + 0x1c))) {
            if (*(char *)(*(int *)((int)this + 0x28) + iVar9) != '\0') {
              piVar1 = (int *)(iVar9 * 0x15 + 0x11 + *(int *)((int)this + 0x18));
              *piVar1 = *piVar1 + 1;
              return iVar9;
            }
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
          }
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0x15;
    } while (iVar9 < iVar4);
  }
  piVar1 = (int *)((int)this + 0x18);
  if (*(int *)((int)this + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  iVar4 = *(int *)((int)this + 0x20);
  if (iVar4 < *(int *)((int)this + 0x1c)) {
    iVar9 = *(int *)((int)this + 0x28);
    iVar7 = iVar4;
    do {
      if (*(char *)(iVar9 + iVar7) == '\0') goto LAB_004b7b82;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)((int)this + 0x1c));
  }
  iVar7 = 0;
  if (0 < iVar4) {
    iVar9 = *(int *)((int)this + 0x28);
    do {
      if (*(char *)(iVar9 + iVar7) == '\0') goto LAB_004b7b82;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
LAB_004b7b82:
  *(undefined1 *)(iVar9 + iVar7) = 1;
  *(int *)((int)this + 0x20) = iVar7;
  FUN_004c3fa0((byte *)s___not_yet_used__adding_to_list___005b13b0);
  if (*(int *)((int)this + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((iVar7 < 0) || (*(int *)((int)this + 0x1c) <= iVar7)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(*(int *)((int)this + 0x28) + iVar7) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar4 = *piVar1;
  puVar3 = FUN_005690b0(param_1);
  uVar5 = 0xffffffff;
  do {
    puVar10 = puVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    puVar10 = (uint *)((int)puVar3 + 1);
    uVar6 = *puVar3;
    puVar3 = puVar10;
  } while ((char)uVar6 != '\0');
  uVar5 = ~uVar5;
  puVar8 = (undefined4 *)((int)puVar10 - uVar5);
  puVar11 = (undefined4 *)(iVar7 * 0x15 + iVar4);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  if (*(int *)((int)this + 0x24) != 0) {
    if ((-1 < iVar7) && (iVar7 < *(int *)((int)this + 0x1c))) {
      if (*(char *)(*(int *)((int)this + 0x28) + iVar7) != '\0') {
        iVar4 = *piVar1;
        iVar9 = FUN_004bc8c0(2,(char *)param_1);
        *(int *)(iVar4 + iVar7 * 0x15 + 0xd) = iVar9;
        iVar4 = FUN_004b8410(piVar1,iVar7);
        *(undefined4 *)(iVar4 + 0x11) = 1;
        return iVar7;
      }
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
}




/* ==== FUN_004b7d30 @ 004b7d30 ==== 
 * signature: int __thiscall FUN_004b7d30(void * this, uint * param_1, int * param_2)
 * body: 004b7d30-004b7d83;004b7d87-004b7dbd;004b7dc1-004b7de6;004b7dea-004b7e0b;004b7e0f-004b7e5b;004b7e5f-004b7ebd;004b7ec1-004b7ee6;004b7eea-004b7f0b;004b7f0f-004b7f76;004b7f82-004b7fba;004b7fbe-004b7fe3;004b7fe7-004b8008;004b800c-004b8084;004b8088-004b80b1;004b80b5-004b80d6;004b80da-004b8146
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b7d84-004b7d86 004b7dbe-004b7dc0 004b7de7-004b7de9 004b7e0c-004b7e0e 004b7e5c-004b7e5e 004b7ebe-004b7ec0 004b7ee7-004b7ee9 004b7f0c-004b7f0e 004b7f77-004b7f81 004b7fbb-004b7fbd 004b7fe4-004b7fe6 004b8009-004b800b 004b8085-004b8087 004b80b2-004b80b4 004b80d7-004b80d9
 */

int __thiscall FUN_004b7d30(void *this,uint *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  
  FUN_004c3fa0((byte *)s_get_texture_index___s_005b140c);
  iVar4 = *(int *)((int)this + 0x62);
  iVar8 = 0;
  if (0 < iVar4) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)((int)this + 0x62) <= iVar8)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
      }
      if (*(char *)(*(int *)((int)this + 0x6e) + iVar8) != '\0') {
        if (*(int *)((int)this + 0x6a) == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar7 < 0) || (*(int *)((int)this + 0x62) <= iVar8)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(*(int *)((int)this + 0x6e) + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        iVar2 = __strcmpi((char *)param_1,(char *)(*(int *)((int)this + 0x5e) + iVar7));
        if (iVar2 == 0) {
          FUN_004c3fa0((byte *)s___already_used__index__d_005b13d8);
          if (*(int *)((int)this + 0x6a) == 0) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
          }
          if ((-1 < iVar8) && (iVar8 < *(int *)((int)this + 0x62))) {
            if (*(char *)(*(int *)((int)this + 0x6e) + iVar8) != '\0') {
              piVar1 = (int *)(iVar8 * 0x15 + 0x11 + *(int *)((int)this + 0x5e));
              *piVar1 = *piVar1 + 1;
              return iVar8;
            }
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
          }
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x15;
    } while (iVar8 < iVar4);
  }
  piVar1 = (int *)((int)this + 0x5e);
  if (*(int *)((int)this + 0x6a) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  iVar4 = *(int *)((int)this + 0x66);
  if (iVar4 < *(int *)((int)this + 0x62)) {
    iVar8 = iVar4;
    do {
      if (*(char *)(*(int *)((int)this + 0x6e) + iVar8) == '\0') {
        *(undefined1 *)(*(int *)((int)this + 0x6e) + iVar8) = 1;
        *(int *)((int)this + 0x66) = iVar8;
        goto LAB_004b7f86;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)this + 0x62));
  }
  iVar8 = 0;
  if (iVar4 < 1) {
LAB_004b7f5a:
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
  }
  while (*(char *)(*(int *)((int)this + 0x6e) + iVar8) != '\0') {
    iVar8 = iVar8 + 1;
    if (iVar4 <= iVar8) goto LAB_004b7f5a;
  }
  *(undefined1 *)(*(int *)((int)this + 0x6e) + iVar8) = 1;
  *(int *)((int)this + 0x66) = iVar8;
LAB_004b7f86:
  FUN_004c3fa0((byte *)s___not_yet_used__adding_to_list___005b13b0);
  if (*(int *)((int)this + 0x6a) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((iVar8 < 0) || (*(int *)((int)this + 0x62) <= iVar8)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(*(int *)((int)this + 0x6e) + iVar8) == '\0') {
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
  puVar9 = (undefined4 *)((int)puVar10 - uVar5);
  puVar11 = (undefined4 *)(iVar8 * 0x15 + iVar4);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  if (*(int *)((int)this + 0x14) == 0) {
    iVar4 = FUN_004b8e00((char *)param_1,param_2);
    iVar7 = FUN_004b8410(piVar1,iVar8);
    *(int *)(iVar7 + 0xd) = iVar4;
  }
  else {
    if (*(int *)((int)this + 0x6a) == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
    }
    if ((iVar8 < 0) || (*(int *)((int)this + 0x62) <= iVar8)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(*(int *)((int)this + 0x6e) + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar4 = *piVar1;
    iVar7 = FUN_004b94e0((char *)param_1);
    *(int *)(iVar4 + iVar8 * 0x15 + 0xd) = iVar7;
  }
  iVar4 = FUN_004b8410(piVar1,iVar8);
  *(undefined4 *)(iVar4 + 0x11) = 1;
  return iVar8;
}



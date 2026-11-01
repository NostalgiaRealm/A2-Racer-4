
/* ==== FUN_004b6c00 @ 004b6c00 ==== 
 * signature: int __thiscall FUN_004b6c00(void * this, char * param_1, int param_2)
 * body: 004b6c00-004b6c56;004b6c5a-004b6cb3;004b6cba-004b6cf5;004b6cf9-004b6d20;004b6d24-004b6d48;004b6d4c-004b6d92;004b6d96-004b6dbd;004b6dc1-004b6de5;004b6de9-004b6e18;004b6e1c-004b6e48;004b6e4c-004b6e73;004b6e77-004b6e9c;004b6ea0-004b6ee1;004b6ee5-004b6f0c;004b6f10-004b6f35;004b6f39-004b6fe0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b6c57-004b6c59 004b6cb4-004b6cb9 004b6cf6-004b6cf8 004b6d21-004b6d23 004b6d49-004b6d4b 004b6d93-004b6d95 004b6dbe-004b6dc0 004b6de6-004b6de8 004b6e19-004b6e1b 004b6e49-004b6e4b 004b6e74-004b6e76 004b6e9d-004b6e9f 004b6ee2-004b6ee4 004b6f0d-004b6f0f 004b6f36-004b6f38 004b6fe1-004b6fed
 */

int __thiscall FUN_004b6c00(void *this,char *param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  FUN_004c3fa0((byte *)s_adding_anim___s__frames__d_005b1244);
  FUN_004b82c0(this);
  iVar7 = DAT_0073b170;
  if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar7 < DAT_0073b16c; iVar7 = iVar7 + 1) {
    if (*(char *)(DAT_0073b178 + iVar7) == '\0') goto LAB_004b6fbc;
  }
  iVar7 = 0;
  if (0 < DAT_0073b170) {
    do {
      if (*(char *)(DAT_0073b178 + iVar7) == '\0') goto LAB_004b6fbc;
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_0073b170);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
LAB_004b6fbc:
  *(undefined1 *)(DAT_0073b178 + iVar7) = 1;
  DAT_0073b170 = iVar7;
  FUN_004c3fa0((byte *)s___anim_index__d_005b1230);
  if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((iVar7 < 0) || (DAT_0073b16c <= iVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b178 + iVar7) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar3 = iVar7 * 9;
  *(int *)(iVar3 + DAT_0073b168) = param_2;
  FUN_004c3fa0((byte *)s___allocate_memory_for_frame_indi_005b1208);
  if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((iVar7 < 0) || (DAT_0073b16c <= iVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b178 + iVar7) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  pvVar2 = _malloc(param_2 * 4);
  *(void **)(iVar3 + 4 + DAT_0073b168) = pvVar2;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d__not_enough_memory_to_allo_005b11a8);
  }
  if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((iVar7 < 0) || (DAT_0073b16c <= iVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b178 + iVar7) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar8 = 0;
  *(undefined1 *)(iVar3 + 8 + DAT_0073b168) = 0;
  if (0 < param_2) {
    do {
      if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
      }
      if ((iVar7 < 0) || (DAT_0073b16c <= iVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(DAT_0073b178 + iVar7) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      iVar8 = iVar8 + 1;
      *(undefined4 *)(*(int *)(iVar3 + 4 + DAT_0073b168) + -4 + iVar8 * 4) = 0xffffffff;
    } while (iVar8 < param_2);
  }
  FUN_004c3fa0((byte *)s___add_name_to_list_005b1190);
  iVar3 = FUN_004b8590((int)this + 0xa4);
  uVar5 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0x18 < ~uVar5 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d__anim_name_is_to_long_max___005b1168);
  }
  pcVar4 = (char *)FUN_004b8620((void *)((int)this + 0xa4),iVar3);
  uVar5 = 0xffffffff;
  do {
    pcVar9 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar9 + -uVar5;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return iVar7;
}



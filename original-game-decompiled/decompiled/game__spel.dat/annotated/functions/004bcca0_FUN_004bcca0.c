
/* ==== FUN_004bcca0 @ 004bcca0 ==== 
 * signature: int __cdecl FUN_004bcca0(int param_1, int param_2, int param_3, int param_4)
 * body: 004bcca0-004bccd9;004bccdd-004bcd01;004bcd05-004bcd27;004bcd2b-004bcd65;004bcd69-004bcd91;004bcd95-004bcdb9;004bcdbd-004bcddf;004bcde3-004bce33;004bce37-004bce5e;004bce62-004bce87;004bce8b-004bcef2;004bcef6-004bcf3c;004bcf40-004bd007;004bd00b-004bd06a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bccda-004bccdc 004bcd02-004bcd04 004bcd28-004bcd2a 004bcd66-004bcd68 004bcd92-004bcd94 004bcdba-004bcdbc 004bcde0-004bcde2 004bce34-004bce36 004bce5f-004bce61 004bce88-004bce8a 004bcef3-004bcef5 004bcf3d-004bcf3f 004bd008-004bd00a
 */

int __cdecl FUN_004bcca0(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int local_28;
  undefined4 local_20 [6];
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = FUN_004bc820();
  iVar5 = 0;
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b5cc <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b5d8 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar6 = iVar2 * 0xac;
  if (*(int *)(iVar6 + 4 + DAT_0073b5c8) != 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____illegal_change_of_mesh_t_005b2480);
  }
  *(undefined4 *)(iVar6 + DAT_0073b5c8) = 2;
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b5cc <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b5d8 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  FUN_004bd600((void *)(iVar6 + DAT_0073b5c8),param_2,param_4);
  local_28 = 0;
  if (0 < param_2) {
    do {
      if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
      }
      if ((iVar2 < 0) || (DAT_0073b5cc <= iVar2)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(DAT_0073b5d8 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      puVar7 = (undefined4 *)(param_1 + iVar5);
      puVar8 = local_20;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      piVar3 = (int *)(iVar6 + DAT_0073b5c8);
      FUN_004bf8c0((int)piVar3);
      if (*piVar3 == 1) {
        if ((iVar5 < 0) || (piVar3[0x1f] <= local_28)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
        }
        *(undefined4 *)(piVar3[0x1e] + iVar5) = local_20[0];
        *(undefined4 *)(piVar3[0x1e] + 4 + iVar5) = local_20[1];
        *(undefined4 *)(piVar3[0x1e] + 8 + iVar5) = local_20[2];
        *(undefined4 *)(piVar3[0x1e] + 0xc + iVar5) = local_20[0];
        *(undefined4 *)(piVar3[0x1e] + 0x10 + iVar5) = local_20[1];
        *(undefined4 *)(piVar3[0x1e] + 0x14 + iVar5) = local_20[2];
        *(undefined4 *)(piVar3[0x1e] + 0x18 + iVar5) = local_8;
        *(undefined4 *)(piVar3[0x1e] + 0x1c + iVar5) = local_4;
      }
      else if (*piVar3 == 2) {
        if ((iVar5 < 0) || (piVar3[0x21] <= local_28)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
        }
        puVar7 = local_20;
        puVar8 = (undefined4 *)(piVar3[0x20] + iVar5);
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      local_28 = local_28 + 1;
      iVar5 = iVar5 + 0x20;
    } while (local_28 < param_2);
  }
  iVar5 = 0;
  if (0 < param_4) {
    do {
      uVar1 = *(undefined2 *)(param_3 + iVar5 * 2);
      iVar6 = FUN_004b6080(&DAT_0073b5c8,iVar2);
      FUN_004bf8c0(iVar6);
      if ((iVar5 < 0) || (*(int *)(iVar6 + 0x94) <= iVar5)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____getting_index____d___is_005b24cc);
      }
      *(undefined2 *)(*(int *)(iVar6 + 0x90) + iVar5 * 2) = uVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_4);
  }
  piVar3 = (int *)FUN_004b6080(&DAT_0073b5c8,iVar2);
  FUN_004bf570(piVar3);
  pcVar9 = s_static_mesh_005b24c0;
  iVar5 = FUN_004b6080(&DAT_0073b5c8,iVar2);
  FUN_004c1ae0((void *)(iVar5 + 0x98),pcVar9);
  return iVar2;
}



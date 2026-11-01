
/* ==== FUN_004ba4c0 @ 004ba4c0 ==== 
 * signature: undefined __cdecl FUN_004ba4c0(int param_1)
 * body: 004ba4c0-004ba4e6;004ba4ea-004ba528;004ba52c-004ba553;004ba55c-004ba581;004ba58a-004ba5cb;004ba5d4-004ba5f3;004ba5fc-004ba621;004ba62a-004ba652;004ba65b-004ba67a;004ba67e-004ba6a3;004ba6a7-004ba6f5;004ba6fe-004ba720;004ba729-004ba74e;004ba757-004ba77f;004ba788-004ba7aa;004ba7ae-004ba7d2;004ba7d6-004ba809;004ba80d-004ba80f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ba4e7-004ba4e9 004ba529-004ba52b 004ba554-004ba55b 004ba582-004ba589 004ba5cc-004ba5d3 004ba5f4-004ba5fb 004ba622-004ba629 004ba653-004ba65a 004ba67b-004ba67d 004ba6a4-004ba6a6 004ba6f6-004ba6fd 004ba721-004ba728 004ba74f-004ba756 004ba780-004ba787 004ba7ab-004ba7ad 004ba7d3-004ba7d5 004ba80a-004ba80c
 */

void __cdecl FUN_004ba4c0(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  if ((param_1 < 0) || (DAT_0073b1b4 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Illegal_texturenumber___005b1b78);
  }
  bVar2 = FUN_004c1030(0x73b258);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return;
  }
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (DAT_0073b1c0[param_1] == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar3 = param_1 * 0x48;
  if (*(int *)(iVar3 + 0x44 + DAT_0073b1b0) == 1) {
    if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if (DAT_0073b1b4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*DAT_0073b1c0 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if (DAT_0073b1b4 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*DAT_0073b1c0 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar3 = (**(code **)(**(int **)(DAT_0073b1b0 + 0x10) + 0x14))
                      (*(int **)(DAT_0073b1b0 + 0x10),*(undefined4 *)(DAT_0073b1b0 + 0xc));
    if (iVar3 == 0) {
      return;
    }
    FUN_004bb290(iVar3);
  }
  else {
    if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (DAT_0073b1c0[param_1] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (DAT_0073b1c0[param_1] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    piVar1 = *(int **)(iVar3 + 0x10 + DAT_0073b1b0);
    iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,*(undefined4 *)(iVar3 + 0xc + DAT_0073b1b0));
    if (iVar3 == 0) {
      return;
    }
    FUN_004bb290(iVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____D3DError_get_texturehan_005b1718);
}



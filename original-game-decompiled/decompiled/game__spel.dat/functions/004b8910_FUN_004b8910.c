
/* ==== FUN_004b8910 @ 004b8910 ==== 
 * signature: undefined __cdecl FUN_004b8910(char * param_1)
 * body: 004b8910-004b8946;004b894a-004b897b;004b897f-004b89a3;004b89a7-004b89c9;004b89cd-004b8a09;004b8a0d-004b8a31;004b8a35-004b8a5a;004b8a5e-004b8aa0;004b8aa4-004b8ae7;004b8aeb-004b8b0f;004b8b13-004b8b38;004b8b3c-004b8b6f;004b8b73-004b8b7b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b8947-004b8949 004b897c-004b897e 004b89a4-004b89a6 004b89ca-004b89cc 004b8a0a-004b8a0c 004b8a32-004b8a34 004b8a5b-004b8a5d 004b8aa1-004b8aa3 004b8ae8-004b8aea 004b8b10-004b8b12 004b8b39-004b8b3b 004b8b70-004b8b72
 */

void __cdecl FUN_004b8910(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0073b208;
  DAT_0073b208 = 1;
  iVar2 = FUN_004b8e00(param_1,(int *)0xffffffff);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____main_accummulator_textu_005b152c);
  }
  if (DAT_0073b21c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((DAT_005b1ba8 < 0) || (DAT_0073b214 <= DAT_005b1ba8)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b220 + DAT_005b1ba8) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar2 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
  *(undefined4 *)(iVar2 + 0x60) = 0;
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
  *(undefined4 *)(iVar2 + 0x48) = *DAT_0073b1b0;
  *(undefined4 *)(iVar2 + 0x58) = 1;
  if (*(int *)(iVar2 + 0x5c) == 1) {
    *(undefined4 *)(iVar2 + 0x58) = 0;
    (**(code **)(**(int **)(iVar2 + 0x54) + 0xc))(*(int **)(iVar2 + 0x54),iVar2);
  }
  if (DAT_0073b4cc != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
  }
  if (DAT_0073b4ec != 0) {
    DAT_0073b4ec = 0;
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
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,1,*DAT_0073b1b0);
    if (iVar2 != 0) {
      FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
    }
  }
  DAT_0073b208 = uVar1;
  return;
}



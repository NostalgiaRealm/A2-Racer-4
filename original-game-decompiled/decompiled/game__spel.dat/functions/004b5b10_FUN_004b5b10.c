
/* ==== FUN_004b5b10 @ 004b5b10 ==== 
 * signature: undefined __fastcall FUN_004b5b10(int param_1)
 * body: 004b5b10-004b5b5f;004b5b63-004b5b8a;004b5b8e-004b5bb3;004b5bb7-004b5bf6;004b5bfa-004b5c21;004b5c25-004b5c4a;004b5c4e-004b5c9e;004b5ca2-004b5cce;004b5cd2-004b5cf6;004b5cfa-004b5d3a;004b5d3e-004b5d69;004b5d6d-004b5d92;004b5d96-004b5dd1;004b5dd5-004b5e12;004b5e16-004b5e86
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b5b60-004b5b62 004b5b8b-004b5b8d 004b5bb4-004b5bb6 004b5bf7-004b5bf9 004b5c22-004b5c24 004b5c4b-004b5c4d 004b5c9f-004b5ca1 004b5ccf-004b5cd1 004b5cf7-004b5cf9 004b5d3b-004b5d3d 004b5d6a-004b5d6c 004b5d93-004b5d95 004b5dd2-004b5dd4 004b5e13-004b5e15
 */

void __fastcall FUN_004b5b10(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  int unaff_EDI;
  undefined4 *puVar4;
  undefined4 auStack_40 [16];
  
  FUN_004b5760(param_1);
  if (*(int *)(param_1 + 0x95) == -1) {
    iVar2 = *(int *)(param_1 + 4);
    if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((iVar2 < 0) || (DAT_0073b16c <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b178 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar2 = *(int *)(*(int *)(iVar2 * 9 + 4 + DAT_0073b168) + *(int *)(param_1 + 8) * 4);
    if (DAT_0073b12c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((iVar2 < 0) || (DAT_0073b124 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b130 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
  }
  iVar2 = *(int *)(param_1 + 0x99);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 4);
    if (DAT_0073b174 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((iVar2 < 0) || (DAT_0073b16c <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b178 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar2 = *(int *)(*(int *)(iVar2 * 9 + 4 + DAT_0073b168) + *(int *)(param_1 + 8) * 4);
    if (DAT_0073b12c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((iVar2 < 0) || (DAT_0073b124 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b130 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar2 = *(int *)(iVar2 * 0x10 + DAT_0073b120);
  }
  puVar3 = (undefined4 *)(param_1 + 0x10);
  puVar4 = auStack_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (DAT_0073b4cc != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
  }
  puVar3 = auStack_40;
  puVar4 = &DAT_0073b474;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
  if (iVar1 == 0) {
    DAT_0073b11c = DAT_0073b11c + 1;
    if (*(int *)(unaff_ESI + 0xa5) == 0) {
      if (DAT_0073b529 != 0) {
        DAT_0073b529 = 0;
        (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
      }
    }
    else if (DAT_0073b529 == 0) {
      DAT_0073b529 = 1;
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
    }
    FUN_004bd070(iVar2,unaff_EDI);
    return;
  }
  FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
}




/* ==== FUN_004b8e00 @ 004b8e00 ==== 
 * signature: int __cdecl FUN_004b8e00(char * param_1, int * param_2)
 * body: 004b8e00-004b8e35;004b8e39-004b8e60;004b8e64-004b8e89;004b8e8d-004b8ed9;004b8edd-004b8f04;004b8f08-004b8f2c;004b8f30-004b8f6b;004b8f6f-004b8f96;004b8f9a-004b8fbe;004b8fc2-004b8ffd;004b9001-004b9028;004b902c-004b9050;004b9054-004b908f;004b9093-004b90ba;004b90be-004b90e2;004b90e6-004b9114
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b8e36-004b8e38 004b8e61-004b8e63 004b8e8a-004b8e8c 004b8eda-004b8edc 004b8f05-004b8f07 004b8f2d-004b8f2f 004b8f6c-004b8f6e 004b8f97-004b8f99 004b8fbf-004b8fc1 004b8ffe-004b9000 004b9029-004b902b 004b9051-004b9053 004b9090-004b9092 004b90bb-004b90bd 004b90e3-004b90e5
 */

int __cdecl FUN_004b8e00(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b9120();
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar2 = iVar1 * 0x48;
  FUN_004b9b40((void *)(DAT_0073b1b0 + iVar2),param_1,0,param_2);
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x34 + iVar2) = 0;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x38 + iVar2) = 0;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x3c + iVar2) = 0x3f800000;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar1) && (iVar1 < DAT_0073b1b4)) {
    if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(undefined4 *)(DAT_0073b1b0 + 0x40 + iVar2) = 0x3f800000;
    iVar2 = FUN_004ba990(&DAT_0073b1b0,iVar1);
    *(undefined4 *)(iVar2 + 0x44) = 0;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



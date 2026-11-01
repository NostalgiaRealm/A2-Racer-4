
/* ==== FUN_004b4fa0 @ 004b4fa0 ==== 
 * signature: int __cdecl FUN_004b4fa0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004b4fa0-004b4fd5;004b4fd9-004b5000;004b5004-004b5029;004b502d-004b5075;004b5079-004b50a0;004b50a4-004b50c9;004b50cd-004b5108;004b510c-004b5133;004b5137-004b515b;004b515f-004b5199;004b519d-004b51c4;004b51c8-004b51ed;004b51f1-004b522e;004b5232-004b5259;004b525d-004b5282;004b529b-004b52b0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b4fd6-004b4fd8 004b5001-004b5003 004b502a-004b502c 004b5076-004b5078 004b50a1-004b50a3 004b50ca-004b50cc 004b5109-004b510b 004b5134-004b5136 004b515c-004b515e 004b519a-004b519c 004b51c5-004b51c7 004b51ee-004b51f0 004b522f-004b5231 004b525a-004b525c 004b5283-004b529a
 */

int __cdecl FUN_004b4fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004b4bd0();
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar1 = iVar2 * 0xa9;
  *(undefined4 *)(iVar1 + DAT_0073b0d0) = 2;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar1 + 4 + DAT_0073b0d0) = param_1;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar1 + 8 + DAT_0073b0d0) = param_2;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar1 + 0x9d + DAT_0073b0d0) = param_3;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar2) && (iVar2 < DAT_0073b0d4)) {
    if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(undefined4 *)(iVar1 + 0x91 + DAT_0073b0d0) = 1;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



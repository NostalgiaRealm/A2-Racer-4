
/* ==== FUN_004b91c0 @ 004b91c0 ==== 
 * signature: int __cdecl FUN_004b91c0(char * param_1, int * param_2)
 * body: 004b91c0-004b91f5;004b91f9-004b9220;004b9224-004b9249;004b924d-004b9299;004b929d-004b92c4;004b92c8-004b92ec;004b92f0-004b932b;004b932f-004b9356;004b935a-004b937e;004b9382-004b93bd;004b93c1-004b93e8;004b93ec-004b9410;004b9414-004b944f;004b9453-004b947a;004b947e-004b94a2;004b94a6-004b94d4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b91f6-004b91f8 004b9221-004b9223 004b924a-004b924c 004b929a-004b929c 004b92c5-004b92c7 004b92ed-004b92ef 004b932c-004b932e 004b9357-004b9359 004b937f-004b9381 004b93be-004b93c0 004b93e9-004b93eb 004b9411-004b9413 004b9450-004b9452 004b947b-004b947d 004b94a3-004b94a5
 */

int __cdecl FUN_004b91c0(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b9120();
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar2 = iVar1 * 0x48;
  FUN_004b9b40((void *)(DAT_0073b1b0 + iVar2),param_1,4,param_2);
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x34 + iVar2) = 0;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x38 + iVar2) = 0;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(DAT_0073b1b0 + 0x3c + iVar2) = 0x3f800000;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar1) && (iVar1 < DAT_0073b1b4)) {
    if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(undefined4 *)(DAT_0073b1b0 + 0x40 + iVar2) = 0x3f800000;
    iVar2 = FUN_004ba990(&DAT_0073b1b0,iVar1);
    *(undefined4 *)(iVar2 + 0x44) = 0;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



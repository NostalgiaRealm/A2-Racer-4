
/* ==== FUN_004b4c70 @ 004b4c70 ==== 
 * signature: int __cdecl FUN_004b4c70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * body: 004b4c70-004b4ca2;004b4ca6-004b4cca;004b4cce-004b4cf0;004b4cf4-004b4d39;004b4d3d-004b4d61;004b4d65-004b4d87;004b4d8b-004b4dc6;004b4dca-004b4dee;004b4df2-004b4e13;004b4e17-004b4e51;004b4e55-004b4e79;004b4e7d-004b4e9f;004b4ea3-004b4eeb;004b4eef-004b4f13;004b4f17-004b4f38;004b4f3c-004b4f96
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b4ca3-004b4ca5 004b4ccb-004b4ccd 004b4cf1-004b4cf3 004b4d3a-004b4d3c 004b4d62-004b4d64 004b4d88-004b4d8a 004b4dc7-004b4dc9 004b4def-004b4df1 004b4e14-004b4e16 004b4e52-004b4e54 004b4e7a-004b4e7c 004b4ea0-004b4ea2 004b4eec-004b4eee 004b4f14-004b4f16 004b4f39-004b4f3b
 */

int __cdecl
FUN_004b4c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
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
  iVar3 = iVar2 * 0xa9;
  *(undefined4 *)(iVar3 + DAT_0073b0d0) = 1;
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
  *(undefined4 *)(iVar3 + 0x99 + DAT_0073b0d0) = param_7;
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
  *(undefined4 *)(iVar3 + 0x95 + DAT_0073b0d0) = param_8;
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
  puVar1 = (undefined4 *)(iVar3 + 0x50 + DAT_0073b0d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar2) && (iVar2 < DAT_0073b0d4)) {
    if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    puVar1 = (undefined4 *)(iVar3 + 0x74 + DAT_0073b0d0);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    puVar1[2] = param_6;
    iVar3 = FUN_004b5ff0(&DAT_0073b0d0,iVar2);
    *(undefined4 *)(iVar3 + 0x9d) = param_9;
    iVar3 = FUN_004b5ff0(&DAT_0073b0d0,iVar2);
    *(undefined4 *)(iVar3 + 0x91) = 1;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



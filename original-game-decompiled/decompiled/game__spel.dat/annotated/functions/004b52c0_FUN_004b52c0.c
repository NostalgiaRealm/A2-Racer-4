
/* ==== FUN_004b52c0 @ 004b52c0 ==== 
 * signature: int __cdecl FUN_004b52c0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * body: 004b52c0-004b52f5;004b52f9-004b5320;004b5324-004b5349;004b534d-004b5395;004b5399-004b53c0;004b53c4-004b53e9;004b53ed-004b5428;004b542c-004b5453;004b5457-004b547b;004b547f-004b54b9;004b54bd-004b54e4;004b54e8-004b550d;004b5511-004b555c;004b5560-004b5587;004b558b-004b55af;004b55b3-004b5613
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b52f6-004b52f8 004b5321-004b5323 004b534a-004b534c 004b5396-004b5398 004b53c1-004b53c3 004b53ea-004b53ec 004b5429-004b542b 004b5454-004b5456 004b547c-004b547e 004b54ba-004b54bc 004b54e5-004b54e7 004b550e-004b5510 004b555d-004b555f 004b5588-004b558a 004b55b0-004b55b2
 */

int __cdecl
FUN_004b52c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004b4bd0();
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar3 = iVar2 * 0xa9;
  *(undefined4 *)(iVar3 + DAT_0073b0d0) = 2;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar3 + 4 + DAT_0073b0d0) = param_7;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar3 + 8 + DAT_0073b0d0) = param_8;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  puVar1 = (undefined4 *)(iVar3 + 0x50 + DAT_0073b0d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar2) && (iVar2 < DAT_0073b0d4)) {
    if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
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
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



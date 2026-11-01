
/* ==== FUN_004baf10 @ 004baf10 ==== 
 * signature: int __stdcall FUN_004baf10(void)
 * body: 004baf10-004baf86;004baf8a-004bafae;004bafb2-004bafd3;004bafd7-004bb009;004bb00d-004bb031;004bb035-004bb056;004bb05a-004bb0c2;004bb0c6-004bb0ea;004bb0ee-004bb10f;004bb113-004bb187
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004baf87-004baf89 004bafaf-004bafb1 004bafd4-004bafd6 004bb00a-004bb00c 004bb032-004bb034 004bb057-004bb059 004bb0c3-004bb0c5 004bb0eb-004bb0ed 004bb110-004bb112
 */

int FUN_004baf10(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f68b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_004bae70();
  puVar3 = operator_new(0x68);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_004bb190(puVar3);
  }
  local_4 = 0xffffffff;
  if (DAT_0073b21c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b214 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b220 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 **)(DAT_0073b210 + iVar2 * 4) = puVar3;
  if (DAT_0073b21c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b214 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b220 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar1 = *(int *)(DAT_0073b210 + iVar2 * 4);
  *(undefined4 *)(iVar1 + 0x14) = DAT_0073b688;
  *(undefined4 *)(iVar1 + 0x18) = DAT_0073b68c;
  *(undefined4 *)(iVar1 + 0x1c) = DAT_0073b690;
  *(undefined4 *)(iVar1 + 0x58) = 1;
  if (*(int *)(iVar1 + 0x5c) == 1) {
    *(undefined4 *)(iVar1 + 0x58) = 0;
    (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
  }
  if (DAT_0073b21c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar2) && (iVar2 < DAT_0073b214)) {
    if (*(char *)(DAT_0073b220 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar1 = *(int *)(DAT_0073b210 + iVar2 * 4);
    *(undefined4 *)(iVar1 + 4) = DAT_0073b688;
    *(undefined4 *)(iVar1 + 8) = DAT_0073b68c;
    *(undefined4 *)(iVar1 + 0xc) = DAT_0073b690;
    *(undefined4 *)(iVar1 + 0x58) = 1;
    if (*(int *)(iVar1 + 0x5c) == 1) {
      *(undefined4 *)(iVar1 + 0x58) = 0;
      (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
    }
    piVar4 = (int *)FUN_004b6110(&DAT_0073b210,iVar2);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x58) != 0) {
      *(undefined4 *)(iVar1 + 0x58) = 0;
      (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
    }
    ExceptionList = pvStack_c;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}



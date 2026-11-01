
/* ==== FUN_00413a7c @ 00413a7c ==== 
 * signature: undefined __register FUN_00413a7c(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00413a7c-00413af1;00413b15-00413b19
 */

void FUN_00413a7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  pcStack_18 = thunk_FUN_00403408;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403178(*(int **)(param_4 + -0x10),*(undefined4 *)(*(int *)(param_4 + -0xc) + 0x2c),param_3);
  (**(code **)(**(int **)(param_4 + -0xc) + 0x1c))
            (*(int **)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x10),param_4 + -0x18);
  if (DAT_004ac61c != (code *)0x0) {
    iVar2 = (*DAT_004ac61c)(*(undefined4 *)(param_4 + -0x18));
    if (iVar2 == *(int *)(param_4 + -0x10)) {
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 0x200;
    }
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}




/* ==== FUN_00413b1c @ 00413b1c ==== 
 * signature: undefined __register FUN_00413b1c(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * body: 00413b1c-00413b96;00413bba-00413bbe
 */

void FUN_00413b1c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  pcStack_18 = thunk_FUN_00403408;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = FUN_00415374(*(int *)(param_4 + -0xc),*(char **)(param_4 + -0x14),param_3);
  uVar2 = (**(code **)(**(int **)(param_4 + -0xc) + 0x14))
                    (*(int **)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x18),iVar1);
  *(undefined4 *)(param_4 + -0x10) = uVar2;
  iVar1 = FUN_00403178(*(int **)(param_4 + -0x10),param_4,extraout_ECX);
  *(int *)(*(int *)(param_4 + -0xc) + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_4 + -0xc) + 0x2c) =
         *(undefined4 *)(*(int *)(param_4 + -0xc) + 0x18);
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}



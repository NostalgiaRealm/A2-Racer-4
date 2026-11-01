
/* ==== FUN_00411ec8 @ 00411ec8 ==== 
 * signature: undefined __register FUN_00411ec8(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00411ec8-00411f3d;00411f61-00411f65
 */

void FUN_00411ec8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  pcStack_18 = thunk_FUN_00403180;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00402ef0(*(int **)(param_4 + -0x10),*(undefined4 *)(*(int *)(param_4 + -0xc) + 0x2c),param_3);
  (**(code **)(**(int **)(param_4 + -0xc) + 0x1c))
            (*(int **)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x10),param_4 + -0x18);
  if (DAT_00447614 != (code *)0x0) {
    iVar2 = (*DAT_00447614)(*(undefined4 *)(param_4 + -0x18));
    if (iVar2 == *(int *)(param_4 + -0x10)) {
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 0x200;
    }
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}



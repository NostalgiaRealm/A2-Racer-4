
/* ==== FUN_00411db8 @ 00411db8 ==== 
 * signature: undefined __register FUN_00411db8(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * body: 00411db8-00411e71;00411e89-00411e9d;00411ec1-00411ec5
 */

void FUN_00411db8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  pcStack_18 = thunk_FUN_00403180;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x411ddd;
  iVar2 = FUN_004137c0(*(int *)(param_4 + -0xc),*(char **)(param_4 + -0x14),param_3);
  *(undefined4 *)(param_4 + -0x10) = 0;
  if (*(short *)(*(int *)(param_4 + -0xc) + 0x6a) != 0) {
    puStack_20 = (undefined1 *)(param_4 + -0x10);
    pcStack_24 = (code *)0x411e0f;
    (**(code **)(*(int *)(param_4 + -0xc) + 0x68))
              (*(undefined4 *)(*(int *)(param_4 + -0xc) + 0x6c),*(undefined4 *)(param_4 + -0xc),
               iVar2);
  }
  if (*(int *)(param_4 + -0x10) == 0) {
    puStack_20 = (undefined1 *)0x411e1d;
    uVar3 = (**(code **)(iVar2 + -0xc))();
    *(undefined4 *)(param_4 + -0x10) = uVar3;
    if ((*(byte *)(param_4 + -1) & 4) != 0) {
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 1;
      puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
      *puVar1 = *puVar1 | 0x200;
    }
    pcStack_24 = thunk_FUN_00403180;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    (**(code **)(**(int **)(param_4 + -0x10) + 0x2c))
              (*(int **)(param_4 + -0x10),0xffffffff,
               *(undefined4 *)(*(int *)(param_4 + -0xc) + 0x28));
    *in_FS_OFFSET = uStack_28;
  }
  puVar1 = (ushort *)(*(int *)(param_4 + -0x10) + 0x20);
  *puVar1 = *puVar1 | 1;
  *in_FS_OFFSET = uStack_1c;
  return;
}



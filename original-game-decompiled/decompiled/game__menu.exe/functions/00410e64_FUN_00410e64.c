
/* ==== FUN_00410e64 @ 00410e64 ==== 
 * signature: undefined __register FUN_00410e64(int * param_1)
 * body: 00410e64-00410ebd;00410ec5-00410ec8
 */

void FUN_00410e64(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  if (0 < *(int *)(param_1[2] + 8)) {
    puStack_10 = (undefined1 *)0x410e80;
    (**(code **)(*param_1 + 0x14))();
    pcStack_14 = thunk_FUN_004036bc;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    while (puVar1 = puStack_10, 0 < (int)((undefined4 *)param_1[2])[2]) {
      piVar2 = (int *)FUN_00410398((undefined4 *)param_1[2]);
      FUN_00402f9c(piVar2);
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x410ec5;
    pcStack_14 = (code *)0x410ebd;
    (**(code **)(*param_1 + 0x18))(param_1,*param_1,puVar1);
    return;
  }
  return;
}



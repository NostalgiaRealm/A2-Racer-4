
/* ==== FUN_0040f774 @ 0040f774 ==== 
 * signature: undefined __register FUN_0040f774(int * param_1)
 * body: 0040f774-0040f7cd;0040f7d5-0040f7d8
 */

void FUN_0040f774(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  if (0 < *(int *)(param_1[2] + 8)) {
    puStack_10 = (undefined1 *)0x40f790;
    (**(code **)(*param_1 + 0x14))();
    pcStack_14 = thunk_FUN_00403434;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    while (puVar1 = puStack_10, 0 < (int)((undefined4 *)param_1[2])[2]) {
      piVar2 = (int *)FUN_0040f10c((undefined4 *)param_1[2]);
      FUN_00402d14(piVar2);
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x40f7d5;
    pcStack_14 = (code *)0x40f7cd;
    (**(code **)(*param_1 + 0x18))(param_1,*param_1,puVar1);
    return;
  }
  return;
}



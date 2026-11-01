
/* ==== FUN_00416d90 @ 00416d90 ==== 
 * signature: undefined4 __register FUN_00416d90(int param_1)
 * body: 00416d90-00416e5c;00416e64-00416e6d
 */

undefined4 FUN_00416d90(int param_1)

{
  byte bVar1;
  int *piVar2;
  HBRUSH pHVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  LOGBRUSH local_14;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_18 = (undefined1 *)0x416db3;
    FUN_004159cc(DAT_0044769c);
    pcStack_1c = thunk_FUN_00403434;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    if (*(int *)(local_8 + 8) == 0) {
      piVar2 = *(int **)(local_8 + 0x18);
      if (piVar2 == (int *)0x0) {
        local_14.lbHatch = 0;
        bVar1 = *(byte *)(local_8 + 0x1c);
        if (bVar1 == 0) {
          local_14.lbStyle = 0;
          puStack_18 = &stack0xfffffffc;
        }
        else if (bVar1 == 1) {
          local_14.lbStyle = 1;
          puStack_18 = &stack0xfffffffc;
        }
        else {
          local_14.lbStyle = 2;
          local_14.lbHatch = (bVar1 & 0x7f) - 2;
          puStack_18 = &stack0xfffffffc;
        }
      }
      else {
        local_14.lbStyle = 3;
        puStack_18 = &stack0xfffffffc;
        (**(code **)(*piVar2 + 0x68))(piVar2,1);
        local_14.lbHatch = (**(code **)(**(int **)(local_8 + 0x18) + 0x60))();
      }
      local_14.lbColor = FUN_004160cc(*(uint *)(local_8 + 0x14));
      pHVar3 = CreateBrushIndirect(&local_14);
      *(HBRUSH *)(local_8 + 8) = pHVar3;
    }
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x416e64;
    pcStack_1c = (code *)0x416e5c;
    uVar4 = FUN_004159d8(DAT_0044769c);
    return uVar4;
  }
  return *(undefined4 *)(local_8 + 8);
}



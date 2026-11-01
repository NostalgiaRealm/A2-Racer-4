
/* ==== FUN_004966c8 @ 004966c8 ==== 
 * signature: undefined __register FUN_004966c8(int param_1)
 * body: 004966c8-0049678a
 */

void FUN_004966c8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined4 *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 0xb8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x360) + 0xb8))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x36c) + 0xb8))();
      if (cVar1 != '\0') {
        FUN_00403cf4((int *)&local_8,0x4967c8);
      }
    }
    else {
      FUN_00403cf4((int *)&local_8,0x4967b4);
    }
  }
  else {
    FUN_00403cf4((int *)&local_8,0x4967a0);
  }
  FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int *)(param_1 + 0x34c),local_8);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))();
  TGroupBox_set_Visible(*(int **)(param_1 + 0x350),uVar2,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00496792;
  pcStack_14 = (code *)0x49678a;
  FUN_00403c5c((int *)&local_8);
  return;
}




/* ==== TScrollingWinControl.dyn_b03c @ 00445c10 ==== 
 * signature: undefined __register TScrollingWinControl.dyn_b03c(int * param_1, int param_2)
 * body: 00445c10-00445c70
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TScrollingWinControl_dyn_b03c(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = *(undefined4 *)(param_2 + 4);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_00403114(param_1,(int)&PTR_TWinControl_vmt_000_004421b4);
  if ((char)uVar1 == '\0') {
    *(undefined4 *)(local_c + 4) = 1;
  }
  TWinControl_dyn_b03c(local_8,local_c);
  *in_FS_OFFSET = uStack_1c;
  *(undefined4 *)(local_c + 4) = local_10;
  return;
}



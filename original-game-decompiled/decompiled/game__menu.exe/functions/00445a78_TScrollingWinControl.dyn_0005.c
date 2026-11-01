
/* ==== TScrollingWinControl.dyn_0005 @ 00445a78 ==== 
 * signature: undefined __register TScrollingWinControl.dyn_0005(int * param_1, int param_2)
 * body: 00445a78-00445ae1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TScrollingWinControl_dyn_0005(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = &stack0xfffffffc;
  param_1[0x7f] = param_1[0x7f] + 1;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  TWinControl_dyn_0005(param_1,param_2);
  uVar2 = 0;
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == 1) {
    uVar2 = 1;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  (**(code **)(*param_1 + 0xbc))(param_1,uVar2);
  *in_FS_OFFSET = uStack_18;
  param_1[0x7f] = param_1[0x7f] + -1;
  return;
}



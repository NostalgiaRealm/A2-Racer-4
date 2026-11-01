
/* ==== TMenuItem.dyn_fff9 @ 00434e50 ==== 
 * signature: undefined TMenuItem.dyn_fff9(void)
 * body: 00434e50-00434ea1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TMenuItem_dyn_fff9(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    FUN_00434c88(*(int **)(param_1 + 0x58),param_1);
  }
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_00431a24);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00402e8c(param_2,(int)&PTR_TMenuItem_vmt_000_00431628);
      if ((char)uVar1 != '\0') {
        FUN_00434c6c(param_2,param_1);
      }
    }
    else {
      FUN_00434c6c(param_2[10],param_1);
    }
  }
  return;
}



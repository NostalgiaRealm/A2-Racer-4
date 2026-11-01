
/* ==== TMenuItem.dyn_fff9 @ 0043f530 ==== 
 * signature: undefined TMenuItem.dyn_fff9(void)
 * body: 0043f530-0043f581
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TMenuItem_dyn_fff9(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    FUN_0043f368(*(int **)(param_1 + 0x58),param_1);
  }
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_0043c104);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00403114(param_2,(int)&PTR_TMenuItem_vmt_000_0043bd08);
      if ((char)uVar1 != '\0') {
        FUN_0043f34c(param_2,param_1);
      }
    }
    else {
      FUN_0043f34c(param_2[10],param_1);
    }
  }
  return;
}



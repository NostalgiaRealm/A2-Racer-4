
/* ==== FUN_0043d4bc @ 0043d4bc ==== 
 * signature: undefined __register FUN_0043d4bc(int param_1)
 * body: 0043d4bc-0043d52a
 */

void FUN_0043d4bc(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int **)(param_1 + 100) != (int *)0x0) &&
     (uVar1 = FUN_00403114(*(int **)(param_1 + 100),(int)&PTR_TPersistent_vmt_000_0043c1f8),
     (char)uVar1 != '\0')) {
    FUN_0043fb34(param_1,'\0');
    FUN_00440004(param_1,'\0');
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_00440a7c(*(int *)(param_1 + 100));
  }
  FUN_0043cce4(FUN_0043d4a0,*(int *)(param_1 + 0x5c),param_1);
  return;
}



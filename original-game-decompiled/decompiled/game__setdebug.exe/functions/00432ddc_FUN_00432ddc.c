
/* ==== FUN_00432ddc @ 00432ddc ==== 
 * signature: undefined __register FUN_00432ddc(int param_1)
 * body: 00432ddc-00432e4a
 */

void FUN_00432ddc(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int **)(param_1 + 100) != (int *)0x0) &&
     (uVar1 = FUN_00402e8c(*(int **)(param_1 + 100),(int)&PTR_TPersistent_vmt_000_00431b18),
     (char)uVar1 != '\0')) {
    FUN_00435454(param_1,'\0');
    FUN_00435924(param_1,'\0');
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_0043639c(*(int *)(param_1 + 100));
  }
  FUN_00432604(FUN_00432dc0,*(int *)(param_1 + 0x5c),param_1);
  return;
}



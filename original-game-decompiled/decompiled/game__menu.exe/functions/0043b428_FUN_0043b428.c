
/* ==== FUN_0043b428 @ 0043b428 ==== 
 * signature: bool __register FUN_0043b428(void)
 * body: 0043b428-0043b481
 */

bool FUN_0043b428(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    iVar4 = FUN_0043a91c(*(int **)(in_stack_00000004 + -8));
    return 0 < iVar4;
  }
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  uVar3 = FUN_00403114(piVar1,(int)&PTR_TCustomImageList_vmt_000_0043a15c);
  if (((char)uVar3 != '\0') &&
     (cVar2 = FUN_0043b338(*(int **)(in_stack_00000004 + -8),piVar1), cVar2 != '\0')) {
    return false;
  }
  return true;
}




/* ==== FUN_00430d48 @ 00430d48 ==== 
 * signature: bool __register FUN_00430d48(void)
 * body: 00430d48-00430da1
 */

bool FUN_00430d48(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) == 0) {
    iVar4 = FUN_00430464(*(int **)(in_stack_00000004 + -8));
    return 0 < iVar4;
  }
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  uVar3 = FUN_00402e8c(piVar1,(int)&PTR_TCustomImageList_vmt_000_0042fef4);
  if (((char)uVar3 != '\0') &&
     (cVar2 = FUN_00430c58(*(int **)(in_stack_00000004 + -8),piVar1), cVar2 != '\0')) {
    return false;
  }
  return true;
}



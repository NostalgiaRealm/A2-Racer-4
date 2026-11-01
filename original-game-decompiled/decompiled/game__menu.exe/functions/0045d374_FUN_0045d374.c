
/* ==== FUN_0045d374 @ 0045d374 ==== 
 * signature: bool __register FUN_0045d374(void)
 * body: 0045d374-0045d3c7
 */

bool FUN_0045d374(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int in_stack_00000004;
  
  bVar4 = true;
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (piVar1 != (int *)0x0) {
    bVar4 = false;
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_0045ca28);
    uVar5 = (char)uVar2 == '\0';
    if (!(bool)uVar5) {
      iVar3 = FUN_0040312c(piVar1,(int)&PTR_TPersistent_vmt_000_0045ca28);
      FUN_00403fec(*(uint **)(*(int *)(in_stack_00000004 + -8) + 8),*(uint **)(iVar3 + 8));
      bVar4 = !(bool)uVar5;
    }
  }
  return bVar4;
}



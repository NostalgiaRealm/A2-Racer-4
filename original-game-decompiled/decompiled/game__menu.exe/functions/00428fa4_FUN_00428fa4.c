
/* ==== FUN_00428fa4 @ 00428fa4 ==== 
 * signature: undefined __register FUN_00428fa4(void)
 * body: 00428fa4-0042900a
 */

void FUN_00428fa4(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x24);
  if (iVar1 != 0) {
    iVar2 = FUN_004317bc(iVar1);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        piVar3 = (int *)FUN_00431780(iVar1,iVar5);
        if (piVar3 != *(int **)(in_stack_00000004 + -4)) {
          uVar4 = FUN_00403114(piVar3,(int)&PTR_TWinControl_vmt_000_004251c4);
          if ((char)uVar4 != '\0') {
            (**(code **)(*piVar3 + 0xb8))(piVar3,0);
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}



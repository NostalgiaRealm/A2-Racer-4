
/* ==== FUN_00408ce4 @ 00408ce4 ==== 
 * signature: undefined __register FUN_00408ce4(void)
 * body: 00408ce4-00408d0d
 */

void FUN_00408ce4(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000004;
  
  piVar2 = (int *)(in_stack_00000004 + -4);
  iVar1 = *piVar2;
  while (*(char *)*piVar2 == *(char *)(in_stack_00000004 + -5)) {
    *piVar2 = *piVar2 + 1;
  }
  *(int *)(in_stack_00000004 + -0xc) = (*piVar2 - iVar1) + 1;
  return;
}



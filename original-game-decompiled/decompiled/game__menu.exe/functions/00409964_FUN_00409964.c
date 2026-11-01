
/* ==== FUN_00409964 @ 00409964 ==== 
 * signature: undefined __register FUN_00409964(void)
 * body: 00409964-0040998d
 */

void FUN_00409964(void)

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



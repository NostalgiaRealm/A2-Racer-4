
/* ==== FUN_0043a8c0 @ 0043a8c0 ==== 
 * signature: undefined __register FUN_0043a8c0(void)
 * body: 0043a8c0-0043a9c5
 */

void FUN_0043a8c0(void)

{
  int *piVar1;
  int in_stack_00000004;
  
  piVar1 = (int *)(in_stack_00000004 + -4);
  FUN_0042a8b4(*(int **)(*piVar1 + 4));
  FUN_0041de60();
  if (0 < *(int *)(*piVar1 + 0x24)) {
    FUN_0042a8b4(*(int **)(*piVar1 + 4));
    FUN_0041de60();
  }
  if (0 < *(int *)(*piVar1 + 0x38)) {
    FUN_0042a8b4(*(int **)(*piVar1 + 4));
    FUN_0041de60();
  }
  if (0 < *(int *)(*piVar1 + 0x30)) {
    FUN_0042a8b4(*(int **)(*piVar1 + 4));
    FUN_0041de60();
  }
  FUN_004160cc(*(uint *)(*piVar1 + 0x28));
  FUN_0042a8b4(*(int **)(*piVar1 + 4));
  FUN_0041de60();
  return;
}



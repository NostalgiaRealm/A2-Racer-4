
/* ==== FUN_00445270 @ 00445270 ==== 
 * signature: undefined __register FUN_00445270(void)
 * body: 00445270-00445375
 */

void FUN_00445270(void)

{
  int *piVar1;
  int in_stack_00000004;
  
  piVar1 = (int *)(in_stack_00000004 + -4);
  FUN_004349e0(*(int **)(*piVar1 + 4));
  FUN_00420d70();
  if (0 < *(int *)(*piVar1 + 0x24)) {
    FUN_004349e0(*(int **)(*piVar1 + 4));
    FUN_00420d70();
  }
  if (0 < *(int *)(*piVar1 + 0x38)) {
    FUN_004349e0(*(int **)(*piVar1 + 4));
    FUN_00420d70();
  }
  if (0 < *(int *)(*piVar1 + 0x30)) {
    FUN_004349e0(*(int **)(*piVar1 + 4));
    FUN_00420d70();
  }
  FUN_00417d54(*(uint *)(*piVar1 + 0x28));
  FUN_004349e0(*(int **)(*piVar1 + 4));
  FUN_00420d70();
  return;
}



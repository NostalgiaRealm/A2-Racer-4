
/* ==== FUN_004415b4 @ 004415b4 ==== 
 * signature: undefined __register FUN_004415b4(void)
 * body: 004415b4-004415ed
 */

void FUN_004415b4(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  
  LVar1 = DefWindowProcA(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),
                         **(UINT **)(in_stack_00000004 + -8),
                         *(WPARAM *)(*(int *)(in_stack_00000004 + -8) + 4),
                         *(LPARAM *)(*(int *)(in_stack_00000004 + -8) + 8));
  *(LRESULT *)(*(int *)(in_stack_00000004 + -8) + 0xc) = LVar1;
  return;
}



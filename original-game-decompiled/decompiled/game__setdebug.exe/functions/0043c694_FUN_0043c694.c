
/* ==== FUN_0043c694 @ 0043c694 ==== 
 * signature: undefined __register FUN_0043c694(void)
 * body: 0043c694-0043c6dd
 */

void FUN_0043c694(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  
  LVar1 = CallWindowProcA(*(WNDPROC *)(*(int *)(in_stack_00000004 + -4) + 0x25c),
                          *(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x23c),
                          **(UINT **)(in_stack_00000004 + -8),
                          *(WPARAM *)(*(int *)(in_stack_00000004 + -8) + 4),
                          *(LPARAM *)(*(int *)(in_stack_00000004 + -8) + 8));
  *(LRESULT *)(*(int *)(in_stack_00000004 + -8) + 0xc) = LVar1;
  return;
}



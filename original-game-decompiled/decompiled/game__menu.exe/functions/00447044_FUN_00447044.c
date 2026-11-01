
/* ==== FUN_00447044 @ 00447044 ==== 
 * signature: undefined __register FUN_00447044(void)
 * body: 00447044-0044708d
 */

void FUN_00447044(void)

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



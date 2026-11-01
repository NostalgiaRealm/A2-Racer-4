
/* ==== FUN_00422578 @ 00422578 ==== 
 * signature: bool __register FUN_00422578(void)
 * body: 00422578-004225b8
 */

bool FUN_00422578(void)

{
  undefined4 uVar1;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar2;
  int in_stack_00000004;
  
  uVar1 = FUN_00402e8c(*(int **)(in_stack_00000004 + -0x10),(int)&PTR_TWinControl_vmt_000_00420fa8);
  if ((char)uVar1 != '\0') {
    hWnd = (HWND)FUN_0042a8b4(*(int **)(in_stack_00000004 + -0x14));
    hWndParent = (HWND)FUN_0042a8b4(*(int **)(in_stack_00000004 + -0x10));
    BVar2 = IsChild(hWndParent,hWnd);
    return BVar2 != 0;
  }
  return false;
}



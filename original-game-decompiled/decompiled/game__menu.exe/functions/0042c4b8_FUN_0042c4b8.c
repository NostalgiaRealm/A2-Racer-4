
/* ==== FUN_0042c4b8 @ 0042c4b8 ==== 
 * signature: bool __register FUN_0042c4b8(void)
 * body: 0042c4b8-0042c4f8
 */

bool FUN_0042c4b8(void)

{
  undefined4 uVar1;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar2;
  int in_stack_00000004;
  
  uVar1 = FUN_00403114(*(int **)(in_stack_00000004 + -0x10),(int)&PTR_TWinControl_vmt_000_0042ac0c);
  if ((char)uVar1 != '\0') {
    hWnd = (HWND)FUN_004349e0(*(int **)(in_stack_00000004 + -0x14));
    hWndParent = (HWND)FUN_004349e0(*(int **)(in_stack_00000004 + -0x10));
    BVar2 = IsChild(hWndParent,hWnd);
    return BVar2 != 0;
  }
  return false;
}



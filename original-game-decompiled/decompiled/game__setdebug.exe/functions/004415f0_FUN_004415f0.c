
/* ==== FUN_004415f0 @ 004415f0 ==== 
 * signature: undefined __register FUN_004415f0(void)
 * body: 004415f0-00441639
 */

void FUN_004415f0(void)

{
  HDC hDC;
  HICON hIcon;
  int in_stack_00000004;
  tagPAINTSTRUCT local_44;
  
  hDC = BeginPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  hIcon = (HICON)FUN_00441cd8(*(int *)(in_stack_00000004 + -4));
  DrawIcon(hDC,0,0,hIcon);
  EndPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  return;
}



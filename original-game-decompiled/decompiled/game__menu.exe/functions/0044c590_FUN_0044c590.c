
/* ==== FUN_0044c590 @ 0044c590 ==== 
 * signature: undefined __register FUN_0044c590(void)
 * body: 0044c590-0044c5d9
 */

void FUN_0044c590(void)

{
  HDC hDC;
  HICON hIcon;
  int in_stack_00000004;
  tagPAINTSTRUCT local_44;
  
  hDC = BeginPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  hIcon = (HICON)FUN_0044cc78(*(int *)(in_stack_00000004 + -4));
  DrawIcon(hDC,0,0,hIcon);
  EndPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x24),&local_44);
  return;
}



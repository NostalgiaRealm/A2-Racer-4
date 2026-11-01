
/* ==== FUN_0043e188 @ 0043e188 ==== 
 * signature: undefined __register FUN_0043e188(void)
 * body: 0043e188-0043e280
 */

void FUN_0043e188(void)

{
  HWND hWnd;
  HMENU hMenu;
  int in_stack_00000004;
  BOOL bRevert;
  
  if (((*(char *)(*(int *)(in_stack_00000004 + -4) + 0x211) != '\0') &&
      ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x210) & 1) != 0)) &&
     (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x217) != '\x01')) {
    bRevert = 0;
    hWnd = (HWND)FUN_0042a8b4(*(int **)(in_stack_00000004 + -4));
    hMenu = GetSystemMenu(hWnd,bRevert);
    if (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x211) == '\x03') {
      DeleteMenu(hMenu,0xf130,0);
      DeleteMenu(hMenu,7,0x400);
      DeleteMenu(hMenu,5,0x400);
      DeleteMenu(hMenu,0xf030,0);
      DeleteMenu(hMenu,0xf020,0);
      DeleteMenu(hMenu,0xf000,0);
      DeleteMenu(hMenu,0xf120,0);
    }
    else {
      if ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x210) & 2) == 0) {
        EnableMenuItem(hMenu,0xf020,1);
      }
      if ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x210) & 4) == 0) {
        EnableMenuItem(hMenu,0xf030,1);
      }
    }
  }
  return;
}



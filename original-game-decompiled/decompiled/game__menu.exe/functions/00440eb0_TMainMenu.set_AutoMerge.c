
/* ==== TMainMenu.set_AutoMerge @ 00440eb0 ==== 
 * signature: undefined TMainMenu.set_AutoMerge(void)
 * body: 00440eb0-00440ece
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMainMenu_set_AutoMerge(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4c)) {
    *(char *)(param_1 + 0x4c) = param_2;
    if (*(HWND *)(param_1 + 0x2c) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x2c),0xb015,0,0);
    }
  }
  return;
}



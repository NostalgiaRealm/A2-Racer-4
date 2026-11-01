
/* ==== TMainMenu.set_OwnerDraw @ 004361f8 ==== 
 * signature: undefined TMainMenu.set_OwnerDraw(void)
 * body: 004361f8-00436205
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMainMenu_set_OwnerDraw(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x34)) {
    *(char *)(param_1 + 0x34) = param_2;
    FUN_00435bfc(param_1);
  }
  return;
}



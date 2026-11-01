
/* ==== TMenuItem.get_Action @ 00434920 ==== 
 * signature: undefined4 __register TMenuItem.get_Action(int param_1)
 * body: 00434920-0043492d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TMenuItem_get_Action(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x10);
  }
  return 0;
}



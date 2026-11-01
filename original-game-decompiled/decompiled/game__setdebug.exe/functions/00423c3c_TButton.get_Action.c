
/* ==== TButton.get_Action @ 00423c3c ==== 
 * signature: undefined4 __register TButton.get_Action(int param_1)
 * body: 00423c3c-00423c49
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TButton_get_Action(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10);
  }
  return 0;
}



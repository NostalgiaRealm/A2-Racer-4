
/* ==== TControlScrollBar.set_ThumbSize @ 0043a864 ==== 
 * signature: undefined TControlScrollBar.set_ThumbSize(void)
 * body: 0043a864-0043a878
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControlScrollBar_set_ThumbSize(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_0043ad98(*(int *)(param_1 + 4));
  }
  return;
}



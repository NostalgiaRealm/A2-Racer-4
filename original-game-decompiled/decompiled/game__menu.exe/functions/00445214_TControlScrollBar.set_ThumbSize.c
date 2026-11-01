
/* ==== TControlScrollBar.set_ThumbSize @ 00445214 ==== 
 * signature: undefined TControlScrollBar.set_ThumbSize(void)
 * body: 00445214-00445228
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControlScrollBar_set_ThumbSize(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_00445748(*(int *)(param_1 + 4));
  }
  return;
}



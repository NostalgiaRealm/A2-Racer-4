
/* ==== TMenuItem.set_ImageIndex @ 00434990 ==== 
 * signature: undefined __register TMenuItem.set_ImageIndex(int * param_1, int param_2)
 * body: 00434990-0043499f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_ImageIndex(int *param_1,int param_2)

{
  if (param_2 != param_1[0xd]) {
    param_1[0xd] = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}



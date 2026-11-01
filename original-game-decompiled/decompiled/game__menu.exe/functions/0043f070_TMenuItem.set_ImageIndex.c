
/* ==== TMenuItem.set_ImageIndex @ 0043f070 ==== 
 * signature: undefined __register TMenuItem.set_ImageIndex(int * param_1, int param_2)
 * body: 0043f070-0043f07f
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



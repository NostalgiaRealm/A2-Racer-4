
/* ==== TMenuItem.set_Visible @ 0043f060 ==== 
 * signature: undefined __register TMenuItem.set_Visible(int * param_1, char param_2)
 * body: 0043f060-0043f06f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_Visible(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x32)) {
    *(char *)((int)param_1 + 0x32) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}



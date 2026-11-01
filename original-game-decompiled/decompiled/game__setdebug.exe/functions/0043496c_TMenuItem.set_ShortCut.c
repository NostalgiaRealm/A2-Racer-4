
/* ==== TMenuItem.set_ShortCut @ 0043496c ==== 
 * signature: undefined __register TMenuItem.set_ShortCut(int * param_1, short param_2)
 * body: 0043496c-0043497d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_ShortCut(int *param_1,short param_2)

{
  if (param_2 != (short)param_1[0x15]) {
    *(short *)(param_1 + 0x15) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}



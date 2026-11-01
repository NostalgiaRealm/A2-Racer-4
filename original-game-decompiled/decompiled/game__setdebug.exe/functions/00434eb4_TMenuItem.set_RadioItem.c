
/* ==== TMenuItem.set_RadioItem @ 00434eb4 ==== 
 * signature: undefined __register TMenuItem.set_RadioItem(int * param_1, char param_2)
 * body: 00434eb4-00434edc
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_RadioItem(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x31)) {
    *(char *)((int)param_1 + 0x31) = param_2;
    if (((char)param_1[0xb] != '\0') && (*(char *)((int)param_1 + 0x31) != '\0')) {
      FUN_004347c8((int)param_1);
    }
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}



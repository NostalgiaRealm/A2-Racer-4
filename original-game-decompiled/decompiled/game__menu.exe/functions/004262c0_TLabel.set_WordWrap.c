
/* ==== TLabel.set_WordWrap @ 004262c0 ==== 
 * signature: undefined __register TLabel.set_WordWrap(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004262c0-004262e6
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_WordWrap(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x12f)) {
    *(char *)((int)param_1 + 0x12f) = (char)param_2;
    FUN_00403178(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}



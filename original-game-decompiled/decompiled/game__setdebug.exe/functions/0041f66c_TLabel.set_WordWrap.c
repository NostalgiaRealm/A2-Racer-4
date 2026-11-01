
/* ==== TLabel.set_WordWrap @ 0041f66c ==== 
 * signature: undefined __register TLabel.set_WordWrap(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0041f66c-0041f692
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_WordWrap(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x12f)) {
    *(char *)((int)param_1 + 0x12f) = (char)param_2;
    FUN_00402ef0(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}



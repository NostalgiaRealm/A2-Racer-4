
/* ==== TMenuItem.set_AutoLineReduction @ 00435a60 ==== 
 * signature: undefined TMenuItem.set_AutoLineReduction(void)
 * body: 00435a60-00435a6f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_AutoLineReduction(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xc]) {
    *(char *)(param_1 + 0xc) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}



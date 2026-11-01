
/* ==== TBevel.set_Style @ 00450094 ==== 
 * signature: undefined TBevel.set_Style(void)
 * body: 00450094-004500a7
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TBevel_set_Style(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4a]) {
    *(char *)(param_1 + 0x4a) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}



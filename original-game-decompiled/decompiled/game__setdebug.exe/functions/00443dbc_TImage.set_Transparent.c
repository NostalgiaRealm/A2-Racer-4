
/* ==== TImage.set_Transparent @ 00443dbc ==== 
 * signature: undefined TImage.set_Transparent(void)
 * body: 00443dbc-00443dd1
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TImage_set_Transparent(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x13b)) {
    *(char *)(param_1 + 0x13b) = param_2;
    FUN_00443dd4(param_1,param_1);
  }
  return;
}



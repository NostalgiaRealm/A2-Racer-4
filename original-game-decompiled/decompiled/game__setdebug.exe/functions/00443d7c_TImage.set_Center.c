
/* ==== TImage.set_Center @ 00443d7c ==== 
 * signature: undefined TImage.set_Center(void)
 * body: 00443d7c-00443d91
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TImage_set_Center(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x139)) {
    *(char *)(param_1 + 0x139) = param_2;
    FUN_00443dd4(param_1,param_1);
  }
  return;
}


